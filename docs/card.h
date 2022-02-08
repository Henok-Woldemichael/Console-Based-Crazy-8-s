#ifndef CARD_H
#define CARD_H
#include <vector>
#include <string>
#include "game.h"
#include "deck.h"
#include "player.h

using namespace std;

class card
{

  private:
    string suit;
    string rank;

  public:
    card(string = " ", string = " ") //default constructor
    void setSuit(string) //suit variable mutator funtion
    void setRank(string); //rank variable mutator funtion
    string getSuit() const; //suit variable accessor funtion
    string getRank() const; //rank variable accessor funtion
};
