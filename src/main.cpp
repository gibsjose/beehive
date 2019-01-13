#include <iostream>

#include "card.h"
#include "suits.h"
#include "standard_deck.h"

int main() {
    std::cout << Suits::Diamonds() << std::endl;
    std::cout << Suits::Hearts() << std::endl;
    std::cout << Suits::Clubs() << std::endl;
    std::cout << Suits::Spades() << std::endl;

    Card two_spades = Card(CardValue("2", 2), Suits::Spades());
    Card three_hearts = Card(CardValue("3", 3), Suits::Hearts());

    std::cout << two_spades << std::endl;
    std::cout << three_hearts << std::endl;
    
    if (two_spades < three_hearts) {
        std::cout << "It works!" << std::endl;
    }

    StandardDeck deck;
    deck.Show();
}