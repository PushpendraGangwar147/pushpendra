#include<iostream>
using namespace std;
int main(){
    // only for Sorted Array (LEETCODE - TwoSum)
    int arr[5]={2,15,7,11,21};
    int s=0;
    int l=(sizeof(arr)/sizeof(arr[0]))-1;
    int target=22;

    while(s<l){
        if(arr[s]+arr[l]==target){
            cout<<arr[s]<<" "<<arr[l];
            return 0 ;
        }

        else if(arr[s]+arr[l]<target){
            s++;
        }
            else l--;
        }
        cout<<"Not Found";
    }


