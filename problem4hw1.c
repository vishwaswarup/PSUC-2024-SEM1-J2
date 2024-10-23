#include <stdio.h>
// Check Even or Odd: Determine if a number is even or odd. 
int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    return 0;
}
