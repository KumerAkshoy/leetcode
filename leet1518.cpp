#include<bits/stdc++.h>
using namespace std;

int main(){
    int numBottles,numExchange;
    cin >> numBottles >> numExchange ;
    int count = numBottles;

    while(numBottles>=numExchange){
        count = count+numBottles/numExchange;
        numBottles=numBottles/numExchange+numBottles%numExchange;
    }
    cout << count << endl;

    int sum=0;
    for(int i=2; ;){
        for(int j=1;j<=12;j++){
            sum+=j;
        }
    }
}

