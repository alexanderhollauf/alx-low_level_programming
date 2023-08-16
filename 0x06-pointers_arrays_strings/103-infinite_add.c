#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

/**
 * add_digits - Adds two digits together with carry.
 * @n1: First digit to add.
 * @n2: Second digit to add.
 * @carry: Carry from the previous addition.
 *
 * Return: The sum of two digits with carry.
 */
int add_digits(int n1, int n2, int *carry)
{
	int temp_sum = n1 + n2 + *carry;
	*carry = temp_sum / 10;
	return (temp_sum % 10);
}

/**
 * infinite_add - Adds two numbers together.
 * @n1: Text representation of the first number to add.
 * @n2: Text representation of the second number to add.
 * @r: Pointer to the buffer.
 * @size_r: Buffer size.
 *
 * Return: Pointer to calling function.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i, j, digits = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;

	i = _strlen(n1);
	j = _strlen(n2);
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || carry)
	{
		if (i >= 0)
			val1 = n1[i--] - '0';
		else
			val1 = 0;

		if (j >= 0)
			val2 = n2[j--] - '0';
		else
			val2 = 0;

		temp_sum = add_digits(val1, val2, &carry);

		if (digits >= (size_r - 1))
			return (0);

		r[digits++] = temp_sum + '0';
	}

	if (digits == size_r)
		return (0);

	r[digits] = '\0';
	rev_string(r);

	return (r);
}

