#include <stdio.h>
#include <string.h>

/*
* Task:
* Modify the previous program such that only the users Alice and Bob are greeted with their names.
*/

int main(int argc, char * argv[])
{
	char nameBuffer[255];

	printf("State your name: ");

	scanf("%[^\n]", &nameBuffer); /* %[^\n] asks scanf() to keep scanning all characters until there is a newline char. */

	if((strcmp("Bob", nameBuffer)==0) || (strcmp(nameBuffer, "Alice")==0)) /* strcmp() compares two strings. Strings should be null terminated */
	{
		printf("\nGreetings %s.\n", nameBuffer);
	} else{

	}

	return 0;
}
