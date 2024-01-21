//
//  Card.h
//  Blackjack 
//
//  Created by Howard Stahl on 6/6/23.
//

#ifndef CARD
#define CARD

#include <string>
#include "Enums.h"

namespace cs32
{

// this class represents a single playing card in a
// standard deck of playing cards with a Suit and Face value
class Card
{
public:
    Card();
    Card( Suit s, Face f );
    
    // stringifies this object to help test things
    std::string to_string() const;
    
    // getter for the Suit field of this class
    Suit getSuit() const;
    
    // setter for the Suit field of this class
    void setSuit( Suit s );
    
    // getter for the Face field of this class
    Face getFace() const;
    
    // setter for the Face field of this class
    void setFace( Face f );
    
    // determines the numeric equivalent of this playing
    // card based on blackjack rules of play
    // Aces should be worth one and Tens, Jacks, Queens and
    // Kings should be worth ten
    int  getValue() const;
private:
    // the data members of each Card class 
    Suit mSuit;
    Face mFace;
};

}

#endif 
