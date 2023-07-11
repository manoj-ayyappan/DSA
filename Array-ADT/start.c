// array ADT -> Abstract Data Type
// Functions on an array

#include<stdio.h>
#include<stdlib.h>

struct Array
{
    // Use this code to create an array in the heap memory
    // int *A;

    int A[10];
    int size;
    int length;
};

// Display function
void Display(struct Array arr) {
    int i;
    printf("\nElements are\n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

// Append function
void Append(struct Array *arr, int element) {       // call by address coz the array is going to be modified
    if(arr->length < arr->size)
        arr->A[arr->length++] = element;
}

// Insert function
void Insert(struct Array *arr, int index, int element) {
    if(index>=0 && index <= arr->length) {
        for(int i=arr->length; i>index; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = element;
        arr->length++;
    }
}

// Delete function
int Delete(struct Array *arr, int index) {
    int x = 0;

    if(index>=0 && index < arr->length){
        x = arr->A[index];
        for(int i = index; i<arr->length-1; i++) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    // if invalid index return 0
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// linear search
int LinearSearch(struct Array *arr, int key) {
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if(arr->A[i] == key)
        {
            // successful

            // transposition
            // swap(&arr->A[i], &arr->A[i-1]);

            // Move to head
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }    
    }
    // if unsuccessful
    return -1; 
}

// Iterative Binary search
int BinarySearch(struct Array arr, int key) {
    int l, mid, h;
    l = 0;
    h = arr.length-1;

    while(l<=h) {
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

// 

int main() {

    struct Array arr = {{2,3,4,5,6}, 10, 5};

    // Use this code to create an array in the heap memory

    // struct Array arr;
    // int n, i;
    // printf("Enter the array size: ");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size*sizeof(int));
    // arr.length = 0;

    // printf("Enter the number of numbers\n");
    // scanf("%d", &n);

    // printf("Enter all the elements\n");
    // for(i=0; i<n; i++)
    //     scanf("%d", &arr.A[i]);
    // arr.length = n;

    
    // Append(&arr, 10);
    // Insert(&arr, 5, 11);
    // printf("%d\n", Delete(&arr, 2));
    // printf("%d\n", LinearSearch(&arr, 4));
    printf("%d\n", BinarySearch(arr, 5));
    Display(arr);

    return 0;
}