#include<stdio.h>
#include<math.h>
int main() {
    float r,h,v;
    printf("Enter cone hight: ");
    scanf("%f", &h);
    printf("Enter cone base radius: ");
    scanf("%f", &r);
    v = M_PI*r*r*h/3;
    printf("Cone volume = %.1f", v);
    if (v > 260) {
        printf("\n\nThis cone is perfect for Supun project\n");
    }
    else {
        printf("\n\nThis cone is not fit for this project\n");
    }
}