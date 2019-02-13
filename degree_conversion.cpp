// program that converts temp from celsius to degree i=units to fahrenheit
//fhrenheit = celsius * (212 - 32)/100 +32

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter temp in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius: " ;
    cin >> celsius;

    // calculate conversion factor for celsius
    // to fahrenheit
    int factor;
    factor = 212 -32;

    // conversion formulor to convert
    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    // out the results on a new line
    cout << "Fahrenheit value is: ";
    cout << fahrenheit << endl;

    // wait until user is done before termination of program.

    return 0;
}
