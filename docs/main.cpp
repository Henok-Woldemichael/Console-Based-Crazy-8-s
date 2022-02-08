#include <vector>
#include <string>
#include "game.h"
#include "deck.h"
#include "card.h"
#include "player.h"

using namespace std;

int main(){
game a();
char replay;

do{
cout << "Welcome to Crazy 8s" << endl;
a.start();

cout << "Would you like to play again? Y or y for yes. Type anything else for no";
cin >> replay;
cout << endl;
}
while (replay == 'y' || replay == 'Y');

return 0;
}
