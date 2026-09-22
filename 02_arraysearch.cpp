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

    // doing linear search on the array 
    int n;
    cin>>n;
    int *arr = inputArray(n);
    int target;
    cout<<"which number you want to search :"<<endl;
    cin>>target;

    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){cout<<"the target is present"<<endl;
        flag=1 ;
        break;//using this just to all the keywords, using flag or '-1' is more efficient.
        }
    }
    if(flag ==0 )
        cout<<"the target isn't present";
        
        
        //binary search on ssame array
        
        cout<<"trying to solve it with binary search"<<endl;
        
        int high = n-1;
        int low =0;
        while(high>=low){
            int mid = (high + low)/2;
            if(target == arr[mid]){
                cout<<"its present at "<<mid<<endl;
                break;
                flag =1; }
                else if(target>arr[mid]) low = mid+1;
                else 
                high = mid-1;
            }
         if(flag ==0 )
            cout<<"the target isn't present";
            

}