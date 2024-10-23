#include <stdio.h>
// Calculate the area and circumference of a circle using the radius. 
int main(){
    float r;
    printf("enter radius: ");
    scanf("%f",&r);
    printf("the area of the circle is %f\n",3.14*r*r);
    printf("the circumference of the circle is %f\n",3.14*r*2);
    return 0;
}