#include <stdio.h>

#define N_TABS 20

char tabs[N_TABS];

void t_init(int t_size) {
    if (t_size > 19 || t_size < 0) {
        tabs[0] = 0;
        return;
    }
    int i;
    for (i=0; i<t_size; i++) {
        tabs[i] = '-';
    }
    tabs[i] = 0;
}


void t_print(char* str)
{
    printf(tabs)
    printf("%s\n", str);
}
