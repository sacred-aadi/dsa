int maximum(int arr[], int size) {
    int max = arr[0];
    for(int i=1;i<size;i++){    
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int max = maximum(arr, 5);
    printf("Maximum value in the array is: %d\n", max);
}