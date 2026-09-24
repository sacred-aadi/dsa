#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int arr[8]={2,4,4,4,7,9,12,16};
    int target = 4;
    int high = n-1;
    int low =0;
    while(high>=low){
        int mid = (high + low)/2;
        if(target == arr[mid]){
            cout<<"its present at"<<mid<<endl;
            break;
        }
        else if(target>mid) low = mid+1;
        else 
            high = mid-1;
    }

}