#include<iostream>
using namespace std;
int main(){
    string signal;
    cout<<"Enter Signal in small letters : ";
    cin>>signal;
    if(signal=="green") cout<<"Go";
    else if (signal=="yellow") cout<<"Wait";
    else if(signal=="red") cout<<"Stop";
}