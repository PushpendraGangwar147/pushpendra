#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,8,2,5,7,6,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int w=4;
    int current=0;
    for(int i=0;i<w;i++){             // Sliding Window Concept DSA
        current=current+arr[i];
    }
    int max=current;

    for(int j=1;j<=n-w;j++){
        current=current-arr[j-1]+arr[j+w-1];
        if(current>max) max=current;
    }
    cout<<"Max = "<<max;




}