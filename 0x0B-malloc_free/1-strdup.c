#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry point
 * @str: input
 * Retrn: Always 0
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
