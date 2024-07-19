#include "get_pair_number_from_color.h"
#include "color_codes.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
