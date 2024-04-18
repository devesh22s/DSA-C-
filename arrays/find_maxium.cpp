#include<iostream>
using namespace std;
int main(){
    int values[] = {10,2,323,123,2323};
    int maximum = -1;

    for(int i=0;i<5;i++){
        if(values[i]>maximum){
            maximum = values[i];
        }
    }

    cout<<maximum;
}