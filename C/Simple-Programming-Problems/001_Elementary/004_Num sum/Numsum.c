#include <stdio.h>

/*
* Task:
* Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
*/

int main(int argc, char * argv[])
{
    int numberBuffer=0;
    int isDebug=0;
    
    printf("Enter an integer: ");
    scanf("%d",&numberBuffer);

    int sum=0;
    for(int i=numberBuffer;i>0;i--)
    {
        if(isDebug)
        {
            printf("[DEBUG]: Sum is %d + %d\n",sum,i);
        }
        sum+=i;
    }
    printf("The sum of all numbers in %d is: %d \n",numberBuffer,sum);

    return 0;
}