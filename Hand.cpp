//
//  Hand.cpp
//  Blackjack 
//
//  Created by Howard Stahl on 6/6/23.
//

#include "Hand.h"

namespace cs32
{


Hand::Hand( Card card1, Card card2 ) : mCard1( card1 ), mCard2( card2 )
{
    
}

Card Hand::getCard1() const
{
    return( mCard1 );
}

Card Hand::getCard2() const
{
    return( mCard2 );
}

//The evaluateHand operation should implement the strategy table shown above based on the Hand's two Cards and the supplied dealerCard.
Choice Hand::evaluateHand( Card dealerCard ) const
{
    // by default STAND
    Choice c = Choice::STAND;
    if(isPair()){
        if(mCard1.getFace()==Face::ACE)
            c=Choice::SPLIT;
        else if(mCard1.getValue()==10)
            c=Choice::STAND;
        else if(mCard1.getValue()==9){
            c=Choice::SPLIT;
            if(dealerCard.getValue()==7||dealerCard.getValue()==10||dealerCard.getValue()==1)
                c=Choice::STAND;
        }
        else if(mCard1.getValue()==8)
            c=Choice::SPLIT;
        else if(mCard1.getValue()==7){
            if(dealerCard.getValue()>=2&&dealerCard.getValue()<=7)
                c=Choice::SPLIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==6){
            if(dealerCard.getValue()==2)
                c=Choice::SPLITHIT;
            else if(dealerCard.getValue()>=3&&dealerCard.getValue()<=6)
                c=Choice::SPLIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==5){
            if(dealerCard.getValue()>=2&&dealerCard.getValue()<=9)
                c=Choice::DOUBLEHIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==4){
            if(dealerCard.getValue()==5||dealerCard.getValue()==6)
                c=Choice::SPLITHIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==3||mCard1.getValue()==2){
            if(dealerCard.getValue()==2||dealerCard.getValue()==3)
                c=Choice::SPLITHIT;
            else if(dealerCard.getValue()>=4&&dealerCard.getValue()<=7)
                c=Choice::SPLIT;
            else
                c=Choice::HIT;
        }
    }
    else if(isSoft()){
        if(mCard1.getValue()>=8||mCard2.getValue()>=8)
            c=Choice::STAND;
        else if(mCard1.getValue()==7||mCard2.getValue()==7){
            if(dealerCard.getValue()>=3&&dealerCard.getValue()<=6)
                c=Choice::DOUBLESTAND;
            else if(dealerCard.getValue()>=2&&dealerCard.getValue()<=8)
                c=Choice::STAND;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==6||mCard2.getValue()==6){
            if(dealerCard.getValue()>=3&&dealerCard.getValue()<=6)
                c=Choice::DOUBLEHIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==5||mCard2.getValue()==5||mCard1.getValue()==4||mCard2.getValue()==4){
            if(dealerCard.getValue()>=4&&dealerCard.getValue()<=6)
                c=Choice::DOUBLEHIT;
            else
                c=Choice::HIT;
        }
        else if(mCard1.getValue()==3||mCard2.getValue()==3||mCard1.getValue()==2||mCard2.getValue()==2){
            if(dealerCard.getValue()>=5&&dealerCard.getValue()<=6)
                c=Choice::DOUBLEHIT;
            else
                c=Choice::HIT;
        }
    }
    else if(mCard1.getValue()+mCard2.getValue()>=17)
        c=Choice::STAND;
    else if(mCard1.getValue()+mCard2.getValue()==16){
        if(dealerCard.getValue()>=2&&dealerCard.getValue()<=6)
            c=Choice::STAND;
        else if(dealerCard.getValue()>=7&&dealerCard.getValue()<=8)
            c=Choice::HIT;
        else
            c=Choice::SURRENDERHIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()==15){
        if(dealerCard.getValue()>=2&&dealerCard.getValue()<=6)
            c=Choice::STAND;
        else if(dealerCard.getValue()==10)
            c=Choice::SURRENDERHIT;
        else
            c=Choice::HIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()==14||mCard1.getValue()+mCard2.getValue()==13){
        if(dealerCard.getValue()>=2&&dealerCard.getValue()<=6)
            c=Choice::STAND;
        else
            c=Choice::HIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()==12){
        if(dealerCard.getValue()>=4&&dealerCard.getValue()<=6)
            c=Choice::STAND;
        else
            c=Choice::HIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()==11)
        c=Choice::DOUBLEHIT;
    else if(mCard1.getValue()+mCard2.getValue()==10){
        if(dealerCard.getValue()>=2&&dealerCard.getValue()<=9)
            c=Choice::DOUBLEHIT;
        else
            c=Choice::HIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()==9){
        if(dealerCard.getValue()>=3&&dealerCard.getValue()<=6)
            c=Choice::DOUBLEHIT;
        else
            c=Choice::HIT;
    }
    else if(mCard1.getValue()+mCard2.getValue()<=8)
        c=Choice::HIT;
    return( c );
}

//The isPair operation should return true when both of the Hand's cards are matching values, say, two Aces or two Threes or two Jacks.
bool Hand::isPair() const
{
    if(mCard1.getFace()==mCard2.getFace())
        return true;
    return( false );
}

//The isSoft operation should return true when one or both of the Hand's cards are Aces.
bool Hand::isSoft() const
{
    if(mCard1.getFace()==Face::ACE||mCard2.getFace()==Face::ACE)
        return true;
    return( false );
}


}
