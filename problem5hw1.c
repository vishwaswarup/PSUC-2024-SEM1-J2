#include <stdio.h>
// Check Leap Year: Check if a year is a leap year. 
int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if (year%4==0){
        printf("its a leap year\n");
    }
    else{
        printf("its not a leap year\n");
    }
    return 0;
}