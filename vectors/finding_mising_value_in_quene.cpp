#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,7,6,4,3,5,2,9,10};
    int missing_number;

    sort(arr.begin(), arr.end());
    for(int i =0; i <arr.size(); i++){
        cout<<arr[i];
    }
}