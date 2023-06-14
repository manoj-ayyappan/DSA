// nested recursion

#include<stdio.h>

int fun(int n) {
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main() {
    int ans = fun(97);
    printf("%d", ans);
    return 0;
}