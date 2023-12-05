#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double ans[2];
    double celsius,kelvin,farenheit;
    cin>> celsius;

    kelvin = celsius + 273.15;
    farenheit = celsius*1.80 +32.00;

    ans[0]=kelvin;
    ans[1]=farenheit;

    for(int i=0;i<2;i++){
        cout << fixed << setprecision(5) << ans[i] << ",";
    }
 }
