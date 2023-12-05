#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> sourceVec = {5,4,3,2,1};  // Example source vector
    vector<int> sortedVec;               // Empty vector to store the sorted values

    sortedVec = sourceVec;
    std::sort(sourceVec.begin(), sourceVec.end());  // Sort the source vector

    // Display the sorted vector
    for (int num : sortedVec) {
        cout << num << " ";
    }
    cout<<endl;

    for (int num : sourceVec) {
        std::cout << num << " ";
    }
    cout << endl;
    int count=0;
    for(int i=0;i<sourceVec.size();i++){
        if(sourceVec[i] != sortedVec[i]){
            count=count+1;
        }
    }
    cout << count;

    return 0;
}
