// sorting --> filteration of data according to a certain condition.

// 1. Selection sort ->

#include <iostream>
#include <vector>

using namespace std;

void ascending(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[i] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void desecnding(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[i] < arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {10, 3, 343, 34546, 65333, 421341, 32432, 545, 233, 566};
    int sort;
    
    cout << "Enter 1 to sort in ascending order"<<endl;
    cout << "Enter 2 to sort in descending order"<<endl;
    cin >> sort;

    if (sort == 1) {
        ascending(arr);
    } else if (sort == 2) {
        desecnding(arr); 
    } else {
        cout << "enter only 1 or 2 !!" << endl;
        return 1;
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
}

