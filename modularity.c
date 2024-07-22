#include <stdio.h>
#include "color_codes.h"
#include "print_reference_manual.h"
#include "test_number_to_pair.h"
#include "test_pair_to_number.h"

int main() { 
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    print_reference_manual();
    return 0;
}
