// Factorial using Recursion: Write a function int factorial(int n) that returns the factorial of n using recursion. Example: factorial(5) → 120

#include<stdio.h>

 int factorial(int n);
 
 int main(){
     int num=5;
     printf("Factrioal of %d is %d\n", num,factorial(num));
     return 0;
 }
 int factorial(int n){
     if (n<=1)
     return 1;
     else
     return n * factorial (n-1);
 }