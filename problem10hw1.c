#include <stdio.h>
/* Format specifier: demonstrate all the following formats using printf() 
 %d, %c, %f, %g, %h, %i, %u, %o, %x, %X, %e, %E, %p, $s, %ld*/
int main(){
    int intnum = 756;
    char ch = 'v';
    float floatnum = 07.0506;
    double doublenum = 4821746781.7241576;
    short shortnum = 7;
    unsigned int uinum = 7000;
    long int longint = 123456789;
    char str[] = "vishwaswarup";
    printf("integer = %d\n",intnum);
    printf("character = %c\n", ch);
    printf("float = %f\n",floatnum);
    printf("float/double = %g\n",doublenum);
    printf("short integer = %hd\n",shortnum);
    printf("integer = %i\n",intnum);
    printf("undersigned integer = %u\n",uinum);
    printf("octal = %o\n",intnum);
    printf("hexadecimal lowercase = %x\n",intnum);
    printf("hexadecimal uppercase = %X\n",intnum);
    printf("scientific lowercase = %e\n",floatnum);
    printf("scientific uppercase = %E\n",floatnum);
    return 0;
}