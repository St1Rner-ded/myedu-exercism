#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna)
{
    char *rna = malloc((strlen(dna) + 1) * sizeof(char));
    if (rna == NULL)
        return NULL;
    char *p = rna;
    static const char lookup[256] = {
        ['G'] = 'C',
        ['C'] = 'G',
        ['T'] = 'A',
        ['A'] = 'U'
    };
    for (; *dna; ++dna , ++p) {
        *p = lookup[(unsigned char)*dna];
    }
    *p = '\0';
    return rna;
}