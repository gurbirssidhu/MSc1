#include <fstream>
#include <math.h>

//defining the circuit elements
const double R{0.5};      // resistance in ohms
const double C{1.0};        // capacitance in farads
const double V{0};        // applied voltage in volts

double slope(double value) {
    double result = - value / (R * C) + V / R;
    return result;
}

int main() {    
    // parameters
    double q0{5};         // initial current on capacitor
    double h{0.1};          // step difference
    double init_time{0};
    double final_time{5.0};
    double size_f { (final_time - init_time) / h };
    int size = int(size_f);

    //define the charge vectors
    double charge_eul[size]{};  // Euler method
    double charge_rg[size]{};   // Runge Kutta method
    double charge_an[size]{};   // analytical solution
    charge_eul[0] = q0;         
    charge_an[0] = q0;
    charge_rg[0] = q0;
    
    //  time vector
    double time[size]{};
    for (int i{0}; i < size ; ++i) {
        time[i] = i * h;
        charge_an[i] = C * V + (q0 - C * V) * exp(- time[i] / (R * C));
    }
    
    // solving for q 
    for ( int i{0}; i < size - 1; ++i) {
        // using euler method
        charge_eul[i+1] = charge_eul[i] + h * slope(charge_eul[i]);  

        // using rk method-- RK4
        double k1{ slope(charge_rg[i]) };
        double k2{ slope(charge_rg[i] + h * k1 / 2.0) };
        double k3{ slope(charge_rg[i] + h * k2 / 2.0) };
        double k4{ slope(charge_rg[i] + h * k3) };

        charge_rg[i+1] = charge_rg[i] + (k1 + 2*k2 + 2*k3 + k4) * h / 6; 
    }
    
    // Writing to output file
    std::ofstream plot("/home/gurbir/cpp_cw/rc_plot.dat");
//    plot << "# time" << "\t\t" << "euler" << "\t\t" << "RG" << "\t\t" << "analytical" << '\n';

    for (int i{0}; i < size; ++i) {
        plot << time[i] << "\t\t" << charge_eul[i] << "\t\t" << charge_rg[i] << "\t\t" << charge_an[i] << '\n';
    }

    return 0;
}
