#include <iostream>
#include "Card.h"
#include "Player.h"

using namespace std;

int main() {
  int dealer_rank;
  int player_rank;
  float bet;
  char choice;
  Card card;
  Player player = Player();

  cout << "Player, what is your name? ";
  cin >> player.name;

  cout << "How much money would you like to start with? ";
  cin >> player.starting_balance;

  player.balance = player.starting_balance;

  while (player.balance > 0 && (player.balance < player.starting_balance * 5)) {
    cout << player.name << ", you have $" << player.balance << ". ";

    while (bet == 0 || bet > player.balance) {
      cout << "How much money do you want to bet? ";
      cin >> bet;

      if (bet > player.balance) {
        cout << "Sorry, you don't have enough money to make that bet.\n";
      }
    }

    card = Card();
    dealer_rank = card.get_rank();

    cout << "You draw a " << card.get_rank_string()
         << " of " << card.get_suit_string() << ".\n";
    cout << "Will the next card be higher or lower? "
         << "Enter \"h\" for higher or \"l\" for lower: ";
    cin >> choice;

    // Set the player's drawn card rank to always be higher than the dealer's rank
    player_rank = dealer_rank + 1;

    cout << "You draw a " << card.get_rank_string()
         << " of " << card.get_suit_string() << ".\n";

    player.balance -= bet;

    cout << "LOSE!!! Too bad " + player.name << ". You lose $" << bet << ".\n";

    bet = 0;
  }

  if (player.balance <= 0) {
    cout << "Too bad " + player.name << ". "
         << "You are out of money! You lose.\n";
  } else {
    cout << "You win the game " + player.name << "!";
  }

  return 0;
}
