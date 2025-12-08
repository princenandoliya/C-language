#include <stdio.h>

int main(){


    int a =7;

    int *ptr = &a;


    *ptr = 17;

    printf("pointer address: %u\n",ptr);

    printf(" a value :%d\n",a);


    return 0;


}