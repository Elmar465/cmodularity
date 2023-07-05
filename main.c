#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printChars(char ch, int howMany)
{

    int i;
    for (i = 0; i < howMany; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}

int power(int n, int pow)
{
    int i, result = 1;
    for (i = 0; i < pow; i++)
    {
        result *= n;
    }
    printf("\n");

    return result;
}
int add1(int n) {
    n++;
    return n;
}
int addMod1(int*n) {
    printf("modifiying value at address %x\n", n);
    (*n)++;
    return *n;
}
double fraction(double d1) {
    int whole;
    whole = (int)d1;
    return d1 - whole;
}
int main(void)
{
    // printChars("-", 40);
    // printf("An example of a simple function\n");
    // printChars("*", 40);

    int i;
    printf("%4s%6s\n", "N", "2*N");

    for (i = 0; i < 11; i++)
    {
        printf("%4d%6d\n", i, power(2, i));
    }

    //*Pointers

    int n = 42; //* an int
    int *pn;    //* a pointer to (address) of int
    pn = &n;    //* set pn to address of n
    printf("n=%d and is stored at %x\n", n, pn);

    //*now print the value of n by derefencing the pointer
    printf("n=%d and is stored at %x\n", *pn, pn);

    (*pn)++; //* add 1 to n
    printf("after incrementing, n=%d and is stored at %x\n", *pn, pn);

    int value = 9, returnValue;
    printf("before calling add1, value=%d and is at address %x\n", value, &value);
    returnValue = add1(value); //*pass by value

    printf("after calling add1, value=%d and returnValue=%d\n", value, returnValue);
    printf("About to call addMod1\n");
    returnValue = addMod1(&value);
    printf("after calling addMod1, value = %d and returnValue=%d\n", value, returnValue);
    printf("power=%d\n", power((int)2.5, (int)3.1));
    printf("Fraction=%f\n", fraction(5));
    return 0;
}