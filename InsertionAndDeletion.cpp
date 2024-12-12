#include<iostream>
#include<vector>
using namespace std;

void insert(int arr[],int k,int &n,int ITEM){
    int j=n;
    while(j>=k){
        arr[j+1]=arr[j];
        j--;

    }
    arr[k]=ITEM;
    n=n+1;
}
void Delete(int arr[],int k,int &n){
    int j=k;
    while(j<=n){
        arr[j]=arr[j+1];
        j++;
        n=n-1;
    }
}
int main(){
    
    int arr[5]={1,2,3,4};
    int k=1;
    int n=4;
    int ITEM=9;
    insert(arr,k,n,ITEM);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";
    Delete(arr,k,n);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}