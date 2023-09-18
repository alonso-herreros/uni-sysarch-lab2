#include "Card.h"
#include <string.h>

#define CARD_SAMPLE_N 4

const struct Card DEF_CARDS[CARD_SAMPLE_N] = {
    {.id=1, .name="Pedro", .nif="08277292P", .n_items=7,  .cost=2.43},
    {.id=2, .name="Wilma", .nif="52489618W", .n_items=22, .cost=134.97},
    {.id=3, .name="Betty", .nif="45781697B", .n_items=11, .cost=234.197},
    {.id=4, .name="Pablo", .nif="45781697P", .n_items=43, .cost=845.248}
};

int max_id = 0;

void Card_fill(struct Card *p_card) {
    memcpy(p_card, &DEF_CARDS[(max_id) % CARD_SAMPLE_N], sizeof(struct Card));
    // ID is overwritten later

    p_card->id = ++max_id;
    // Max ID is incremented before assigning it to the card. This means the
    // value here is 1 more than the one used for rotation (good for us).
}

void  Card_dump(struct Card *p_card, unsigned char *array) {
    memcpy(array, p_card, sizeof(struct Card));
}