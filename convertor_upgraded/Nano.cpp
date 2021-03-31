#include "Nano.h"
#include <string>
#include <iostream>
using namespace std;

double Nano::ConvertToMicro(double time) {
    time = time * 1000;
    return time;
}

double Nano::ConvertToNano(double time) {
    time = time;
    return time;
}

double Nano::ConvertToPico(double time) {
    time = time / 1000;
    return time;
}


