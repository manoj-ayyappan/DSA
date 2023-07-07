// array ADT -> Abstract Data Type
// Functions on an array

#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

int main() {
    struct Array arr;
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    

    return 0;
}