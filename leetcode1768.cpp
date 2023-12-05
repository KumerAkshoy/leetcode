#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word1,word2,fword="";

    cin >> word1 >> word2;
    int a,b;
    a=word1.size();
    b =word2.size();

    for(int i=0;i<min(a,b);i++){
        fword=fword+word1[i]+word2[i];
    }
    if(a>b){
        for(int i=min(a,b);i<max(a,b);i++){
            fword=fword+word1[i];
        }
    }
    else{
        for(int i=min(a,b);i<max(a,b);i++){
            fword=fword+word2[i];
        }
    }

    cout<< fword << endl;
}
