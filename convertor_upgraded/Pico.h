#include <string>
#include <iostream>
using namespace std;
public class Pico
{
public:
    double time;

    double ConvertToMicro(double time);
    double ConvertToNano(double time);
    double ConvertToPico(double time);
};