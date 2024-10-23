#include <stdio.h>
//  Convert temperature between Fahrenheit and Celsius.
int main(){
    float temp;
    printf("enter temperature: ");
    scanf("%f",&temp);
    printf("the input temperature was %f Fahrenheit\n", temp);
    printf("the temperature in Celsius is %f\n", (5.0/9.0)*(temp-32));
    return 0;
}