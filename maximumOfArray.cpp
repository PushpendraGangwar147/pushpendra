#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={9,17,12,7,24};
    int i,max;
    max = arr[0];
    for(i=1;i<5;i++){
            if(arr[i]>max) max=arr[i];
    }
    
cout<<"Maximum element of the Array = "<<max;
}
