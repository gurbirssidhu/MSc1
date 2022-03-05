#include <fstream>
#include <math.h>

int main() {
    //defining the initial condition:
    double i0{10};       // initial current on capacitor
    double R{0.5};      // resistance in ohms
    double L{1};        // capacitance in farads
    double V{0};        // applied voltage in volts

    // parameters
    double step_diff{0.01};
    double init_time{0};
    double final_time{5};
    double size_f { (final_time - init_time) / step_diff };
    int size = int(size_f);

    //define the curnt vector
    double curnt_num[size]{};  // numerical solution
    double curnt_an[size]{};   // analytical solution
    curnt_num[0] = i0;
    curnt_an[0] = i0;

    
    //  time vector
    double time[size]{};
    for (int i{0}; i < size ; ++i) {
        time[i] = i * step_diff;
        curnt_an[i] = (V/R) + (i0 - (V/R)) * exp(- time[i] * R / L);
    }

    // solving for q using euler method
    for ( int i{0}; i < size - 1; ++i) {
        curnt_num[i+1] = curnt_num[i] + step_diff*((-curnt_num[i]*R/L)+(V/L));  
    }
    
    // Writing to output file
    std::ofstream plot("/home/gurbir/cpp_cw/rl_plot.dat");
    plot << "# time" << "\t\t" << "num." << "\t\t" << "analytical" << '\n';

    for (int i{0}; i < size; ++i) {
        plot << time[i] << "\t\t" << curnt_num[i] << "\t\t" << curnt_an[i] << '\n';
    }

    return 0;
}
