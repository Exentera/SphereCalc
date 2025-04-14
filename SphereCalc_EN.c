#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main() {
    double r = 0.0, d = 0.0, u = 0.0, a = 0.0, o = 0.0, v = 0.0;
    int input = 0;
    
    while(input < 1 || input > 6) {
        printf("Select a known value for sphere calculation\n");
        printf("Radius\t\t(1)\n");
        printf("Diameter\t(2)\n");
        printf("Circumference\t(3)\n");
        printf("Circle area\t(4)\n");
        printf("Surface area\t(5)\n");
        printf("Volume\t\t(6)\n\n");
        printf("Selection\t:\t ");
        scanf("%i", &input);
    }

    if(input == 1) {
        printf("Radius\nEnter:\t ");
        scanf("%lf", &r);
    }
    else if(input == 2) {
        printf("Diameter\nEnter:\t ");
        scanf("%lf", &d);
        r = d / 2.0;
    }
    else if(input == 3) {
        printf("Circumference\nEnter:\t ");        
        scanf("%lf", &u);
        r = u / (2.0 * M_PI);
    }
    else if(input == 4) {
        printf("Circle area\nEnter:\t ");
        scanf("%lf", &a);
        r = pow(a / M_PI, 0.5);
    }
    else if(input == 5) {
        printf("Surface area\nEnter:\t ");
        scanf("%lf", &o);
        r = pow(o / (4.0 * M_PI), 0.5);
    }
    else if(input == 6) {
        printf("Volume\nEnter:\t ");
        scanf("%lf", &v);
        r = pow((3.0 * v) / (4.0 * M_PI), 1.0/3.0);
    }

    d = 2 * r;
    u = 2 * M_PI * r;
    a = M_PI * pow(r, 2);
    o = 4 * M_PI * pow(r, 2);
    v = (4.0 / 3.0) * M_PI * pow(r, 3);

    printf("\nSphere properties:\n");
    printf("Radius\t\t = %3.3lf\n", r);
    printf("Diameter\t = %3.3lf\n", d);
    printf("Circumference\t = %3.3lf\n", u);
    printf("Circle area\t = %3.3lf\n", a);
    printf("Surface area\t = %3.3lf\n", o);
    printf("Volume\t\t = %3.3lf\n", v);

    return 0;
}