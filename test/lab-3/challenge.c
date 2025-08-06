#include<stdio.h>
int main () {
    int a,b,c;
    float g, gcal,gphy,gcom;
    char ecal, ephy, ecom;
    printf("Calculus score: ");
    scanf("%d", &a);
    printf("Physic score: ");
    scanf("%d", &b);    
    printf("compro score: ");
    scanf("%d", &c);

    if(a>=80) {
        gcal=4.0;
        ecal='A';
    }
    else if(a>=70) {
        gcal=3.0;
        ecal='B';
    }
    else if(a>=60) {
        gcal=2.0;
        ecal='C';
    }
    else if(a>=50) {
        gcal=1.0;
        ecal='D';
    }
    else {
        gcal=0.0;
        ecal='F';
    }
    
    if(b>=80) {
        gphy=4.0;
        ephy='A';
    }
    else if(b>=70) {
        gphy=3.0;
        ephy='B';
    }
    else if(b>=60) {
        gphy=2.0;
        ephy='C';
    }
    else if(b>=50) {
        gphy=1.0;
        ephy='D';
    }
    else {
        gphy=0.0;
        ephy='F';
    }

    if(c>=80) {
        gcom=4.0;
        ecom='A';
    }
    else if(c>=70) {
        gcom=3.0;
        ecom='B';
    }
    else if(c>=60) {
        gcom=2.0;
        ecom='C';
    }
    else if(c>=50) {
        gcom=1.0;
        ecom='D';
    }
    else {
        gcom=0.0;
        ecom='F';
    }
    g = (gphy + gcom + gcal)/3;

    printf("\nSubject Score Grade Grade\n--------------------------------------\n");
    printf("Cal        %3d     %c      %.1f\n", a, ecal, gcal);
    printf("Physics    %3d     %c      %.1f\n", b, ephy, gphy);
    printf("compro     %3d     %c      %.1f\n", c, ecom, gcom);
    printf("GPA: %.1f\n", g);
}