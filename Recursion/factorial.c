// factorial of a number using recursion

#include<stdio.h>

int fact(int n) {
    if(n==0 || n==1) 
        return 1;
    else {
        return n * fact(n-1);
    }
}

int main() {
    int ans = fact(5);
    printf("%d", ans);
    return 0;
}