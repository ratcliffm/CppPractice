#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

double balance = 0.0;

// Function Declarations
void mainMenu();
void deposit();
void withdraw();
void getBalance();

int main() {
  // Check PIN
  string PIN = "1234";
  string userPIN;
  cout << "Please enter your PIN: " << endl;
  getline(cin, userPIN);
  if (userPIN == PIN) {
    mainMenu();
  } else if (userPIN != PIN) {
    cerr << "Incorrect PIN." << endl;
    return 1;
  }
  // call mainMenu
}

void mainMenu() {
  string functCommand = "0";
  // Loop
  while (functCommand != "Exit") {
    // Print menu here
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Balance" << endl;
    cout << "4. Exit" << endl;

    cout << "Please enter desired function" << endl;
    getline(cin, functCommand);

    if (functCommand == "Deposit") {
      deposit();
    } else if (functCommand == "Withdraw") {
      withdraw();
    } else if (functCommand == "Balance") {
      getBalance();
    } else {
      cerr << "Not a valid function" << endl;
      break;
    }
  }
  // call withdraw, deposit, or getBalance
}

void getBalance() {
  // Print balance
  balance = balance;
  cout << fixed << setprecision(2) << "Your balance is $" << balance << endl;
  ;
  // cout << "Your balance is $" << balance << endl;
}

void deposit() {
  // Get amount to deposit
  double deposit;
  string input;
  double min = 0.0;
  cout << "How much would you like to deposit? " << endl;
  getline(cin, input);
  // cout << deposit << endl;
  deposit = atof(input.c_str());
  cout << fixed << setprecision(2) << deposit << endl;
  // Increment balance
  if (deposit > min) {
    balance += deposit;
  }
  // Print balance
  cout << "Your new balance is $" << balance << endl;

}

void withdraw() {
  string input;
  double withdrawAmt;
  // Get amount to withdraw
  cout << "How much would you like to withdraw?" << endl;
  getline(cin, input);
  // Check available funds
  withdrawAmt = atof(input.c_str());

  if (withdrawAmt > 0.0 && withdrawAmt < balance) {
    balance -= withdrawAmt;
  }
  // Decrement balance
  // Print balance
  cout << "Your new balance is $" << balance << endl;

}
