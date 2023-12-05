#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[6],i;
    int eSum=0,dSum=0;

    for(i=0;i<4;i++){
        cin >> a[i];
    }

    for(i=0;i<4;i++){
        eSum=eSum+a[i];
        while(a[i]>0){
                dSum = dSum + (a[i]%10);
                a[i]/=10;
            }
    }
    cout << abs(eSum-dSum) << endl;
}
