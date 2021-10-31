#include <stdio.h>

int main()
{
    int a, b;  // Integer variables a and b
    int *p; // Pointer p
    
    a = 10; // Set a to 10
    b = 20; // Set b to 20
    p = &a; // Assign memory address to p

    printf("Address of P is %d\n",p); // Print the memory address of p
    printf("Value at p is %d\n",*p); // Print the value of p
    
    *p = b; // Assign a new value to the pointer *p

    printf("Address of P is %d\n",p); // The address of p itself does not change
    printf("Value at p is %d\n",*p); // However the value of p has changed
}