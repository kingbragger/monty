#include"monty.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: type str compared
 * @s2: type str compared
 * Return: 0 if s1 and s2 are equals.
 */
int _strcmp(char *s1, char *s2)
{
	int z;

	for (z = 0; s1[z] == s2[z] && s1[z]; z++)
		;
	if (s1[z] > s2[z])
		return (1);
	if (s1[z] < s2[z])
		return (-1);
	return (0);
}
/**
 * _sch - it search if a char is inside a string.
 * @s: string to review
 * @c: char to find
 * Return: 1 if success 0 if not
 */
int _sch(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			break;
		}
		cont++;
	}
	if (s[cont] == c)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - a function that cut a strng into tkns depending of the delimit.
 * @s: string to cut in parts
 * @d: delimiters
 * Return: first partition
 */
char *_strtoky(char *s, char *d)
{
	static char *ultimo;
	int z = 0, a = 0;

	if (!s)
		s = ultimo;
	while (s[z] != '\0')
	{
		if (_sch(d, s[z]) == 0 && s[z + 1] == '\0')
		{
			ultimo = s + z + 1;
			*ultimo = '\0';
			s = s + a;
			return (s);
		}
		else if (_sch(d, s[z]) == 0 && _sch(d, s[z + 1]) == 0)
			z++;
		else if (_sch(d, s[z]) == 0 && _sch(d, s[z + 1]) == 1)
		{
			ultimo = s + z + 1;
			*ultimo = '\0';
			ultimo++;
			s = s + a;
			return (s);
		}
		else if (_sch(d, s[z]) == 1)
		{
			a++;
			z++;
		}
	}
	return (NULL);
}
