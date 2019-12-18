#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("D://welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\nTotal of %d letters\n", count);
	}
	else
	{
		printf("Failed to open file\n");
	}
	system("pause");
	return 0;
}