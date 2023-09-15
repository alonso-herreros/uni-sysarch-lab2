#include <stdio.h>

void t_print(char* str, int t_size)
{
    for(int i=0; i<t_size; i++) {
        printf("%c", '-');
    }
    printf("%s\n", str);
    return;
}
