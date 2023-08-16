#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Difference between ASCII values of the first differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

