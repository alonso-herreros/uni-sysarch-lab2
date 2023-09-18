#include <stdio.h>
#include <stdlib.h>
#include "Card.h"

#define ITERATIONS 10


int main(int argc, char **argv)
{
    for (int i=0; i<ITERATIONS; i++) {
        struct Card card;
        Card_fill(&card);
        unsigned char *card_dump = calloc(sizeof(struct Card), sizeof(unsigned char));
        Card_dump(&card, card_dump);

        for (int i=0; i<sizeof(struct Card); i++) {
            printf("%02X ", card_dump[i]);
        }
        printf("\n");
    }
    printf("\n");
}
