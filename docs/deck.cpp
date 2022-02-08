#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"
#include "player.h"
#include "card.h"

using namespace std;

deck::deck()  //deck constructor
{
  size = 52;
  fill(pack);
}

void deck::fill(vector<card> d&) //fills deck with 52 unique cards
{
  string rk [] = {"ACE","2","3","4","5","6","7","8","9","10","J","K","Q"};
  string su [] = {"CLUBS","DIAMONDS","SPADES","HEARTS"};
  card temp;
  for(unisgned int i = 0; i < rk.size(); i++)
  {
    for(unisigned int j = 0; j < su.size(); j++ )
    {
      d.pushback(temp(rk[i],su[j]));
    }
  }
}

void deck::shuffle() //shuffles the deck
{
  srand(time(0)); //seeds random number
  for(int i = 0; i < size; i++)
  {
    int random_index = rand() % size;
    card temp;

    pack[i] = temp;
    pack[i] = pack[random_index];
    pack[random_index] = temp;
  }

}

card deck::draw() //returns the card at the top of the deck and resizes the deck;
{
  return pack[0];
  size--;
}

void card::setSize(int s) {size = s;} //mutator function for deck size

int card::getSize() {return size;} //accesor function for deck size

void card::showPack()//to help with writing the game in case we must check what the pack consists of
{
  for(int = 0; i < size; i++)
  {
    cout << "CARD" << i << " = " << pack[i].getRank << pack[i].getSuit << endl;
  }
}
};


// overloaded = operator
/* I realized that I needed an overloaded = for card but not deck
  gonna leave this here in case we need to finish it
deck& operator=(const deck& x){
  if (this != &x)
  {
    for(int i = (x.size() - 1); i >= 0; i--;){
      card a;
      a.suit = x[i].suit;
      a.num = x[i].num;

    }
  }
}
*/
