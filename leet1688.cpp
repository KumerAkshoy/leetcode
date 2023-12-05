#include<iostream>
using namespace std;

int matches(int n){
    int match=0,team,x;
    while(n>1){
        if(n%2==0){
            team = n/2;
            x=n/2;
        }
        else{
           team = (n-1)/2+1;
           x=(n-1)/2;
        }
        n=team;
        match+=x;
    }
    return match;
}
int main()
{
    int N;
    cin>> N;

    cout << matches(N) << endl;

    return 0;
}
