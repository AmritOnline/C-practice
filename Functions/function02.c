//write a function that prints Nameste if the user is Indian & Bonjour if the user is french.
#include<stdio.h>
void namaste();
void bonjour();
int main(){
	printf("Enter 'f' for french & 'i' for indian :");
char ch;
scanf("%c",&ch);

if(ch=='i'){
	namaste();
} else {
	bonjour();
}
	return 0;
}
void namaste(){
	printf("Nameste\n");
}
void bonjour(){
	printf("Bonjuor\n");
}