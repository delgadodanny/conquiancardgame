#include <stdio.h>
#include <stdlib.h>     // Required for srand()
#include <time.h>       // Required for time()
#include "deck.h"


int main (void)
{
    int randomDeckIndex = 0;
    Deck deck;
    initDeck(&deck); //Fill the deck 
    shuffleDeck(&deck);
    printDeck(&deck); //Print to verify 

    


    return 0;

}