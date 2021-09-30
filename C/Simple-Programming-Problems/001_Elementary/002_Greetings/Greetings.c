#include <stdio.h>

/*
* Task:
* Write a program that asks the user for their name and greets them with their name.
*/

int main(int argc, char * argv[])
{
	char nameBuffer[255];

	printf("State your name: ");

	//scanf("%s",&nameBuffer); /* This will only read one word. If the users name has spaces it will be cut off at the space. */
	scanf("%[^\n]",&nameBuffer); /* %[^\n] asks scanf() to keep scanning all characters until there is a newline char. */

	printf("\nGreetings %s.\n",nameBuffer);

	return 0;
}
