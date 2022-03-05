#include <cmath>
#include <fstream>

int main() {
    // Initial conditions and other parameters
    double q_init = 5; // inital charge on capacitor
    double i_init = 2; // initial current through inductor
    double indc = 1;   // inductance
    double capc = 1;   // capacitance
    double rest = 0.3;   // resistance

    // time vector
    double t_init{0};
    double t_final{20};
    double stepSize{0.01};
    int numElements = (t_final - t_init) / stepSize;

    double time[numElements];
    for (int i{0}; i < numElements; ++i) {
        time[i] = stepSize * i;
    }  

    // defining sinusoidal signal
    double V0{0};      // amplitude
    double freq{2};    // angular frequency
    double signal[numElements];

    for (int i{0}; i < numElements; ++i) {
        signal[i] = V0 * sin(freq*time[i]);
    }

    // Euler method
    double charge[numElements];
    double current[numElements];

    charge[0] = q_init;
    current[0] = i_init;

    for (int i{0}; i < numElements; ++i) {
        charge[i+1] = charge[i] + stepSize * current[i];
        current[i+1] = current[i] + (stepSize / indc) * (signal[i] - rest * current[i] - charge[i]);
    }

    std::ofstream plot("lcr_plot.dat");
    plot << "#time" << "\t\t" << "charge" << "\t\t" << "current" <<'\n';

    for (int i{0}; i < numElements; ++i) {
        plot << time[i] << "\t\t" << charge[i] << "\t\t" << current[i] << '\n';
    }

    return 0;
}
