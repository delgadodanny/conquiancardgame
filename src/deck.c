#include "deck.h"

// this function intializes the deck with the traditional spanish deck which is 40 cards we omit the 8's 9's and 10's 

void initDeck(Deck* deck) 
{
    // reset the top of the deck to zero 
    int cardIndex = 0;

    // Since we have a predefined amount of cards 7 ranks and 3 suits we can go ahead and list those in an array we can always reference
   // define all valid ranks used in the Spanish deck
    //array of ranks    
    Rank validRanks[10] = {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, JACK, QUEEN, KING };


    // used to calculate the amount of elements taken by the array validRanks

    int numValidRanks = sizeof(validRanks) / sizeof(validRanks[0]);

    // loop through all suits 
    for (int suit = HEARTS; suit < NUM_SUITS; suit++)
    {
      // loop through each valid rank 
      for (int rankIndex = 0; rankIndex < numValidRanks; rankIndex++)
      {
        deck->cards[cardIndex].suits = (Suits)suit;
        deck->cards[cardIndex].rank = validRanks[rankIndex];
        cardIndex++;

      }
            
        }

        // reset the draw position
        deck->top = 0; 
    }





    // testing function to ensure the playable deck is printed correctly
    void printDeck(const Deck* deck)
    {

        // string arrays to print both suit names and rank names
        // declare all suit names 
        const char* suitNames[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

        // declare all ranknames for all suits should be 40 cards in deck total
        const char* rankNames[] = {"Invalid",
                                    "ACE", "TWO", "THREE", "FOUR","FIVE","SIX","SEVEN",
                                    "Invalid","Invalid","Invalid",
                                    "JACK","QUEEN","KING", 
                                  };


        // loop playDeck which is our index begin with card 0 (Hearts ACE) to (Spades KING)
        for(int playDeck = 0; playDeck < DECK_SIZE; playDeck++) 
        {
            Suits suits = deck->cards[playDeck].suits;
            Rank rank = deck->cards[playDeck].rank;

        
        printf("Card %2d: %-5s of %-8s\n", playDeck, rankNames[rank] , suitNames[suits]);
        }
    }