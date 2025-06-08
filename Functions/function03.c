//write a function that prints "Hello" if the user is from USA & "Hola" if the user is from Spain else print invalid.

#include <stdio.h>
#include <string.h>

void USA();
void Spain();

int main() {
    char country[20];
    printf("Enter the country (USA or Spain): ");
    scanf("%s", country);

    if (strcmp(country, "USA") == 0) {
        USA();
    } else if (strcmp(country, "Spain") == 0) {
        Spain();
    } else {
        printf("Invalid country\n");
    }

    return 0;
}

void USA() {
    printf("Hello!! \nHow are you?\n");
}

void Spain() {
    printf("Hola!!\n Cómo estás\n");
}
