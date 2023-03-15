#include "exercices.h"

bool parse_object_item(char **str, object_item *output_item)
{
    char *key = token_string(str);
    (*str)++;
    char *value = token_string(str);

    if (key != NULL && value != NULL) {
        output_item->key = key;
        output_item->value = value;
        return 1;
    }
    else
        return 0;
}