#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;
int main() {
  const int MAX_FINGERS = 5, MIN_FINGERS = 1, MAX_GUESS = 10, MIN_GUESS = 0;
  int playerOneFingers, playerOneGuess, playerTwoFinger, playerTwoGuess, sum;

  ofstream out("result.txt");

  short seed;
  seed = time(0);
  srand(seed);

  playerOneFingers = rand() % (MAX_FINGERS - MIN_FINGERS) + MIN_FINGERS;
  playerOneGuess = rand() % (MAX_GUESS - MIN_GUESS) + MIN_GUESS;
  playerTwoFinger = rand() % (MAX_FINGERS - MIN_FINGERS) + MIN_FINGERS;
  playerTwoGuess = rand() % (MAX_GUESS - MIN_GUESS) + MIN_GUESS;

  out << "Fingers\tTotal" << endl;

  out << playerOneFingers << "\t\t" << playerOneGuess << endl;

  out << playerTwoFinger << "\t\t" << playerTwoGuess << endl;

  sum = playerOneFingers + playerTwoFinger;

  out << "\nCorrect total is: " << sum << endl;

  if (sum == playerTwoGuess && sum == playerTwoGuess)
    out << "TIE" << endl;
  else if (sum == playerOneGuess)
    out << "PLAYER 1 WINS" << endl;
  else if (sum == playerTwoGuess)
    out << "PLAYER 2 WINS" << endl;
  else
    out << "NO ONE WINS" << endl;
  return 0;
}
