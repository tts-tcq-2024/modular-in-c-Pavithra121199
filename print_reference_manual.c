#include <stdio.h>
#include "color_codes.h"
#include "color_pair_to_string.h"
#include "get_color_from_pair_number.h"

void print_reference_manual() {
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    printf("Color Code Reference Manual\n");
    printf("----------------------------\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", i, colorPairNames);
    }
}
