#include "Tools.h"
#include <stdio.h>

#define RANGE_COUNT 5

const int ranges[RANGE_COUNT][2] = {
    {0, 1000},
    {2000, 2230},
    {1780, 1800},
    {2310, 4220},
    {1000, 999}
};


int main(int argc, char **argv)
{
    for (int i=0; i<RANGE_COUNT; i++) {
        int min = ranges[i][0];
        int max = ranges[i][1];
        printf("Number between %4d and %4d: %d\n", min, max, custom_random(min, max));
    }
}
