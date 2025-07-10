#ifndef DECK_H
#define DECK_H

#include "card.h" 
// using a spanish deck so we remove the 8's 9's and 10's of every type hearts, clovers, spades, diamonds
#define DECK_SIZE 40 

// initial deck after cards are distributed becomes the draw pile
typedef struct Deck
{

    Card cards[DECK_SIZE]; // an array of 40 Card structs
    int top; // the top of the 40 card deck pile (index of the next card to draw)

} Deck; 

// need to intialize deck before shuffling  
void initDeck(Deck* deck);
// shuffle deck before dealing 
void shuffleDeck(Deck* deck);
// function to draw card from draw pile
Card drawCard(Deck* deck);
// check if cards available to draw from in the draw pile. 
int isDeckEmpty(Deck* deck);


// for testing purposes
void printDeck(const Deck* deck);










#endif
