#ifndef DECK_H
#define DECK_H

#include <map>
#include <vector>
#include "card.h"

class Deck {
public:
    Deck() {};
    ~Deck() {};

    virtual void Initialize(void);
    virtual void Shuffle(void);
    virtual void Show(void);

protected:
    std::vector<Card> cards;
};

#endif//DECK_H