// fibonacci series using recursion 

#include<stdio.h>

int fib(int n) {
    if(n<2)
        return n;
    return fib(n-2) + fib(n-1);
}


// fibonacci series using iteration 

int fib2(int n) {
    int t0=0, t1=1, s=0;
    if(n<2)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;   
}

// fibonacci series using memoization 

int fib3(int n) {
    int F[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    if(n<2) {
        F[n] = n;
        return n;
    }
    else {
        if(F[n-2] == -1)
            F[n-2] = fib3(n-2);
        if(F[n-1] == -1)
            F[n-1] = fib3(n-1);
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }   
}

int main() {
    printf("%d\n", fib(5));
    printf("%d\n", fib2(5));
    printf("%d\n", fib3(5));
    return 0;
}