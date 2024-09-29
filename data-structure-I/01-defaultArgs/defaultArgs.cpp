#include <iostream>
using namespace std;

void displayMsg(const char msg[] = "Decide. Commit. Succeed", char symbol = ' ',
                int num = 10);
void displayMsg(const char msg[], char symbol, int num) {
  for (int i = 0; i < num; i++) {
    cout << symbol;
  }
  cout << msg;
  for (int i = 0; i < num; i++) {
    cout << symbol;
  }
  cout << endl;
};

int main() {
  displayMsg("I will decide.", '*', 15);
  displayMsg("I will commit.", '+');
  displayMsg("I will succeed.");
  displayMsg();
  cin.get();
  return 0;
}
