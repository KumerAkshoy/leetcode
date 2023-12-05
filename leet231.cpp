#include<iostream>
#include<math.h>
using namespace std;

bool powertwo(int n){
    for(int i=0;i<=31;i++){
        if(pow(2,i)==abs(n)){
            return true;
            break;
        }
    }

    return false;
}

int main()
{
    int n;

    cin >> n;

    cout << powertwo(n);

}
