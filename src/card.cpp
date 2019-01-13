#include "card.h"

Card::Card(const CardValue & value, const Suit & suit) : value(value), suit(suit) {
    this->value = value;
    this->suit = suit;
}

CardValue Card::GetValue(void) const {
    return this->value;
}

Suit Card::GetSuit(void) const {
    return this->suit;
}

std::string_view Card::GetSymbol(void) const {
    return this->value.symbol;
}

bool Card::operator< (const Card & c) {
    return this->value < c.value;
}

bool Card::operator> (const Card & c) {
    return this->value > c.value;
}

bool Card::operator<= (const Card & c) {
    if ((*this == c) || (*this < c)) {
        return true;
    } else {
        return false;
    }
}

bool Card::operator>= (const Card & c) {
    if ((*this == c) || (*this > c)) {
        return true;
    } else {
        return false;
    }
}

bool Card::operator== (const Card & c) {
    return this->value == c.value;
}

bool Card::operator!= (const Card & c) {
    return ! (*this == c);
}
