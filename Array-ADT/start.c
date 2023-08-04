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

// Recursive Binary search
int RBinSearch(int a[], int l, int h, int key) {
    int mid;
    if(l<=h) {
        mid = (l+h)/2;
        if(a[mid] == key)
            return mid;
        else if(key < a[mid])
            return RBinSearch(a, l, mid-1, key);
        else
            return RBinSearch(a, mid+1, h, key);
    }
    return -1;
}

// get value from index
int get(struct Array arr, int index) {
    if(index>=0 && index < arr.length)
        return arr.A[index];
    return -1;
}

// set value in array
void set(struct Array *arr, int index, int value) {
    if(index>=0 && index < arr->length)
        arr->A[index] = value;
}

// find max element
int max(struct Array arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
}

// find min element
int min(struct Array arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
}

// sum function
int sum(struct Array arr) {
    int s = 0;
    for (int i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }
    return s;
}

// average function
float avg(struct Array arr) {
    return (float)sum(arr)/arr.length;
}

// reverse function
void Reverse(struct Array *arr) {
    int *B;
    int i, j;

    B = (int *)malloc(arr->length * sizeof(int));
    for(i=arr->length-1, j=0; i>=0; i--, j++) {
        B[j] = arr->A[i];
    }
    for(i=0; i<arr->length; i++) {
        arr->A[i] = B[i];
    }
}

// reverse 2
void Reverse2(struct Array *arr) {
    int i, j;
    for(i=0, j=arr->length-1; i<j; i++, j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

// left rotate
void leftrotate(struct Array *arr) {
    int i, temp;
    temp = arr->A[0];
    for(i=1; i<arr->length; i++) {
        arr->A[i-1] = arr->A[i];
    }
    arr->A[arr->length-1] = temp;
}

// right rotate
void rightrotate(struct Array *arr) {
    int i, temp;
    temp = arr->A[arr->length-1];
    for(i=arr->length-1; i>0; i--) {
        arr->A[i] = arr->A[i-1];
    }
    arr->A[0] = temp;
}

// insert into sorted list
void insertSort(struct Array *arr, int x) {
    int i = arr->length-1;
    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i]>x) {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

// check if array is sorted
int isSorted(struct Array arr) {
    for (int i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i]>arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
}

// arrange negative and positive numbers
void Rearrange(struct Array *arr) {
    int i = 0;
    int j = arr->length-1;
    while(i<j) {
        while(arr->A[i] < 0) {i++;}
        while(arr->A[j] >= 0) {j--;}
        if(i<j) {swap(&arr->A[i], &arr->A[j]);}
    }
}

struct Array* Merge(struct Array *arr1, struct Array *arr2) {
    int i, j, k;
    i=j=k=0;
    // creating the third array for storing in heap memory
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length) {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for(;i<arr1->length; i++) {
        arr3->A[k++] = arr1->A[i]; 
    }
    for(;j<arr2->length; j++) {
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = arr1->length+arr2->length;
    arr3->size = 10;

    return arr3;
}

int main() {

    struct Array arr = {{2,3,4,5,6}, 10, 5};

    // use for merging
    struct Array arr1 = {{1,3,5,19,32}, 10, 5};
    struct Array arr2 = {{2,4,6,16,54}, 10, 5};
    struct Array *arr3;

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
    // printf("%d\n", BinarySearch(arr, 5));
    // printf("%d\n", RBinSearch(arr.A,0, arr.length-1, 5));
    // printf("%d\n", get(arr, 90));
    // Reverse2(&arr);
    // leftrotate(&arr);
    // rightrotate(&arr);
    // insertSort(&arr, 8);
    // printf("%d ", isSorted(arr));
    // Rearrange(&arr);

    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);

    return 0;
}