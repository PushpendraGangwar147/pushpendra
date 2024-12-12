#include<iostream>
using namespace std;
int main(){
    int arr[5]={9,6,12,7,4};
    int s=0;
    int l=sizeof(arr)/sizeof(arr[0])-1;
    while(s<l){
        swap(arr[s],arr[l]);
        s++;
        l--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}