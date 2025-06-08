//write a c program to print the address and the value of a variable using pointer.

#include<stdio.h.
int main(){
	int num=10;
	int *ptr;
	
	ptr=&num;
	
	printf("value of num  :%d\n",num);
	printf("address of num :%d\n",&num);
	printf("value using ptr :%d\n",*ptr);
	printf("address using ptr :%d\n,ptr);
	
	return 0;
}