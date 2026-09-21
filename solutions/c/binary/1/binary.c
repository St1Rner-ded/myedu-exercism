#include "binary.h"
#include <string.h>

int convert(const char *input)
{
    int num = 0;
    int length = strlen(input);
    if (length > 0)
    {
        int bit = 0;
        const char *p = input + length - 1;
        for (; p >= input; --p, ++bit)
        {
            if (*p != '0' && *p != '1') return INVALID;
            num = num + (1 << bit) * (*p - '0');
        }
    }
    return num;
}