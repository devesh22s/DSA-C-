//1. Given an array arr of size n which contains elements in range from 0 to n-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 



// #include <bits/stdc++.h> // it include all c++ library
// using namespace std;
// int main()
// {
//     vector<int> value = {1, 2, 2, 3, 6, 4, 4};
//     vector<int> duplicates;

//     sort(value.begin(), value.end());
//     for (int i = 0; i <= value.size() - 1; i++)
//     {
//         if (value[i] == value[i + 1])
//         {
//             duplicates.push_back(value[i]);
//         }
//     }

//     cout<<"the given array is : ";
//     for (int i = 0; i < value.size(); i++)
//     {
//         cout << value[i] << " ";
//     }
//     cout << endl;
//     cout<<"the duplicatte values are: ";
//     for (int i = 0; i < duplicates.size(); i++)
//     {
//         cout << duplicates[i] << " ";
//     }
//     cout << endl;
// }


// ---------------------------------------------------------------------------------------------------------

// 2. Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. Return the missing element.
#include <iostream>
#include <vector>

using namespace std;

int findmissing(const vector<int> arr, int n){
    int expected = 0;
    for(int i =5; i <= n; i++){
        expected += i;
    }

    int actual = 0;
    for(int i =0; i <arr.size(); i++){
        actual +=arr[i];

    }

    return actual - expected;
}


int main(){
    vector<int> arr = {5,6,7,8,10,11};
    
    int n = 11;

    int missing = findmissing(arr, n);
    cout<<"the missing number is: "<<missing;


}



// --------------------------------------------------------------------------------------

// 3. find average of an vector
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};  
//     int sum = 0;  

//     for (int i = 0; i < arr.size(); i++) {
//         sum += arr[i];  
//     }

//     int average = sum / arr.size();  
//     cout << "The average of the array is: " << average << endl;

    
// }



// --------------------------------------------------------------------------------------------------


// 4. checking an array is sorted or not

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(const vector<int> arr) {
//     bool ascending = true;
//     bool descending = true;

//     for (int i = 1; i < arr.size(); ++i) {
//         if (arr[i] < arr[i - 1]) {
//             ascending = false;
//         }
//         if (arr[i] > arr[i - 1]) {
//             descending = false;
//         }
//     }

//     return ascending || descending;
// }

// int main() {
//     vector<int> myarr = {5,4,3,2,1};
    

//     if (isSorted(myarr)) {
//         cout << "The  vector is sorted." << endl;
//     } else {
//         cout << "The  vector is not sorted." << endl;
//     }

   
// }
