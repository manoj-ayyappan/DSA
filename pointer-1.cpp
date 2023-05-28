// Pointers basic

// malloc function requires stdlib.h
#include<stdlib.h>
#include<stdio.h>
int main() {
    // declare variable
    int a = 5;

    // declare pointer
    int *p;
    int *p1;
    int *p2;

    // init pointer
    p = &a;

    // using malloc to allocate heap memory
    p1 = (int *)malloc(5*sizeof(int));      // C language
    
    p2 = new int[5];                        // C++

    printf("%d\n", a);
    // dereferncing pointer
    printf("%d\n", *p);

    // whenever you dynamically allocate memory you have to also delete it
    free(p1);                               // C language
    delete [] p2;                           // C++
    return 0;
}