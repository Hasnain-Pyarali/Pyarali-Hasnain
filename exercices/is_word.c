#include "exercices.h"

bool is_word(char **str, char *word)
{
    for (int i = 0; word[i]; i++) {
        if (is_char(str, word[i]) == 0)
            return 0;
    }
    return 1;
}