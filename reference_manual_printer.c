#include <stdio.h>
#include "colorpair_to_string_converter.h"
#include "color_from_pair_number_finder.h"

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

