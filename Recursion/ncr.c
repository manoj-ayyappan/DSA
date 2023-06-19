// combination formula simple

#include<stdio.h>

int fact(int x) {
    int ans = 1;
    for(int i=1; i<=x; i++) {
        ans *= i;
    }
    return ans;
}

int ncr(int n, int r) {
    int t0,t1,t2;
    t0 = fact(n);
    t1 = fact(r);
    t2 = fact(n-r);
    return t0/(t1*t2);
}

int main() {
    printf("%d\n", ncr(5,2));
    return 0;
}