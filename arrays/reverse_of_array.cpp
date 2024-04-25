#include <iostream>
using namespace std;

int main() {
    int length = 5;
    int arr[length];
    cout << "enter the elements = ";
    
    // taking input
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    
    // printing reverse output
    for (int i = length - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
}
