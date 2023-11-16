#include<stdio.h>

int main() {

    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Int : %zu bytes\n" , sizeof(intType));
    printf("Float  : %zu bytes\n" , sizeof(floatType));
    printf("Double : %zu bytes\n" , sizeof(doubleType));
    printf("Char : %zu bytes\n" , sizeof(charType));

    return 0;
}
