#include <stdio.h>

/*
* Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
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
        if((i%3==0)||(i%5==0))
        {
            if(isDebug)
            {
                printf("[DEBUG]: Sum is %d + %d\n",sum,i);
            }
            sum+=i;
        } else {
            continue;
        }
    }
    printf("The sum of each number that is a multiple of 3 or 5 in %d is: %d \n",numberBuffer,sum);

    return 0;
}