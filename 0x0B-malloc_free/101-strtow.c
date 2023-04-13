#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
    int i, j, k, l, size;
    char **arr;

    if (str == NULL)
        return (NULL);
    size = 0;
    k = 0;
    j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            k = 1;
        if (str[i] != ' ' && k == 1)
        {
            k = 0;
            size++;
        }
    }
    k = 0;
    printf("size = %d\n", size);
    arr = (char **)malloc(sizeof(char *) * size);
    if (arr == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            k = 1;
        if (str[i] != ' ' && k == 1)
        {
            for (l = 0; str[l + i] != ' '; l++)
            arr[j] = (char *)malloc(sizeof(char) * (l + 1));
            if (arr[j] == NULL)
                return (NULL);
            for (l = 0; str[l + i] != ' '; l++)
                arr[j][l] = str[l + i];
            arr[j][l + 1] = '\0';
            j++;
        }
    }
    
    
    return (arr);
}