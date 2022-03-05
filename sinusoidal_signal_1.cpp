#include <fstream>
#include <math.h>

int main() {
    // time vector
    double t_init{0};
    double t_final{10};
    double stepSize{0.01};
    int numElements = (t_final - t_init) / stepSize;

    double time[numElements];
    for (int i{0}; i < numElements; ++i) {
        time[i] = stepSize * i;
    }  

    // defining sinusoidal signal
    double V0{4};      // amplitude
    double freq{2};    // angular frequency
    double signal[numElements];

    for (int i{0}; i < numElements; ++i) {
        signal[i] = V0 * sin(freq*time[i]);
    }

    std::ofstream plot("/home/gurbir/cpp_cw/sinusoidal_plot.dat");
    plot << "#time" << "\t\t" << "V(t)" << '\n';

    for (int i{0}; i < numElements; ++i) {
        plot << time[i] << "\t\t" << signal[i] << '\n';
    }

    return 0;
}