#include<iostream>
using namespace std;

int main()
{
    int numOnes, numZeros, numNegOnes, k;

    int sum=0;

    cin >> numOnes >> numZeros >> numNegOnes >> k;

    int a = numOnes+numZeros+numNegOnes;

    if(a>=k){
        if(k<=numOnes){
        sum=k;
        cout << sum;
        }
        else if(k>numOnes && k<=numOnes+numZeros){
            sum=numOnes;
            cout << numOnes;
        }
        else if(numOnes==0 && k<=numZeros){
            cout << sum;
        }
        else{
            sum= numOnes-(k-(numOnes+numZeros));
            cout << sum;
        }
    }

}
