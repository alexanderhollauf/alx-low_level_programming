#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates an infinite loop and then
 *              avoids it to prevent infinite execution.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;

	/* Infinite loop (commented out to avoid infinite execution) */
	/*while (i < 10)*/
	/*{*/
	/*	putchar(i);*/
	/*}*/

	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
