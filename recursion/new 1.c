//Write a recursive C program to generate all permutations of a given string.
//Input: "ABC"
//Output:objectivec
//ABC
//ACB
//BAC
//BCA
//CAB
//CBA

#include <stdio.h>
#include <string.h>

// Function to swap characters at position i and j in a string
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap(&str[left], &str[i]);           // Swap current index with left
            permute(str, left + 1, right);       // Recurse on the rest
            swap(&str[left], &str[i]);           // Backtrack
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}
