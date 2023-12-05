#include<iostream>
#include<string>
using namespace std;

int main(){
    int x,i;
    cin >> x;
    std::string strNumber = std::to_string(x);
    int length = strNumber.length();
    string output="";
    for (i=length-1;i>=0;i--){
        output= output+strNumber[i];
    }
    cout << (output==strNumber)? true : false;
}
