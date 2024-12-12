#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={1,45,65,34,2,34,55,77,4};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        if(a[i]<35) cout<<"Roll No : "<<i<<endl;
    }
}