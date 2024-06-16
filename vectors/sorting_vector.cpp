
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n] = {1,3,4,5,6,4,4};

    for(int i=0; i<n; i++){
        int min = arr[0];

        for(int j=i+1; j<n; j++){
           if(arr[i] > arr[j]){
            int temp = arr[i];
            
            arr[i] = arr[j];
            arr[j] = temp;
            
           } 

        }
    }
    
   
            cout<<"sorted arr:";
        for(int i =0; i <n; i++){
            
            cout<<arr[i]<<" ";

        }
        cout<<endl;

        
}
