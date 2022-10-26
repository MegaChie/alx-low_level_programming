#include "main.h"
/**
 *string_toupper - updates the value of the variable
 * @a: pointer to the variable to update
 */
char *cap_string(char *a)
{
int s, f;

    char ch[13] = {' ', '\t', '\n', ',', ';', '.',
        '!', '?', '"', '(', ')', '{', '}'};

    for (s = 0; s[s] != '\0'; s++)
    {
        if (s == 0 && s[s] >= 'a' && s[s] <= 'z')
            s[s] -= 32;

        for (f = 0; f < 13; f++)
        {
            if (s[s] == ch[f])
            {
                if (s[s + 1] >= 'a' && s[s + 1] <= 'z')
                {
                    s[s + 1] -= 32;
                }
            }
        }
    }

    return (s);
}
