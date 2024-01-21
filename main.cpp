//
//  main.cpp
//  Blackjack 
//
//  Created by Howard Stahl on 6/6/23.
//

#include <iostream>
#include <cassert>
#include "Enums.h"
#include "Card.h"
#include "Hand.h"

using namespace std;
using namespace cs32;

int main() {
    Card c;
    Card c1;
    Card c2;
    Hand h( c1, c2);
    //Card ace( Suit::CLUBS, Face::ACE );
    Card ace( Suit::CLUBS, Face::THREE );
    ace.setFace(Face::ACE);
    ace.setSuit(Suit::HEARTS);
    Card two( Suit::CLUBS, Face::DEUCE );
    Card three( Suit::CLUBS, Face::THREE );
    Card four( Suit::CLUBS, Face::FOUR );
    Card five( Suit::CLUBS, Face::FIVE );
    Card six( Suit::CLUBS, Face::SIX );
    Card seven( Suit::CLUBS, Face::SEVEN );
    Card eight( Suit::CLUBS, Face::EIGHT );
    Card nine( Suit::CLUBS, Face::NINE );
    Card ten( Suit::CLUBS, Face::TEN );
    Card jack( Suit::CLUBS, Face::JACK );
    Card queen( Suit::CLUBS, Face::QUEEN );
    Card king( Suit::CLUBS, Face::KING );
    // two aces...
    assert( h.evaluateHand(two) == Choice::SPLIT );
    assert( h.getCard1().getSuit() == Suit::HEARTS );
    
    Hand h1( two, two );
    assert( h1.evaluateHand(two) == Choice::SPLITHIT );
    assert( h1.evaluateHand(three) == Choice::SPLITHIT );
    assert( h1.evaluateHand(four) == Choice::SPLIT );
    assert( h1.evaluateHand(five) == Choice::SPLIT );
    assert( h1.evaluateHand(six) == Choice::SPLIT );
    assert( h1.evaluateHand(seven) == Choice::SPLIT );
    assert( h1.evaluateHand(eight) == Choice::HIT );
    assert( h1.evaluateHand(nine) == Choice::HIT );
    assert( h1.evaluateHand(ten) == Choice::HIT );
    assert( h1.evaluateHand(jack) == Choice::HIT );
    assert( h1.evaluateHand(queen) == Choice::HIT );
    assert( h1.evaluateHand(king) == Choice::HIT );
    assert(h1.evaluateHand(ace) == Choice::HIT );
    
    Hand h2( three, three );
    assert( h2.evaluateHand(two) == Choice::SPLITHIT );
    assert( h2.evaluateHand(three) == Choice::SPLITHIT );
    assert( h2.evaluateHand(four) == Choice::SPLIT );
    assert( h2.evaluateHand(five) == Choice::SPLIT );
    assert( h2.evaluateHand(six) == Choice::SPLIT );
    assert( h2.evaluateHand(seven) == Choice::SPLIT );
    assert( h2.evaluateHand(eight) == Choice::HIT );
    assert( h2.evaluateHand(nine) == Choice::HIT );
    assert( h2.evaluateHand(ten) == Choice::HIT );
    assert( h2.evaluateHand(jack) == Choice::HIT );
    assert( h2.evaluateHand(queen) == Choice::HIT );
    assert( h2.evaluateHand(king) == Choice::HIT );
    assert( h2.evaluateHand(ace) == Choice::HIT );
    
    Hand h3( four, four );
    assert( h3.evaluateHand(two) == Choice::HIT );
    assert( h3.evaluateHand(three) == Choice::HIT );
    assert( h3.evaluateHand(four) == Choice::HIT );
    assert( h3.evaluateHand(five) == Choice::SPLITHIT );
    assert( h3.evaluateHand(six) == Choice::SPLITHIT );
    assert( h3.evaluateHand(seven) == Choice::HIT );
    assert( h3.evaluateHand(eight) == Choice::HIT );
    assert( h3.evaluateHand(nine) == Choice::HIT );
    assert( h3.evaluateHand(ten) == Choice::HIT );
    assert( h3.evaluateHand(jack) == Choice::HIT );
    assert( h3.evaluateHand(queen) == Choice::HIT );
    assert( h3.evaluateHand(king) == Choice::HIT );
    assert( h3.evaluateHand(ace) == Choice::HIT );
    
    Hand h4( five, five );
    assert( h4.evaluateHand(two) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(three) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(seven) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(eight) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(nine) == Choice::DOUBLEHIT );
    assert( h4.evaluateHand(ten) == Choice::HIT );
    assert( h4.evaluateHand(jack) == Choice::HIT );
    assert( h4.evaluateHand(queen) == Choice::HIT );
    assert( h4.evaluateHand(king) == Choice::HIT );
    assert( h4.evaluateHand(ace) == Choice::HIT );
    
    Hand h5( six, six );
    assert( h5.evaluateHand(two) == Choice::SPLITHIT );
    assert( h5.evaluateHand(three) == Choice::SPLIT );
    assert( h5.evaluateHand(four) == Choice::SPLIT );
    assert( h5.evaluateHand(five) == Choice::SPLIT );
    assert( h5.evaluateHand(six) == Choice::SPLIT );
    assert( h5.evaluateHand(seven) == Choice::HIT );
    assert( h5.evaluateHand(eight) == Choice::HIT );
    assert( h5.evaluateHand(nine) == Choice::HIT );
    assert( h5.evaluateHand(ten) == Choice::HIT );
    assert( h5.evaluateHand(jack) == Choice::HIT );
    assert( h5.evaluateHand(queen) == Choice::HIT );
    assert( h5.evaluateHand(king) == Choice::HIT );
    assert( h5.evaluateHand(ace) == Choice::HIT );
    
    Hand h6( seven, seven );
    assert( h6.evaluateHand(two) == Choice::SPLIT );
    assert( h6.evaluateHand(three) == Choice::SPLIT );
    assert( h6.evaluateHand(four) == Choice::SPLIT );
    assert( h6.evaluateHand(five) == Choice::SPLIT );
    assert( h6.evaluateHand(six) == Choice::SPLIT );
    assert( h6.evaluateHand(seven) == Choice::SPLIT );
    assert( h6.evaluateHand(eight) == Choice::HIT );
    assert( h6.evaluateHand(nine) == Choice::HIT );
    assert( h6.evaluateHand(ten) == Choice::HIT );
    assert( h6.evaluateHand(jack) == Choice::HIT );
    assert( h6.evaluateHand(queen) == Choice::HIT );
    assert( h6.evaluateHand(king) == Choice::HIT );
    assert( h6.evaluateHand(ace) == Choice::HIT );
    
    Hand h7( eight, eight );
    assert( h7.evaluateHand(two) == Choice::SPLIT );
    assert( h7.evaluateHand(three) == Choice::SPLIT );
    assert( h7.evaluateHand(four) == Choice::SPLIT );
    assert( h7.evaluateHand(five) == Choice::SPLIT );
    assert( h7.evaluateHand(six) == Choice::SPLIT );
    assert( h7.evaluateHand(seven) == Choice::SPLIT );
    assert( h7.evaluateHand(eight) == Choice::SPLIT );
    assert( h7.evaluateHand(nine) == Choice::SPLIT );
    assert( h7.evaluateHand(ten) == Choice::SPLIT );
    assert( h7.evaluateHand(jack) == Choice::SPLIT );
    assert( h7.evaluateHand(queen) == Choice::SPLIT );
    assert( h7.evaluateHand(king) == Choice::SPLIT );
    assert( h7.evaluateHand(ace) == Choice::SPLIT );
    
    Hand h8( nine, nine );
    assert( h8.evaluateHand(two) == Choice::SPLIT );
    assert( h8.evaluateHand(three) == Choice::SPLIT );
    assert( h8.evaluateHand(four) == Choice::SPLIT );
    assert( h8.evaluateHand(five) == Choice::SPLIT );
    assert( h8.evaluateHand(six) == Choice::SPLIT );
    assert( h8.evaluateHand(seven) == Choice::STAND );
    assert( h8.evaluateHand(eight) == Choice::SPLIT );
    assert( h8.evaluateHand(nine) == Choice::SPLIT );
    assert( h8.evaluateHand(ten) == Choice::STAND );
    assert( h8.evaluateHand(jack) == Choice::STAND );
    assert( h8.evaluateHand(queen) == Choice::STAND );
    assert( h8.evaluateHand(king) == Choice::STAND );
    assert( h8.evaluateHand(ace) == Choice::STAND );
    
    Hand h9( ten, ten );
    assert( h9.evaluateHand(two) == Choice::STAND );
    assert( h9.evaluateHand(three) == Choice::STAND );
    assert( h9.evaluateHand(four) == Choice::STAND );
    assert( h9.evaluateHand(five) == Choice::STAND );
    assert( h9.evaluateHand(six) == Choice::STAND );
    assert( h9.evaluateHand(seven) == Choice::STAND );
    assert( h9.evaluateHand(eight) == Choice::STAND );
    assert( h9.evaluateHand(nine) == Choice::STAND );
    assert( h9.evaluateHand(ten) == Choice::STAND );
    assert( h9.evaluateHand(jack) == Choice::STAND );
    assert( h9.evaluateHand(queen) == Choice::STAND );
    assert( h9.evaluateHand(king) == Choice::STAND );
    assert( h9.evaluateHand(ace) == Choice::STAND );
    
    Hand h10( jack, jack );
    assert( h10.evaluateHand(two) == Choice::STAND );
    assert( h10.evaluateHand(three) == Choice::STAND );
    assert( h10.evaluateHand(four) == Choice::STAND );
    assert( h10.evaluateHand(five) == Choice::STAND );
    assert( h10.evaluateHand(six) == Choice::STAND );
    assert( h10.evaluateHand(seven) == Choice::STAND );
    assert( h10.evaluateHand(eight) == Choice::STAND );
    assert( h10.evaluateHand(nine) == Choice::STAND );
    assert( h10.evaluateHand(ten) == Choice::STAND );
    assert( h10.evaluateHand(jack) == Choice::STAND );
    assert( h10.evaluateHand(queen) == Choice::STAND );
    assert( h10.evaluateHand(king) == Choice::STAND );
    assert( h10.evaluateHand(ace) == Choice::STAND );
    
    Hand h11( queen, queen );
    assert( h11.evaluateHand(two) == Choice::STAND );
    assert( h11.evaluateHand(three) == Choice::STAND );
    assert( h11.evaluateHand(four) == Choice::STAND );
    assert( h11.evaluateHand(five) == Choice::STAND );
    assert( h11.evaluateHand(six) == Choice::STAND );
    assert( h11.evaluateHand(seven) == Choice::STAND );
    assert( h11.evaluateHand(eight) == Choice::STAND );
    assert( h11.evaluateHand(nine) == Choice::STAND );
    assert( h11.evaluateHand(ten) == Choice::STAND );
    assert( h11.evaluateHand(jack) == Choice::STAND );
    assert( h11.evaluateHand(queen) == Choice::STAND );
    assert( h11.evaluateHand(king) == Choice::STAND );
    assert( h11.evaluateHand(ace) == Choice::STAND );
    
    Hand h12( king, king );
    assert( h12.evaluateHand(two) == Choice::STAND );
    assert( h12.evaluateHand(three) == Choice::STAND );
    assert( h12.evaluateHand(four) == Choice::STAND );
    assert( h12.evaluateHand(five) == Choice::STAND );
    assert( h12.evaluateHand(six) == Choice::STAND );
    assert( h12.evaluateHand(seven) == Choice::STAND );
    assert( h12.evaluateHand(eight) == Choice::STAND );
    assert( h12.evaluateHand(nine) == Choice::STAND );
    assert( h12.evaluateHand(ten) == Choice::STAND );
    assert( h12.evaluateHand(jack) == Choice::STAND );
    assert( h12.evaluateHand(queen) == Choice::STAND );
    assert( h12.evaluateHand(king) == Choice::STAND );
    assert( h12.evaluateHand(ace) == Choice::STAND );
    
    Hand h13( ace, ace );
    assert( h13.evaluateHand(two) == Choice::SPLIT );
    assert( h13.evaluateHand(three) == Choice::SPLIT );
    assert( h13.evaluateHand(four) == Choice::SPLIT );
    assert( h13.evaluateHand(five) == Choice::SPLIT );
    assert( h13.evaluateHand(six) == Choice::SPLIT );
    assert( h13.evaluateHand(seven) == Choice::SPLIT );
    assert( h13.evaluateHand(eight) == Choice::SPLIT );
    assert( h13.evaluateHand(nine) == Choice::SPLIT );
    assert( h13.evaluateHand(ten) == Choice::SPLIT );
    assert( h13.evaluateHand(jack) == Choice::SPLIT );
    assert( h13.evaluateHand(queen) == Choice::SPLIT );
    assert( h13.evaluateHand(king) == Choice::SPLIT );
    assert( h13.evaluateHand(ace) == Choice::SPLIT );
    
    Hand h14( ace, two );
    assert( h14.evaluateHand(two) == Choice::HIT );
    assert( h14.evaluateHand(three) == Choice::HIT );
    assert( h14.evaluateHand(four) == Choice::HIT );
    assert( h14.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h14.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h14.evaluateHand(seven) == Choice::HIT );
    assert( h14.evaluateHand(eight) == Choice::HIT );
    assert( h14.evaluateHand(nine) == Choice::HIT );
    assert( h14.evaluateHand(ten) == Choice::HIT );
    assert( h14.evaluateHand(jack) == Choice::HIT );
    assert( h14.evaluateHand(queen) == Choice::HIT );
    assert( h14.evaluateHand(king) == Choice::HIT );
    assert( h14.evaluateHand(ace) == Choice::HIT );
    
    Hand h15( three, ace );
    assert( h15.evaluateHand(two) == Choice::HIT );
    assert( h15.evaluateHand(three) == Choice::HIT );
    assert( h15.evaluateHand(four) == Choice::HIT );
    assert( h15.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h15.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h15.evaluateHand(seven) == Choice::HIT );
    assert( h15.evaluateHand(eight) == Choice::HIT );
    assert( h15.evaluateHand(nine) == Choice::HIT );
    assert( h15.evaluateHand(ten) == Choice::HIT );
    assert( h15.evaluateHand(jack) == Choice::HIT );
    assert( h15.evaluateHand(queen) == Choice::HIT );
    assert( h15.evaluateHand(king) == Choice::HIT );
    assert( h15.evaluateHand(ace) == Choice::HIT );
    
    Hand h16( ace, four );
    assert( h16.evaluateHand(two) == Choice::HIT );
    assert( h16.evaluateHand(three) == Choice::HIT );
    assert( h16.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h16.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h16.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h16.evaluateHand(seven) == Choice::HIT );
    assert( h16.evaluateHand(eight) == Choice::HIT );
    assert( h16.evaluateHand(nine) == Choice::HIT );
    assert( h16.evaluateHand(ten) == Choice::HIT );
    assert( h16.evaluateHand(jack) == Choice::HIT );
    assert( h16.evaluateHand(queen) == Choice::HIT );
    assert( h16.evaluateHand(king) == Choice::HIT );
    assert( h16.evaluateHand(ace) == Choice::HIT );
    
    Hand h17( five, ace );
    assert( h17.evaluateHand(two) == Choice::HIT );
    assert( h17.evaluateHand(three) == Choice::HIT );
    assert( h17.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h17.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h17.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h17.evaluateHand(seven) == Choice::HIT );
    assert( h17.evaluateHand(eight) == Choice::HIT );
    assert( h17.evaluateHand(nine) == Choice::HIT );
    assert( h17.evaluateHand(ten) == Choice::HIT );
    assert( h17.evaluateHand(jack) == Choice::HIT );
    assert( h17.evaluateHand(queen) == Choice::HIT );
    assert( h17.evaluateHand(king) == Choice::HIT );
    assert( h17.evaluateHand(ace) == Choice::HIT );
    
    Hand h18( ace, six );
    assert( h18.evaluateHand(two) == Choice::HIT );
    assert( h18.evaluateHand(three) == Choice::DOUBLEHIT );
    assert( h18.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h18.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h18.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h18.evaluateHand(seven) == Choice::HIT );
    assert( h18.evaluateHand(eight) == Choice::HIT );
    assert( h18.evaluateHand(nine) == Choice::HIT );
    assert( h18.evaluateHand(ten) == Choice::HIT );
    assert( h18.evaluateHand(jack) == Choice::HIT );
    assert( h18.evaluateHand(queen) == Choice::HIT );
    assert( h18.evaluateHand(king) == Choice::HIT );
    assert( h18.evaluateHand(ace) == Choice::HIT );
    
    Hand h19( seven, ace );
    assert( h19.evaluateHand(two) == Choice::STAND );
    assert( h19.evaluateHand(three) == Choice::DOUBLESTAND );
    assert( h19.evaluateHand(four) == Choice::DOUBLESTAND );
    assert( h19.evaluateHand(five) == Choice::DOUBLESTAND );
    assert( h19.evaluateHand(six) == Choice::DOUBLESTAND );
    assert( h19.evaluateHand(seven) == Choice::STAND );
    assert( h19.evaluateHand(eight) == Choice::STAND );
    assert( h19.evaluateHand(nine) == Choice::HIT );
    assert( h19.evaluateHand(ten) == Choice::HIT );
    assert( h19.evaluateHand(jack) == Choice::HIT );
    assert( h19.evaluateHand(queen) == Choice::HIT );
    assert( h19.evaluateHand(king) == Choice::HIT );
    assert( h19.evaluateHand(ace) == Choice::HIT );
    
    Hand h20( ace, eight );
    assert( h20.evaluateHand(two) == Choice::STAND );
    assert( h20.evaluateHand(three) == Choice::STAND );
    assert( h20.evaluateHand(four) == Choice::STAND );
    assert( h20.evaluateHand(five) == Choice::STAND );
    assert( h20.evaluateHand(six) == Choice::STAND );
    assert( h20.evaluateHand(seven) == Choice::STAND );
    assert( h20.evaluateHand(eight) == Choice::STAND );
    assert( h20.evaluateHand(nine) == Choice::STAND );
    assert( h20.evaluateHand(ten) == Choice::STAND );
    assert( h20.evaluateHand(jack) == Choice::STAND );
    assert( h20.evaluateHand(queen) == Choice::STAND );
    assert( h20.evaluateHand(king) == Choice::STAND );
    assert( h20.evaluateHand(ace) == Choice::STAND );
    
    Hand h21( three, five ); //8
    assert( h21.evaluateHand(two) == Choice::HIT );
    assert( h21.evaluateHand(three) == Choice::HIT );
    assert( h21.evaluateHand(four) == Choice::HIT );
    assert( h21.evaluateHand(five) == Choice::HIT );
    assert( h21.evaluateHand(six) == Choice::HIT );
    assert( h21.evaluateHand(seven) == Choice::HIT );
    assert( h21.evaluateHand(eight) == Choice::HIT );
    assert( h21.evaluateHand(nine) == Choice::HIT );
    assert( h21.evaluateHand(ten) == Choice::HIT );
    assert( h21.evaluateHand(jack) == Choice::HIT );
    assert( h21.evaluateHand(queen) == Choice::HIT );
    assert( h21.evaluateHand(king) == Choice::HIT );
    assert( h21.evaluateHand(ace) == Choice::HIT );
    
    Hand h22( four, five ); //9
    assert( h22.evaluateHand(two) == Choice::HIT );
    assert( h22.evaluateHand(three) == Choice::DOUBLEHIT );
    assert( h22.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h22.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h22.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h22.evaluateHand(seven) == Choice::HIT );
    assert( h22.evaluateHand(eight) == Choice::HIT );
    assert( h22.evaluateHand(nine) == Choice::HIT );
    assert( h22.evaluateHand(ten) == Choice::HIT );
    assert( h22.evaluateHand(jack) == Choice::HIT );
    assert( h22.evaluateHand(queen) == Choice::HIT );
    assert( h22.evaluateHand(king) == Choice::HIT );
    assert( h22.evaluateHand(ace) == Choice::HIT );
    
    Hand h23( four, six ); //10
    assert( h23.evaluateHand(two) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(three) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(seven) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(eight) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(nine) == Choice::DOUBLEHIT );
    assert( h23.evaluateHand(ten) == Choice::HIT );
    assert( h23.evaluateHand(jack) == Choice::HIT );
    assert( h23.evaluateHand(queen) == Choice::HIT );
    assert( h23.evaluateHand(king) == Choice::HIT );
    assert( h23.evaluateHand(ace) == Choice::HIT );
    
    Hand h24( five, six ); //11
    assert( h24.evaluateHand(two) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(three) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(four) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(five) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(six) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(seven) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(eight) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(nine) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(ten) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(jack) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(queen) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(king) == Choice::DOUBLEHIT );
    assert( h24.evaluateHand(ace) == Choice::DOUBLEHIT );
    
    Hand h25( five, seven ); //12
    assert( h25.evaluateHand(two) == Choice::HIT );
    assert( h25.evaluateHand(three) == Choice::HIT );
    assert( h25.evaluateHand(four) == Choice::STAND );
    assert( h25.evaluateHand(five) == Choice::STAND );
    assert( h25.evaluateHand(six) == Choice::STAND );
    assert( h25.evaluateHand(seven) == Choice::HIT );
    assert( h25.evaluateHand(eight) == Choice::HIT );
    assert( h25.evaluateHand(nine) == Choice::HIT );
    assert( h25.evaluateHand(ten) == Choice::HIT );
    assert( h25.evaluateHand(jack) == Choice::HIT );
    assert( h25.evaluateHand(queen) == Choice::HIT );
    assert( h25.evaluateHand(king) == Choice::HIT );
    assert( h25.evaluateHand(ace) == Choice::HIT );
    
    Hand h26( six, seven ); //13
    assert( h26.evaluateHand(two) == Choice::STAND );
    assert( h26.evaluateHand(three) == Choice::STAND );
    assert( h26.evaluateHand(four) == Choice::STAND );
    assert( h26.evaluateHand(five) == Choice::STAND );
    assert( h26.evaluateHand(six) == Choice::STAND );
    assert( h26.evaluateHand(seven) == Choice::HIT );
    assert( h26.evaluateHand(eight) == Choice::HIT );
    assert( h26.evaluateHand(nine) == Choice::HIT );
    assert( h26.evaluateHand(ten) == Choice::HIT );
    assert( h26.evaluateHand(jack) == Choice::HIT );
    assert( h26.evaluateHand(queen) == Choice::HIT );
    assert( h26.evaluateHand(king) == Choice::HIT );
    assert( h26.evaluateHand(ace) == Choice::HIT );
    
    Hand h27( six, eight ); //14
    assert( h27.evaluateHand(two) == Choice::STAND );
    assert( h27.evaluateHand(three) == Choice::STAND );
    assert( h27.evaluateHand(four) == Choice::STAND );
    assert( h27.evaluateHand(five) == Choice::STAND );
    assert( h27.evaluateHand(six) == Choice::STAND );
    assert( h27.evaluateHand(seven) == Choice::HIT );
    assert( h27.evaluateHand(eight) == Choice::HIT );
    assert( h27.evaluateHand(nine) == Choice::HIT );
    assert( h27.evaluateHand(ten) == Choice::HIT );
    assert( h27.evaluateHand(jack) == Choice::HIT );
    assert( h27.evaluateHand(queen) == Choice::HIT );
    assert( h27.evaluateHand(king) == Choice::HIT );
    assert( h27.evaluateHand(ace) == Choice::HIT );
    
    Hand h28( seven, eight ); //15
    assert( h28.evaluateHand(two) == Choice::STAND );
    assert( h28.evaluateHand(three) == Choice::STAND );
    assert( h28.evaluateHand(four) == Choice::STAND );
    assert( h28.evaluateHand(five) == Choice::STAND );
    assert( h28.evaluateHand(six) == Choice::STAND );
    assert( h28.evaluateHand(seven) == Choice::HIT );
    assert( h28.evaluateHand(eight) == Choice::HIT );
    assert( h28.evaluateHand(nine) == Choice::HIT );
    assert( h28.evaluateHand(ten) == Choice::SURRENDERHIT );
    assert( h28.evaluateHand(jack) == Choice::SURRENDERHIT );
    assert( h28.evaluateHand(queen) == Choice::SURRENDERHIT );
    assert( h28.evaluateHand(king) == Choice::SURRENDERHIT );
    assert( h28.evaluateHand(ace) == Choice::HIT );
    
    Hand h29( seven, nine ); //16
    assert( h29.evaluateHand(two) == Choice::STAND );
    assert( h29.evaluateHand(three) == Choice::STAND );
    assert( h29.evaluateHand(four) == Choice::STAND );
    assert( h29.evaluateHand(five) == Choice::STAND );
    assert( h29.evaluateHand(six) == Choice::STAND );
    assert( h29.evaluateHand(seven) == Choice::HIT );
    assert( h29.evaluateHand(eight) == Choice::HIT );
    assert( h29.evaluateHand(nine) == Choice::SURRENDERHIT );
    assert( h29.evaluateHand(ten) == Choice::SURRENDERHIT );
    assert( h29.evaluateHand(jack) == Choice::SURRENDERHIT );
    assert( h29.evaluateHand(queen) == Choice::SURRENDERHIT );
    assert( h29.evaluateHand(king) == Choice::SURRENDERHIT );
    assert( h29.evaluateHand(ace) == Choice::SURRENDERHIT );
    
    Hand h30( eight, nine ); //17
    assert( h30.evaluateHand(two) == Choice::STAND );
    assert( h30.evaluateHand(three) == Choice::STAND );
    assert( h30.evaluateHand(four) == Choice::STAND );
    assert( h30.evaluateHand(five) == Choice::STAND );
    assert( h30.evaluateHand(six) == Choice::STAND );
    assert( h30.evaluateHand(seven) == Choice::STAND );
    assert( h30.evaluateHand(eight) == Choice::STAND );
    assert( h30.evaluateHand(nine) == Choice::STAND );
    assert( h30.evaluateHand(ten) == Choice::STAND );
    assert( h30.evaluateHand(jack) == Choice::STAND );
    assert( h30.evaluateHand(queen) == Choice::STAND );
    assert( h30.evaluateHand(king) == Choice::STAND );
    assert( h30.evaluateHand(ace) == Choice::STAND );
    
    Hand h31( ten, nine ); //19
    assert( h31.evaluateHand(two) == Choice::STAND );
    
    cout<<"SUCCESS";
    
    Hand h32(queen, five);
    Choice ch=h32.evaluateHand(queen);
    cout<<static_cast<underlying_type<Choice>::type>(ch)<<endl;
    
    return( 0 );
}
