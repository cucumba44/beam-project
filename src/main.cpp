#include <iostream>
#include <iomanip>
#include "beam.h"

int main() {
    constexpr double E = 200e9;    // Young's modulus, steel (Pa)
    constexpr double I = 8.33e-6;  // Second moment of area (m^4)
    constexpr double P = 1000.0;   // Tip load (N)
    constexpr double dL = 0.5;     // Length step (m)
    constexpr int nSteps = 6;      // Number of lengths to evaluate

    std::cout << "Cantilever tip deflection, P = "
              << std::fixed << std::setprecision(0) << P << " N\n";
    std::cout << " L (m)   Deflection (mm)\n";

    for (int i = 1; i <= nSteps; ++i) {
        const double L = dL * i;
        const double deltaMm = tipDeflection(P, L, E, I) * 1000.0;
        std::cout << std::setw(6) << std::setprecision(1) << L
                  << std::setw(15) << std::setprecision(4) << deltaMm << '\n';
    }
    return 0;
}