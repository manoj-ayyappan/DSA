// power using recursion

#include<stdio.h>

int power(int n, int e) {
    if(e==1)
        return n;
    else
        return n * power(n, e-1);
}

// optimized
int power2(int n, int e) {
    if(e==1)
        return n;
    else if(n%2==0)
        return power2(n*n, e/2);
    else
        return n * power2(n*n, (e-1)/2);
}

int main() {
    int ans = power(2,4);
    int ans2 = power2(2,4);
    printf("%d %d", ans, ans2);
    return 0;
}