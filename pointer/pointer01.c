//write a c program to print the address and the value of a variable using pointer.

#include<stdio.h>
int main(){
	int num = 10;
	int *ptr;
	
	ptr = &num;
	
	printf("Value of num      :%d\n", num);
	printf("Address of num    :%p\n", &num);
	printf("Value using ptr   :%d\n", *ptr);
	printf("Address using ptr :%p\n", ptr);
	
	return 0;
}