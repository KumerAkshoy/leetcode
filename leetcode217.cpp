#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4};
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout << true;
            break;
        }
        count=0;
    }
}
