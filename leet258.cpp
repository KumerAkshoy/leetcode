#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum=0;
    std::string strNumber = std::to_string(num);
    int length = strNumber.length();


     for(int i=0;i<length;i++){
      sum=sum+(num%10);
       num/=10;
      }
      num=sum;
      cout << num;
}
