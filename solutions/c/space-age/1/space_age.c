#include "space_age.h"

float age (planet_t planet, int64_t seconds) {
    float years = 0;
    const double eyear = 31557600.0;
    switch (planet) {
        case MERCURY:
            years = seconds / eyear / 0.2408467;
            break;
        case VENUS:
            years = seconds / eyear / 0.61519726;
            break;
        case EARTH:
            years = seconds / eyear;
            break;
        case MARS:
            years = seconds / eyear / 1.8808158;
            break;
        case JUPITER:
            years = seconds / eyear / 11.862615;
            break;
        case SATURN:
            years = seconds / eyear / 29.447498;
            break;
        case URANUS:
            years = seconds / eyear / 84.016846;
            break;
        case NEPTUNE:
            years = seconds / eyear / 164.79132;
            break;
        default: return -1.0f;
    }
    return years;
}