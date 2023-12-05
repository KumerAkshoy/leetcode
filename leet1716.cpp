#include<iostream>
using namespace std;

int totalMoney(int n){
    int temp=0;
    int week=n/7;
    int days=n%7;
    int temp1=week+1;
    if(week>0){
        for(int i=1;i<week;i++){
        temp=temp+7;
    }
    }
    for(int j=2;j<=days;j++){
        temp1=temp1+j;
    }

    return temp;
    return temp1;
}
int main(){
    int num;
    cout << 4%7;
    cin >> num;

    cout << totalMoney(num);


}
