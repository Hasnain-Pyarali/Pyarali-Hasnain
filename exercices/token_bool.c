#include "exercices.h"

bool token_bool(char **str, bool *value)
{
    if (is_word(str, "true") == 1) {
        *value = true;
        return true;
    }
    else if (is_word(str, "false") == 1) {
        *value = false;
        return 1;
    }
    return 0;
}