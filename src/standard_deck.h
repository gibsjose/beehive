#ifndef STANDARD_DECK_H
#define STANDARD_DECK_H

#include "deck.h"
#include "card_value.h"

class StandardDeck : Deck {
public:
    StandardDeck();
    ~StandardDeck();

    void Initialize(void);
    void Shuffle(void);
    void Show(void);    
};

#endif//STANDARD_DECK_H