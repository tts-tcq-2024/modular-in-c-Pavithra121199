#include <stdio.h>
#include <assert.h>
#include "color_codes.h"
#include "get_pair_number_from_color.h"
#include "test_pair_to_number.h"

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
