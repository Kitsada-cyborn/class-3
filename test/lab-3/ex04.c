#include<stdio.h>
int main() {
    float a,b,c,d;
    char name[1000];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calculus score: ");
    scanf("%f", &a);
    printf("Enter your Physic score: ");
    scanf("%f", &b);
    printf("Enter your Science score: ");
    scanf("%f", &c);
    d = (a+b+c)/3;
    
    if (d >= 80) {
        printf("%s, your average is %.2f. You got grade A\n", name, d);
    }
    else if (d >= 70) {
        printf("%s, your average is %.2f. You got grade B\n", name, d);
    }
    else if (d >= 60) {
        printf("%s, your average is %.2f. You got grade C\n", name, d);
    }
    else if (d >= 50) {
        printf("%s, your average is %.2f. You got grade D\n", name, d);
    }
    else {
        printf("%s, your average is %.2f. You got grade F\n", name, d);   
    }
    return 0;
}