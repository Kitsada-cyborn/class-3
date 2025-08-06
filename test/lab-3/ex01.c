#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a number: ");
    scanf("%i", &a);
    printf("Enter a number: ");
    scanf("%i", &b);
    if (a==b) {
        printf("Match\n");
    }
    else {
        printf("Does not match. Try again\n");
    }
return 0;
}