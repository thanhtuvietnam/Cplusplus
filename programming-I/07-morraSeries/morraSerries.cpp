#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const int MAX_FINGERS = 5, MIN_FINGERS = 1, MAX_GUESS = 10, MIN_GUESS = 0;
  int playerOneFingers, playerTwoFingers, playerOneGuess, playerTwoGuess, sum,
      playerOneWins = 0, playerTwoWins = 0;
  ofstream out("morraSeriesResults.txt");

  short seed;
  seed = time(0);
  srand(seed);

  for (int game = 1; game <= 10; game++) {
    playerOneFingers = rand() % (MAX_FINGERS - MIN_FINGERS) + MIN_FINGERS;
    playerOneGuess = rand() % (MAX_GUESS - MIN_GUESS) + MIN_GUESS;
    playerTwoFingers = rand() % (MAX_FINGERS - MIN_FINGERS) + MIN_FINGERS;
    playerTwoGuess = rand() % (MAX_GUESS - MIN_GUESS) + MIN_GUESS;

    cout << left << "Game " << game << ":" << setw(12) << endl;
    cout << "Player" << setw(12) << "|Fingers" << setw(12) << "|Total" << endl;
    cout << "============|===========|============" << endl;
    cout << setw(12) << "1" << "|" << setw(11) << playerOneFingers << "|"
         << playerOneGuess << endl;
    cout << setw(12) << "2" << "|" << setw(11) << playerTwoFingers << "|"
         << playerTwoGuess << endl;

    sum = playerOneFingers + playerTwoFingers;
    cout << "\nCorrect total is " << sum << endl;

    if (sum == playerOneGuess && sum == playerTwoGuess) {
      cout << "TIE" << endl;
    } else if (sum == playerOneGuess) {
      cout << "Player 1 Wins" << endl;
      playerOneWins++;
    } else if (sum == playerTwoGuess) {
      cout << "Player 2 Wins" << endl;
      playerTwoWins++;
    } else {
      cout << "NO ONE WINS" << endl;
    }

    cout << "\n-------------------------------------" << endl;
  }

  cout << "=====================================" << endl;
  out << "=====================================" << endl;
  cout << "Summary of the series" << endl;
  out << "Summary of the series" << endl;
  cout << "=====================================" << endl;
  out << "=====================================" << endl;
  cout << "Player 1 won " << playerOneWins << " games" << endl;
  out << "Player 1 won " << playerOneWins << " games" << endl;
  cout << "Player 2 won " << playerTwoWins << " games" << endl;
  out << "Player 2 won " << playerTwoWins << " games" << endl;

  cout << "\nWinner of the series: ";
  out << "\nWinner of the series: ";
  if (playerOneWins > playerTwoWins) {
    cout << "Player 1" << endl;
    out << "Player 1" << endl;
  } else if (playerOneWins < playerTwoWins) {
    cout << "Player 2" << endl;
    out << "Player 2" << endl;
  } else if (playerOneWins == playerTwoWins) {
    cout << "It is a TIE" << endl;
    out << "It is a TIE" << endl;
  } else {
    cout << "NO ONE WINS" << endl;
    out << "NO ONE WINS" << endl;
  }
  return 0;
};
