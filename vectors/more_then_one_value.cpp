#include<iostream>
#include <vector>
using namespace std;


int search(vector<int>& arr, int target){
    int count =0;
    for(int i =0; i <arr.size(); i++){
        if(arr[i] == target){
            count++;
        }
    }

    cout <<"The Target value "<<target<<" appears "<<count<<" times "<<endl;

}

int main(){
    vector<int> arr = {4,14,2,55,7,2,6,9,4,4};
    int target = 4;

    // int max = arr[0];
    // for(int i =0; i <arr.size(); i++){
    //     if(arr[i] > max){
    //         max = arr[i];
            
    //     }
    // }
    

   search(arr, target);

//    cout<<"the maximum value in array is :"<<max;
    
    
}
