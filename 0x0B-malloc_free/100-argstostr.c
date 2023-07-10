#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: first arguement
 * @av: second arguement
 * Return: points to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i;
int total_length = 0;
int current_index = 0;
char *result;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]);
total_length++;
}

result = (char *)malloc((total_length + 1) * sizeof(char));
if (result == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
strcpy(result + current_index, av[i]);
current_index += strlen(av[i]);
result[current_index] = '\n';
current_index++;
}
result[total_length] = '\0';

return (result);
}
