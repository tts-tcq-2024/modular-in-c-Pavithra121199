#include "color_codes.h"
#include "get_color_from_pair_number.h"

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1; 
    colorPair.majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}
