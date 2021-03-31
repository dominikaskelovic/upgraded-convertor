#include "Pico.h"
#include <string>
#include <iostream>
using namespace std;

double Pico::ConvertToMicro(double time) {
    time = time * 10000000;
    return time;
}

double Pico::ConvertToNano(double time) {
    time = time * 1000;
    return time;
}

double Pico::ConvertToPico(double time) {
    time = time;
    return time;
}
