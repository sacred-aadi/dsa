#include <stdio.h>
#include <stdlib.h>
 
void extend(int **arr, int *capacity) // Function to extend the array when it is full
{
    int newCapacity = (*capacity) * 2;
    int *newArr = (int *)malloc(newCapacity * sizeof(int));
    for (int i = 0; i < *capacity; i++)
    {
        newArr[i] = (*arr)[i];
    }
    free(*arr);
    *arr = newArr;
    *capacity = newCapacity;
}

int main()
{
    int capacity = 2;
    int size = 0; // Current number of elements in the array
    int *arr = (int *)malloc(capacity * sizeof(int)); // Initial dynamic array allocation
    while (1) // Infinite loop for user interaction 
    {
        int choice;
        printf("\n1. Add\n2. View\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            if (size == capacity) // size is equal to capacity, the array is full and needs to be extended
            {
                printf("Array Full! Extending...\n");
                extend(&arr, &capacity);
            }
            printf("Enter value: ");
            scanf("%d", &arr[size]);
            size++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }
        else
        {
            break;
        }
    }

    free(arr);

    return 0;
}