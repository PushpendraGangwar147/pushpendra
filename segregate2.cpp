#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={3,4,5,7,8};
    int i=0;
    int j=(sizeof(arr)/sizeof(arr[0]))-1;

    while (i<j){
        if(arr[i]%2!=0) swap(arr[i],arr[j]);
        else i++;
        if(arr[j]%2==0) swap(arr[j],arr[i]);
        else j--;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}