#include<iostream>
using namespace std;

int numberOfSteps(int num) {
        int a=0,b=0;
        while (num){
            a+=num%2;
            b++;
            num/=2;
        }
        return (a+b>0?a+b-1:0);
}

int main(){
    int n;
    cin >> n;

    cout << numberOfSteps(n) << endl;
}
