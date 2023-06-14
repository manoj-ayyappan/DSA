// sum of n natural numbers using recursion

#include<stdio.h>

int ans = 0; 
int fun(int n) {
    if(n>0)
        return (fun(n-1) + n);
    else 
        return 0;
}

int main() {
    printf("%d", fun(5));
    return 0;
}