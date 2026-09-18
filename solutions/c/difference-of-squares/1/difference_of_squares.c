#include "difference_of_squares.h"

unsigned sum_of_squares(unsigned number) {
    unsigned sq = 0, sum = 0;
    for (unsigned i = 1; i <= number; ++i) {
        sq = i * i;
        sum += sq;
        sq = 0;
    }
    return sum;
}

unsigned square_of_sum(unsigned number) {
    unsigned sum = 0;
    for (unsigned i = 1; i <= number; ++i) {
        sum += i;
    }
    return sum * sum;
}

unsigned difference_of_squares(unsigned number) {
    return square_of_sum(number)-sum_of_squares(number);
}