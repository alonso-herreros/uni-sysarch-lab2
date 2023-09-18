#ifndef CARD_H
#define CARD_H

#define NAME_SIZE 20
#define NIF_SIZE 9

struct Card {
    int id;
    char name[NAME_SIZE];
    char nif[NIF_SIZE];
    int n_items;
    float cost;
};

void Card_fill(struct Card *p_card);

void Card_dump(struct Card *p_card, unsigned char *array);

#endif