#pragma once

// Tip deflection of an end-loaded cantilever: delta = P L^3 / (3 E I)
// Inputs in SI units (N, m, Pa, m^4); returns metres.
double tipDeflection(double load, double length,
                     double youngsModulus, double secondMoment);