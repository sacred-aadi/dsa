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

int main (){
    //using bubble sorting algo : 
    int n;
    cin>>n;
    int* arr = inputArray(n);
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp;
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    showArray(arr,n);
}