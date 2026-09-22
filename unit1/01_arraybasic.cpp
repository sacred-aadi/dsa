#include <iostream>
using namespace std;
int* inputArray(int n) {
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}

void showArray(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    //applying right shift to an array
    int n;
    cin>>n;
    int val;
    int pos;
    cout<<"enter value and position : "<<endl;
    cin>>val>>pos;
    int arr1[n+1];
    cout<<"add values to array :"<<endl;
    for(int i=0;i<n;i++) cin>>arr1[i];
    cout<<"valuess are: "<<endl;
    for(int i=0;i<n;i++) cout<<arr1[i]<<endl;
    
    cout<<"adding the value "<<val<<" at position "<<pos<<endl;
    
    
     for(int i=n;i>pos;i--){
        arr1[i]=arr1[i-1];
    }
    arr1[pos]=val;
    n++;

    cout<<"after insertion :"<<endl;
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    
    //applying left shift on same array and removing the same element we added
    cout<<"removing it again by left shift "<<endl;
    for(int i=pos+1;i<n;i++){
        arr1[i-1]=arr1[i];
    }
    n--;
    showArray(arr1,n);
    
}