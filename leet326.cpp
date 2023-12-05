#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<=n/2;i++){
      if(pow(3,i)==n){
        cout<< true;
      }
    }

}
