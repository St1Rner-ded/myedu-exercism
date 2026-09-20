#include "triangle.h"

bool is_equilateral (triangle_t sides) {
    return (sides.a == sides.b && sides.b == sides.c && sides.a > 0);
}

bool is_isosceles (triangle_t sides) {
    return (((sides.a + sides.b) > sides.c) && ((sides.a + sides.c) > sides.b) && ((sides.b + sides.c) > sides.a) && ((sides.a == sides.b) || (sides.a == sides.c) || (sides.b == sides.c)) && sides.a > 0 && sides.b > 0 && sides.c > 0);
}

bool is_scalene (triangle_t sides) {
    return (((sides.a + sides.b) > sides.c) && ((sides.a + sides.c) > sides.b) && ((sides.b + sides.c) > sides.a) && sides.a != sides.b && sides.a != sides.c && sides.b != sides.c);
}