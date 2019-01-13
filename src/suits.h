#ifndef SUITS_H
#define SUITS_H

#include <vector>

#include "suit.h"

class Suits {
public:
    Suits();
    ~Suits();

    // Diamonds
    static Suit Diamonds(void) {
        return Suit(Suit::DIAMONDS, Colour::RED, Suit::DIAMONDS_UTF);
    }

    // Hearts
    static Suit Hearts(void) {
        return Suit(Suit::HEARTS, Colour::RED, Suit::HEARTS_UTF);
    }

    // Clubs
    static Suit Clubs(void) {
        return Suit(Suit::CLUBS, Colour::BLACK, Suit::CLUBS_UTF);
    }

    // Spades
    static Suit Spades(void) {
        return Suit(Suit::SPADES, Colour::BLACK, Suit::SPADES_UTF);
    }

    // All suits
    static std::vector<Suit> All(void) {
        std::vector<Suit> suits = {
            Diamonds(),
            Hearts(),
            Clubs(),
            Spades()
        };

        return suits;
    }
};

#endif//SUITS_H