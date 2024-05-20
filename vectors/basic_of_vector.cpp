// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     // vector<int> add;         // here we declare a vector whose data type is int;
//     // add.push_back(7);        // here we add elements in the empty vector;
//     // add.push_back(7);
//     // add.push_back(7);
//     // // pop_back(7);          // it remove the last value from the vector;
     
//     // cout<<add.size()<<endl;


//     // for(int i =0; i <add.size(); i++){   //  here we printing the elements of the vectors.
//     //     cout<<add[i];
//     // }





//     //  vector<string> add;
//     // add.push_back("hii");
//     // add.push_back("7");
//     // add.push_back("7");
//     // // pop_back(5);
//     // // cout<<add<<endl;
//     // cout<<add.size()<<endl;


//     // for(int i =0; i <add.size(); i++){
//     //     cout<<add[i]<<endl;
//     // }








//     //  taking inputs and elements from users  through vectors-->



    // int length;
    // cout << "Enter the length of the vector: ";
    // cin >> length;
    
//     vector<int> input;
    
    
//     int element;
//     for (int i = 0; i < length; ++i) {
//         cout << "enter the Element :" ;
//         cin >> element;
//         input.push_back(element);
//     }
    
//     cout << "The vector you entered is: ";
//     for(int i =0; i <input.size(); i++){
//         cout<<input[i]<<endl;
//     }

// }
// ----------------------------------------------------------------------------------------------
//  finding a unique value from the vectors

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> array = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7};
//     vector<int> different_value;

//     for (int i = 0; i < array.size(); i++) {
//         bool isdifferent = true;

//         for (int j = 0; j < array.size(); j++) {
//             if (i != j && array[i] == array[j]) {
//                 isdifferent = false;
//                 break;
//             }
//         }
//         if (isdifferent) {
//             different_value.push_back(array[i]);
//         }
//     }

//     cout << "Different values are : ";
    
//     for (int val : different_value) {
//         cout << val << " ";
//     }
//     cout << endl;

// }



// -------------------------------------------------------------------------------
//  combining the value of two vectors -->

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int length1;
//     int length2;

//     cout << "Enter the length of the first vector: ";
//     cin >> length1;
//     vector<int> vec1(length1); 
//     cout << "Enter elements of the first vector: ";
//     for (int i = 0; i < length1; i++) {
//         cin >> vec1[i];
//     }

//     cout << "Enter the length of the second vector: ";
//     cin >> length2;
//     vector<int> vec2(length2); 
//     cout << "Enter elements of the second vector: ";
//     for (int i = 0; i < length2; i++) {
//         cin >> vec2[i];
//     }

//     vector<int> vec3; 
//     for (int i = 0; i < vec1.size(); i++) {
//         vec3.push_back(vec1[i]);
//     }
//     for (int i = 0; i < vec2.size(); i++) {
//         vec3.push_back(vec2[i]);
//     }

//     cout << "Combined vector elements are -->  ";
//     for (int i = 0; i < vec3.size(); i++) {
//         cout << vec3[i] << " ";
//     }
//     cout << endl;

// }

// -----------------------------------------------------------------------------------

//  directly giving value to vectors

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>value(5, 6);
    for(int i =0; i<value.size(); i++){
        cout<<value[i];
    }
}


