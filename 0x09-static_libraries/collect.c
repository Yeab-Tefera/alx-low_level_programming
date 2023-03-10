#include "main.h"

/**
 * *_strpbrk- soemthing
 * @s: somethign
 * @accept: comethign
 *
 * Return: something
 */
char *_strpbrk(char *s, char *accept)
{
}
char *_strstr(char *haystack, char *needle)
{
}
int _strlen(char *s)
{
        int c = 0;

        while (*(s + c) != '\0')
                c++;

        return (c);
}
void _puts(char *str)
{
        int c = 0;

        while (c >= 0)
        {
                if (str[c] == '\0')
                {
                        _putchar('\n');
                        break;
                }
                _putchar(str[c]);
                c++;
        }
}

int _putchar(char c)
{
        return(write(1, &c, 1));
}
