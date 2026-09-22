#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val;
    int pos;
    cout<<"enter value and position : "<<endl;
    cin>>val>>pos;
    int arr1[n];
    cout<<"add values to array :"<<endl;
    for(int i=0;i<n;i++) cin>>arr1[i];
    cout<<"valuess are: "<<endl;
    for(int i=0;i<n;i++) cout<<arr1[i]<<endl;
    
    cout<<"adding the value "<<val<<" at position "<<pos<<endl;
    
    arr1[n+1];
     for(int i=n;i>pos-1;i--){
        arr1[i]=arr1[i-1];
    }
    arr1[pos]=val;

    cout<<"after insertion :"<<endl;
    for(int i=0;i<n;i++) cout<<arr1[i]<<endl;

}