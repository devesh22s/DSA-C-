#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {3,6,7,4};
    bool search = true;

    for(int i =0; i <arr1.size(); i++){
        for(int j =0; j < arr2.size(); j++){
            if(arr1[i] == arr2[j]){
               
                if(search){
                    cout<<", ";
                }
                cout<<arr1[i];
                search = false;
            }
        }
    }


    if(search){
            cout<<" the common values in both array "<<endl;

    }else{
        cout<<"not found"<<endl;
    }


    cout<<"feryfgwcehdfyegfygufgyfgsurgfysvfhsdfhfy";
   
}
