#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> add;         // here we declare a vector whose data type is int;
    // add.push_back(7);        // here we add elements in the empty vector;
    // add.push_back(7);
    // add.push_back(7);
    // // pop_back(7);          // it remove the last value from the vector;
     
    // cout<<add.size()<<endl;


    // for(int i =0; i <add.size(); i++){   //  here we printing the elements of the vectors.
    //     cout<<add[i];
    // }





    //  vector<string> add;
    // add.push_back("hii");
    // add.push_back("7");
    // add.push_back("7");
    // // pop_back(5);
    // // cout<<add<<endl;
    // cout<<add.size()<<endl;


    // for(int i =0; i <add.size(); i++){
    //     cout<<add[i]<<endl;
    // }








    //  taking inputs and elements from users  through vectors-->



    int length;
    cout << "Enter the length of the vector: ";
    cin >> length;
    
    vector<int> input;
    
    
    int element;
    for (int i = 0; i < length; ++i) {
        cout << "enter the Element :" ;
        cin >> element;
        input.push_back(element);
    }
    
    cout << "The vector you entered is: ";
    for(int i =0; i <input.size(); i++){
        cout<<input[i]<<endl;
    }

}



    
