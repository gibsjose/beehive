#include "standard_deck.h"
#include "card.h"

StandardDeck::StandardDeck() {
    this->Initialize();

    return;
}

StandardDeck::~StandardDeck() {
    return;
}

// Initialize a standard deck of cards
void StandardDeck::Initialize(void) {
    // All suits
    for (auto s = Suits::All().begin(); s != Suits::All().end(); ++s) {
        // 2-10
        for (uint16_t i = 2; i <= 10; ++i) {
            this->cards.push_back(Card(CardValue(std::to_string(i), i), *s));
        }

        // Jack-Ace
        this->cards.push_back(Card(CardValue("J", 11), *s));
        this->cards.push_back(Card(CardValue("Q", 12), *s));
        this->cards.push_back(Card(CardValue("K", 13), *s));
        this->cards.push_back(Card(CardValue("A", 14), *s));
    }
}

void StandardDeck::Shuffle(void) {
    return;
}

void StandardDeck::Show(void) {
    for (auto c = this->cards.begin(); c != this->cards.end(); ++c) {
        std::cout << *c << std::endl;
    }
}