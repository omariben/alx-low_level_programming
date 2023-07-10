#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicate a string
 * @str: input string to be duplicated
 * Return: On success, returns a pointer
 * to the newly allocated duplicated string.
*/
char *_strdup(char *str)
{
size_t length;
char *duplicate;

if (str == NULL)
return (NULL);

length = strlen(str);
duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);

return (duplicate);
}
