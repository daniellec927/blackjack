//
//  Hand.h
//  Blackjack 
//
//  Created by Howard Stahl on 6/6/23.
//

#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include "Enums.h"

namespace cs32
{

// this class represents an opening blackjack player hand of
// two cards
class Hand
{
public:
    Hand( Card card1, Card card2 );
    // getters for the Card fields of this class
    Card getCard1() const;
    Card getCard2() const;
    
    // for a dealers card, what should the player's move be
    // based on the strategy card provided in the assignment?
    Choice evaluateHand( Card dealerCard ) const;
    
    // is this hand made up of two matching Face cards?
    bool isPair() const;

    // is this hand made up of atleast one Ace?
    bool isSoft() const;
private:
    // the data members of each Hand class
    Card mCard1, mCard2;
};


}


#endif
