#include "Tools.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>   


int custom_random(int min, int max)
{
    if (max <= min) {
        return min;
    }
    time_t t;
    srand((unsigned) time(&t));
    return min + rand()%(max-min);
}


int custom_pause(int millis)
{
    usleep(millis * 1000);
}
