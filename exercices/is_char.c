#include "exercices.h"

bool is_char(char **str, char c)
{
    if (*str[0] == c) {
        (*str)++;
        return 1;
    }
    return 0;
}