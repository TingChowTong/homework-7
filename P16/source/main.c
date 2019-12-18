#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE* fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("D://output.txt", "a");
	printf("Enter character string, ENTER to input:\n");
	while ((ch = getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\nAddition to file complete\n");
	system("pause");
	return 0;
}