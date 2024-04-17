#include<iostream>
using namespace std;
int main(){
    int values[5];

    for(int i=0;i<5;i++){
        cin>>values[i];
    }

    for(int i=0;i<5;i++){
        values[i] = 1;
    }

    for(int i=0;i<5;i++){
        cout<<values[i]<<endl;
    }
}