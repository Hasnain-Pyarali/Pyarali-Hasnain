#include "exercices.h"

int str_size(char *str)
{
    int i = 0;

    if (str[0] != '\"')
        return 0;
    else
        i++;
    while (str[i] != '\"')
        i++;
    return i;
}

char *token_string(char **str)
{
    char *save = malloc(sizeof(char) * str_size(*str));
    int i = 0;

    if (is_char(str, '\"') == 1) {
        while (is_char(str, '\"') == 0) {
            save[i] = *str[0];
            i++;
            (*str)++;
        }
        save[i] = '\0';
        return save;
    }
    free(save);
    return NULL;
}