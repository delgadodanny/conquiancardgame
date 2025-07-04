#ifndef CARD_H
#define CARD_H
 
// define suits 
 typedef enum suits 
{
    HEARTS, 
    DIAMONDS,
    CLUBS,
    SPADES, 
    NUM_SUITS // Optional: needed if need to loop through suits
} Suits; 
// define ranks of the cards skipping 8, 9 , 10 of every suit
typedef enum rank 
{
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
    JACK = 11, QUEEN, KING

} Rank;

// define a card struct
typedef struct Card 
{
    Suits suits;
    Rank rank; 

} Card;
 
 
 

#endif