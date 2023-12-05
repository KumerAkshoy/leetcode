#include<iostream>
using namespace std;

int countDigits(int num){
    int count=0;
    int newNum=num;
    if(num<0){
        return 0;
    }
    else{
        while(newNum!=0){
            int value=newNum%10;
            if(num%value==0){
                count=count+1;
            }
            newNum = newNum/10;
        }
        return count;
    }
}

int main(){
    int n;
    cin  >> n;

    cout << countDigits(n) << endl;
}
