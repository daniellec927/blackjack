//
//  Enums.h
//  Blackjack 
//
//  Created by Howard Stahl on 6/9/23.
//

#ifndef ENUM_H
#define ENUM_H

namespace cs32
{
    enum class Suit { HEARTS, CLUBS, DIAMONDS, SPADES };
    enum class Face { ACE, DEUCE, THREE, FOUR, FIVE, SIX, SEVEN,
                      EIGHT, NINE, TEN, JACK, QUEEN, KING };

    enum class Choice { HIT, STAND, SPLIT, DOUBLEHIT, DOUBLESPLIT, DOUBLESTAND, SPLITHIT, SURRENDERHIT };

}

#endif
