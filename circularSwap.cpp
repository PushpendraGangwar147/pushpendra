#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,6,8,12,9};
    int temp=arr[4];
    int j=4;
    while(j>=1){
        arr[j]=arr[j-1];
        j--;
    }
    arr[0]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


}