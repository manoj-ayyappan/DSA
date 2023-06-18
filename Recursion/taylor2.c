// Taylor series using recursion (optimized)

#include<stdio.h>

double e(int x, double n) {
    static double s = 1;
    if(n==0)
        return s;
    s = 1 + x/n*s;
    return e(x,n-1);
}

// Taylor series using iteration (optimized)

#include<stdio.h>

double e2(int x, double n) {
    double sum = 1;
    for(;n>0;n--)
        sum = 1 + x/n*sum;
    return sum;
}

int main() {
    printf("%lf\n", e(1,10));
    printf("%lf\n", e2(1,10));
    return 0;
}