#include "exercices.h"

int main(void)
{
    char *str = "\"hello\":\"world\"";
    object_item output_item = {0};

    printf("str before = %s\n", str);
    printf("valid token = %d\n", parse_object_item(&str, &output_item));
    printf("str after = %s\n", str);
    printf("output key = %s\n", output_item.key);
    printf("output value = %s\n", output_item.value);
}