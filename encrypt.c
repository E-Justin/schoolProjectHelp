/*This program will ccopy contents in one file
to another -> change all contents to uppercase letters
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE* fP;
	errno_t err;
	char contents[100];
	char copy[100];
	


	err = fopen_s(&fP, "file.txt", "r");

	if (err == 0)
	{
		printf("The file was opened for reading \n");
	}
	else
	{
		printf("**Error when opening for reading \n");
	}
	
	while (!feof(fP))
	{
		fgets(contents, 100, fP);
	}
		
	contents;

	int i = 0;
	while (i < 100)
	{
		copy[i] = toupper(contents[i]);
		++i;
	}

	copy;

	fclose(fP);

	err = fopen_s(&fP, "upr.txt", "a");

	if (err == 0)
	{
		printf("The file was opened for appending \n");
	}
	else
	{
		printf("**Error when opening for appending \n");
	}

	fprintf(fP,copy);

	fclose(fP);

		return 0;

}
