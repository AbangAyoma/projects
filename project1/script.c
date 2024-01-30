#include<stdio.h>

int main(void)
{
	char ch;
	/* printf("************************************************************\n\n");
	printf("This program reads input and print it back to the screen \nJust like the echo command\n");
	printf("Enjoy :)\n\n");
	printf("************************************************************\n");*/
	while((ch = getchar()) != EOF)
		putchar(ch);
	/*printf("\nYou successfully terminated the program.\n");*/
	return(0);
}
