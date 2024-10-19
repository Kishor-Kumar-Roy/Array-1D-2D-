#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    // Temporary array to store first k elements
    int temp[k];
    
    // Step 1: Copy first k elements to temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    
    // Step 2: Shift the remaining elements of arr to the left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    
    // Step 3: Copy the temp array elements back to the end of the array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[' '],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int k = 2;  // Number of rotations
    
    printf("Original array: \n");
    printArray(arr, n);
    
    leftRotate(arr, n, k);
    
    printf("Array after left rotation: \n");
    printArray(arr, n);
    
    return 0;
}
