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

    Append(&arr, 10);
    Display(arr);

    return 0;
}