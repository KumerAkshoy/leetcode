#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int temp0=0,temp1=1,temp=0;

    if(n>0){
        for(int i=1;i<=n;i++){
            temp=temp0+temp1;
            temp0=temp1;
            temp1=temp;
        }
        cout << temp << endl;
    }
}
