// gunc min macro
#define MIN(A,B) ({__typeof__(A) __a = (A); __typeof__(B) __b=(B); __a < __b ? __a : __b;})  

#include<stdio.h>

int main(){

    printf("%d\n", MIN(3,MIN(2,4)));
    return 0;
}