#include <iostream>
#include <string>
using namespace std;

int main() {
   bool num = 00011100;
    string num_str = to_string(num);
    int len = num_str.length();
    cout << len << endl;
    for (int i = 0; i < len; i++) {
        cout << num_str[i] << " ";
    }
    cout << endl;
    return 0;
}
