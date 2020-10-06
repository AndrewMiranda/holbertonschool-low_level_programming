#include "holberton.h"

char *_strchr(char *s, char c)
{
        unsigned int a;
	char *result;
	char *changed;
	*changed = c;
        c = 0;
        for (a = 0; s[a] != '\0'; a++)
        {
		if(s[a] == *changed)
		{
		*result = s[a];
		break;
		}
		else
		{
		*result = NULL;
		}
        }
	return result;
}
