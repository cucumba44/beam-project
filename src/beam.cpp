#include "beam.h"

double tipDeflection(double load, double length,
                     double youngsModulus, double secondMoment) {
    return load * length * length * length /
           (3.0 * youngsModulus * secondMoment);
}