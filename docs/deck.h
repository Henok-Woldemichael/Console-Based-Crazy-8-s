#ifndef PLAYERS_H
#define PLAYERS_H
#include <vector>
#include <string>
#include "game.h"
#include "player.h"
#include "card.h"

using namespace std;

class deck
{
private:
  vector<card> pack; // current library of the deck or hand.
  int size;


public:

deck(); //deck constructor
void fill(vector<card>&); //fills deck with 52 unique cards
void shuffle(); //shuffles the deck
card draw(); //returns the card at the top of the deck and resizes the deck;
void setSize(int s); // mutator function for deck size
int getSize(); // accesor function for deck size
void showPack();//to help with writing the game in case we must check what the pack consists of


};
