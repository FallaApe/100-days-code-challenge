#include <stdio.h>
void main() {
    int radius;
    printf("enter radius: ");
    scanf("%d",&radius);
    int area = 3.14*radius*radius;
    int circum = 2*3.14*radius;
    printf("area of circle is %d\n",area);
    printf("circumference of circle is %d",circum);
}
