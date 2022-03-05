#include <fstream>
#include <cmath>

// time_vector
double t_init{0};
double t_final{20};
double step_size{0.1};
int num_steps{ (t_final - t_init) / step_size };

// Parameters
double V0{4}; // Amplitude of applied signal
double freq{1};  // Angular frequency of applied signal

double indc{1};     // Inductance
double capc{1};     // Capacitance
double res{0.5};  // Resistance

// initial conditions
double q_init{5};   // initial charge on capacitor
double i_init{2};   // initial current through inductor  

void makeSignal(double amplitude, double freq, double *signal_array, double *time_array) {
    for (int count{0}; count < num_steps; ++count) {
        * (time_array + count) = count * step_size;
        * (signal_array + count) = amplitude * sin(freq * time_array[count]);
    }
}

double slope1(double current, double charge, double signal) {
    return (signal - res * current - (charge / capc)) / indc;
}

double slope2(double current) {
    return current;
}

void solveRungeKutta(double *charge, double *current, double *signal) {
    double k1, k2, k3, k4, q1, q2, q3, q4;
    for (int i{0}; i < num_steps; ++i) {
        k1 = slope1(*(current + i ), *(charge + i), *(signal +i));
        q1 = slope2(*(current + i ));

        k2 = slope1(*(current + i ) + step_size * k1 / 2.0, *(charge + i) + step_size * q1 / 2.0, *(signal +i));
        q2 = slope2(*(current + i ) + step_size * k1 / 2.0);

        k3 = slope1(*(current + i ) + step_size * k2 / 2.0, *(charge + i) + step_size * q2 / 2.0, *(signal +i));
        q3 = slope2(*(current + i ) + step_size * k2 / 2.0);

        k4 = slope1(*(current + i ) + step_size * k3, *(charge + i) + step_size * q3, *(signal +i));
        q4 = slope2(*(current + i ) + step_size * k3);

        *(charge + i + 1) =  *(charge + i) + (q1 + 2*q2 + 2*q3 + q4)*step_size/6; 
        *(current + i + 1) =  *(current + i) + (k1 + 2*k2 + 2*k3 + k4)*step_size/6;
    }
}

int main() {
    double time[num_steps];
    double signal[num_steps];
    makeSignal(V0, freq, signal, time);
    double current[num_steps];
    double charge[num_steps];

    current[0] = i_init;
    charge[0] = q_init;

    solveRungeKutta(charge, current, signal);

    std::ofstream plot("/home/gurbir/cpp_cw/lcr_rg_plot.dat");
    plot << "#time" << "\t\t" << "charge" << "\t\t" << "current" <<'\n';

    for (int i{0}; i < num_steps; ++i) {
        plot << time[i] << "\t\t" << charge[i] << "\t\t" << current[i] << '\n';
    }

    return 0;
}
