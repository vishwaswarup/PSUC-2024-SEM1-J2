#include <stdio.h>
// Simple Interest Calculation: Calculate simple interest. 
int main(){
    int p;
    int t;
    int r;
    printf("Welcome to simple interest calculator\n\n");
    printf("Enter Principal Amount : ");
    scanf("%d",&p);
    printf("Enter Rate of Interest : ");
    scanf("%d",&r);
    printf("Enter Time Period (in years) : ");
    scanf("%d",&t);
    printf("the simple interest is %d\n",(p*r*t)/100);
    return 0;
}