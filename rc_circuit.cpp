#include <fstream>
#include <math.h>

int main() {
    //defining the initial condition:
    double q0{5};       // initial current on capacitor
    double R{0.5};      // resistance in ohms
    double C{1};        // capacitance in farads
    double V{0};        // applied voltage in volts

    // parameters
    double step_diff{0.01};
    double init_time{0};
    double final_time{5};
    double size_f { (final_time - init_time) / step_diff };
    int size = int(size_f);

    //define the charge vector
    double charge_num[size]{};  // numerical solution
    double charge_an[size]{};   // analytical solution
    charge_num[0] = q0;
    charge_an[0] = q0;

    
    //  time vector
    double time[size]{};
    for (int i{0}; i < size ; ++i) {
        time[i] = i * step_diff;
        charge_an[i] = C * V + (q0 - C * V) * exp(- time[i] / (R * C));
    }

    // solving for q using euler method
    for ( int i{0}; i < size - 1; ++i) {
        charge_num[i+1] = (1 - (step_diff / (R * C)))*charge_num[i] + (V * step_diff / R);  
    }
    
    // Writing to output file
    std::ofstream plot("/home/gurbir/cpp_cw/rc_plot.dat");
    plot << "# time" << "\t\t" << "num." << "\t\t" << "analytical" << '\n';

    for (int i{0}; i < size; ++i) {
        plot << time[i] << "\t\t" << charge_num[i] << "\t\t" << charge_an[i] << '\n';
    }

    return 0;
}
