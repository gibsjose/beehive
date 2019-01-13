#ifndef CARDVALUE_H
#define CARDVALUE_H

#include <stdint.h>
#include <string>

// Value of the card
class CardValue {
public:
    CardValue(const std::string_view & symbol, const uint16_t ranking) : symbol(symbol), ranking(ranking) {};
    ~CardValue() {};

    // Operator overloads to compare cards by value
    bool operator< (const CardValue & c) {
        return this->ranking < c.ranking;
    }
    
    bool operator> (const CardValue & c) {
        return this->ranking > c.ranking;
    }

    bool operator<= (const CardValue & c) {
        if ((*this == c) || (*this < c)) {
            return true;
        } else {
            return false;
        }
    }

    bool operator>= (const CardValue & c) {
        if ((*this == c) || (*this > c)) {
            return true;
        } else {
            return false;
        }
    }

    bool operator== (const CardValue & c) {
        return this->ranking == c.ranking;
    }

    bool operator!= (const CardValue & c) {
        return ! (*this == c);
    }

    std::string_view symbol;
    uint16_t ranking;
};

#endif//CARDVALUE_H