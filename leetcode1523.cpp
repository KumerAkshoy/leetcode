#include<iostream>
using namespace std;

int countodds(int low,int high){
    int count=0;
    if(low%2==0){
        for(int i= low+1;i<=high;i=i+2){
            count=count+1;
        }
        return count;
    }
    else{
        for(int i = low;i<=high;i=i+2){
            count=count+1;
        }
        return count;
    }
}

int main()
{
    cout << countodds(8,10) << endl;

}


