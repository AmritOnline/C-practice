// Sum of First N Natural Numbers: Write a recursive function int sum_natural(int n) that returns the sum of first n natural numbers. Example: sum_natural(4) → 10 (Because 1 + 2 + 3 + 4 = 10)

#include<stdio.h>

int sum_natural(int n);

int main(){
    int n=4;
    printf("Sum of first %d natural number : %d\n", n,sum_natural(n));
    return 0;
}
int sum_natural(int n){
    if (n==1)
    return 1;
    return n+sum_natural(n-1);
}