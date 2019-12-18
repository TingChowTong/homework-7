#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("D://welcome.txt", "r");
	fptr2 = fopen("D://output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("File copy complete\n");
	}
	else
	{
		printf("Failed to open file\n");
	}
	system("pause");
	return 0;
}