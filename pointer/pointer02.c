//Write a C program to demonstrate the concept of a pointer to a pointer (int **). Your program should:
//Declare an integer variable and assign it a value.
//Create a pointer to that variable.
//Create a pointer to the pointer (pointer-to-pointer).
//Print:
//The value of the variable using all three levels (x, *p, **pp)
//The address of the variable and the address stored at each level
//A visual explanation in the output (as comments or print labels)

#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    // Visual explanation and values
    printf("----- Pointer to Pointer Demonstration -----\n\n");

    printf("Value of x          : %d\n", x);
    printf("Value using *p      : %d\n", *p);
    printf("Value using **pp    : %d\n\n", **pp);

    printf("Address of x (&x)   : %p\n", (void*)&x);
    printf("Address stored in p : %p\n", (void*)p);
    printf("Address of p (&p)   : %p\n", (void*)&p);
    printf("Address stored in pp: %p\n", (void*)pp);
    printf("Address of pp (&pp) : %p\n\n", (void*)&pp);

    // Optional visual explanation
    printf("Explanation:\n");
    printf("x   ---> value is 10 (stored at &x)\n");
    printf("p   ---> points to x (holds &x)\n");
    printf("pp  ---> points to p (holds &p)\n");
    printf("So, **pp -> *(&p) -> *(p) -> x = 10\n");

    return 0;
}
