#include "darts.h"

uint8_t score (coordinate_t landing_position) {
    float d_sq = landing_position.x * landing_position.x + landing_position.y * landing_position.y;
    if (d_sq > 100.0F) return 0;
    if (d_sq > 25.0F) return 1;
    if (d_sq > 1.0F) return 5;
    return 10;
}