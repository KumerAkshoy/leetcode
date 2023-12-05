#include<bits/stdc++.h>
using namespace std;

int main(){
    int left, right;
    cin >> left >> right;

    for(int i=left;i<=right;i++){
        int value=i;
        if(value%10==0){
            continue;
        }
        while(value!=0){
            int temp=value%10;
            if(i%temp==0){
                value=value/10;
                if(value==0){
                    cout << i << endl;
                }
            }
            else{
                break;
            }
        }
    }
}
