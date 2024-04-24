#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of array greater than 5 > ";
    cin >> length;

    while (length <= 5) {
        cout << "Enter the length of array greater than 5 > ";
        cin >> length;
    }

    int arr[length];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Printing output
    cout << "Array elements:" << endl;
    for (int i = 0; i <= (sizeof(arr)/sizeof(arr[0]))/2; i++) {
        cout<<"first value = " << arr[i] << endl;
        cout<<"last value = " arr[length-1]<<endl;
        length--;

    }


}
