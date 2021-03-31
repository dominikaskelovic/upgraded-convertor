#include "Micro.h"
#include <string>
#include <iostream>
using namespace std;

double Micro::ConvertToMicro(double time) {
    time = time;
    return time;
}

double Micro::ConvertToNano(double time) {
    time = time / 1000;
    return time;
}

double Micro::ConvertToPico(double time) {
    time = time / 1000000;
    return time;
}


