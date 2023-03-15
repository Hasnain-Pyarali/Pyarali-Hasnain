#include "exercices.h"

int main(void)
{
    char *str = "\"hello\"42\"world\"";
    char *output_str1 = NULL;
    char *output_str2 = NULL;

    printf("str before = %s\n", str);
    printf("valid str = [%s]\n", token_string(&str));
    printf("valid str = [%s]\n", token_string(&str));
    printf("str after = %s\n", str);
}