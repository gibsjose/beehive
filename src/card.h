#ifndef CARD_H
#define CARD_H

#include <stdint.h>
#include <string>
#include "suits.h"
#include "card_value.h"
#include "rankings.h"

// Card
class Card {
public:
    Card(const CardValue & value, const Suit & suit);
    ~Card() {};

    CardValue GetValue(void) const;
    Suit GetSuit(void) const;
    std::string_view GetSymbol(void) const;

    bool operator< (const Card & c);
    bool operator> (const Card & c);
    bool operator<= (const Card & c);
    bool operator>= (const Card & c);
    bool operator== (const Card & c);
    bool operator!= (const Card & c);

    friend std::ostream & operator<<(std::ostream & stream, const Card & c) {
        if (c.GetSuit().GetColour() == Colour::RED) {
            stream << termcolor::colorize << termcolor::on_grey << termcolor::red;
        }

        else if (c.GetSuit().GetColour() == Colour::BLACK) {
            stream << termcolor::colorize << termcolor::on_grey << termcolor::white;
        }

        stream << c.GetSymbol() << c.GetSuit().UTF() << termcolor::reset;

        return stream;
    }

private:
    CardValue value;
    Suit suit;
};

#endif//CARD_H