#ifndef SUIT_H
#define SUIT_H

// Suits
#include <iostream>
#include "termcolor/termcolor.hpp"
#include "colour.h"

class Suit {
public:
    // UTF encodings of standard suits
    static inline constexpr std::string_view HEARTS_UTF =      "\u2665";
    static inline constexpr std::string_view DIAMONDS_UTF =    "\u2666";
    static inline constexpr std::string_view CLUBS_UTF =       "\u2663";
    static inline constexpr std::string_view SPADES_UTF =      "\u2660";

    static const uint16_t HEARTS = 0;
    static const uint16_t DIAMONDS = 1;
    static const uint16_t CLUBS = 2;
    static const uint16_t SPADES = 3;

    Suit(const uint16_t id = HEARTS, const Colour colour = Colour::RED, const std::string_view & utf = HEARTS_UTF) {
        this->id = id;
        this->colour = colour;
        this->utf = utf;
    }

    ~Suit() {};

    uint16_t GetID(void) const {
        return this->id;
    }

    Colour GetColour(void) const {
        return this->colour;
    }

    bool IsRed(void) const {
        return this->colour == Colour::RED;
    }

    bool IsBlack(void) const {
        return this->colour == Colour::BLACK;
    }

    std::string_view UTF(void) const {
        return this->utf;
    }

    // Method must be declared as friend
    friend std::ostream& operator<<(std::ostream& stream, const Suit & s) {
        if (s.GetColour() == Colour::RED) {
            stream << termcolor::colorize << termcolor::on_grey << termcolor::red;
        }

        else if (s.GetColour() == Colour::BLACK) {
            stream << termcolor::colorize << termcolor::on_grey << termcolor::white;
        }

        stream << s.UTF() << termcolor::reset;

        return stream;
    }

private:
    uint16_t id;
    Colour colour;
    std::string_view utf;
};

#endif//SUIT_H