#include <fstream>
#include <math.h>

//defining the circuit elements
const double R{0.5};      // resistance in ohms
const double L{1.0};        // capacitance in farads
const double V{0};        // applied voltage in volts

double slope(double value) {
    double result = - value * (R/L) + V / L;
    return result;
}

int main() {    
    // parameters
    double i0{10};         // initial current on capacitor
    double h{0.1};          // step difference
    double init_time{0};
    double final_time{5.0};
    double size_f { (final_time - init_time) / h };
    int size = int(size_f);

    //define the curnt vectors
    double curnt_eul[size]{};  // Euler method
    double curnt_rg[size]{};   // Runge Kutta method
    double curnt_an[size]{};   // analytical solution
    curnt_eul[0] = i0;         
    curnt_an[0] = i0;
    curnt_rg[0] = i0;
    
    //  time vector
    double time[size]{};
    for (int i{0}; i < size ; ++i) {
        time[i] = i * h;
        curnt_an[i] = (V/R) + (i0 - (V/R)) * exp(- time[i] * R / L);
    }
    
    // solving for q 
    for ( int i{0}; i < size - 1; ++i) {
        // using euler method
        curnt_eul[i+1] = curnt_eul[i] + h * slope(curnt_eul[i]);  

        // using rk method-- RK4
        double k1{ slope(curnt_rg[i]) };
        double k2{ slope(curnt_rg[i] + h * k1 / 2.0) };
        double k3{ slope(curnt_rg[i] + h * k2 / 2.0) };
        double k4{ slope(curnt_rg[i] + h * k3) };

        curnt_rg[i+1] = curnt_rg[i] + (k1 + 2*k2 + 2*k3 + k4) * h / 6; 
    }
    
    // Writing to output file
    std::ofstream plot("/home/gurbir/cpp_cw/rl_plot.dat");
    plot << "# time" << "\t\t" << "euler" << "\t\t" << "RK" << "\t\t" << "analytical" << '\n';

    for (int i{0}; i < size; ++i) {
        plot << time[i] << "\t\t" << curnt_eul[i] << "\t\t" << curnt_rg[i] << "\t\t" << curnt_an[i] << '\n';
    }

    return 0;
}
