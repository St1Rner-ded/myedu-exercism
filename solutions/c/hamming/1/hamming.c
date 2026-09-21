#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
    if (strlen(lhs) != strlen(rhs)) return -1;
    int diff = 0;
    for (int i=0; lhs [i] != '\0'; ++i) {
        if (lhs [i] != rhs [i]) ++diff;
    }
    return diff;
}