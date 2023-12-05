#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int count=0;
        while(num1!=0){
            if(num1>=num2){
                num1=num1-num2;
                num2=num2;
            }
            else if(num1<num2){
                num1=num1;
                num2=num2-num1;
            }
            count+=1;
        }
        cout <<  count << endl;
}
