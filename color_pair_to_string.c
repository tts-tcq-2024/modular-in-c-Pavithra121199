#include <stdio.h>
#include "color_pair_to_string.h"
#include "color_codes.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
            MajorColorNames[colorPair->majorColor],
            MinorColorNames[colorPair->minorColor]);
}
