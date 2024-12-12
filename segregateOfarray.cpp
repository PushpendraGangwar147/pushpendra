#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={0,1,0,1,0,0,1,1,1,0};
    int i=0;
    int j=(sizeof(arr)/sizeof(arr[0]))-1;

    while (i<j){
        if(arr[i]==1) swap(arr[i],arr[j]);
        else i++;
        if(arr[j]==0) swap(arr[j],arr[i]);
        else j--;

    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
}