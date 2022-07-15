#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int secretNum;
  int guess = 0;
  int tries = 0;

  secretNum = (rand() % 100) + 1;

  while (guess != secretNum) {
    cout << "Please enter an intiger between 1-100 to guess our secret number."
         << endl;
    cin >> guess;

    if (guess > secretNum) {
      cout << "Your guess was too high." << endl;
    } else if (guess < secretNum) {
      cout << "Your guess was too low." << endl;
    }
    tries++;
  }

  cout << "Yay! You guessed the secret number correctly." << endl;
  cout << "You guessed correctly after " << tries << " tries." << endl;

  return 0;
}
