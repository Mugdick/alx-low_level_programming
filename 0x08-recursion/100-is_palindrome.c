#include "main.h"


int find_stringlen(char *s);
int check_palindrome(char *s, int len, int pos);
int is_palindrome(char *s);

/**
 * find_stringlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_stringlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_stringlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @pos: The position of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int pos)
{
	if (s[pos] == s[len / 2])
		return (1);

	if (s[pos] == s[len - pos - 1])
		return (check_palindrome(s, len, pos + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int pos = 0;
	int len = find_stringlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, pos));
}

