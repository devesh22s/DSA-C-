#include<iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;



        }else if(arr[mid]<target){  
            start = mid+1;
        }else{
              end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    vector<int> arr;
    int length;
    cout << "Enter the length of the vector: ";
    cin >> length;
    for(int i =0; i <length; i++){
        cout<<"enter the values in array: ";
        int value;
        cin>>value;
        arr.push_back(value);
        
        
    }
    
    int target = 5;

    int indexValue = binarySearch(arr,target);

    if(indexValue==-1){
        cout<<"value not found"<<endl;
    }else{
        cout<<"value found at :"<<indexValue<<" index , value = "<<arr[indexValue]<<endl;
    }
}
