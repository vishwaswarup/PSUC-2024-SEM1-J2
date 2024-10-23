#include <stdio.h>
// Swapping Two Numbers Using Third Variable: Swap two numbers using a third variable. 
int main(){
    int a;
    int b; 
    printf("enter number 1 : ");
    scanf("%d",&a);
    printf("enter number 2 : ");
    scanf("%d",&b);
    int c = a;
    a = b;
    b = c;
    printf("after swapping...\n\n");
    printf("value of number 1 is %d\n",a);
    printf("value of number 2 is %d\n",b);
    
    return 0;
}