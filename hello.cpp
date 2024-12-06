#include<iostream>
using namespace std;

//Function for Maximum Number
int max(int a,int b){
    if(a>b) return a;
    else return b;
}

//Function for MInimum Number
int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Maximum Number = "<<max(a,b)<<endl;
    cout<<"Minimum Number = "<<min(a,b)<<endl;
    return 0;
}