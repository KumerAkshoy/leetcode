#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int number;
    cin >>  number;
    int numDigits = 0;

    int temp = number;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }
    int digits[numDigits];
    temp = number;
    for (int i = numDigits - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }
    sort(digits,digits+numDigits);

    string num1="0",num2="0";
    for(int j=0;j<numDigits;j++){
        if(j%2==0){
            num1=num1 + std::to_string(digits[j]);
        }
        else{
            num2 = num2 + std::to_string(digits[j]);
        }
    }
    cout << num1 << "   " << num2 << endl;
    int sum = std::stoi(num1)+stoi(num2);
    cout << sum << endl;
    return 0;

}


