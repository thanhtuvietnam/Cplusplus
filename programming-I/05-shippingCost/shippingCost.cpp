#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  const float TAXRATE = 4.225 / 100, LESS_ONE_LB = 10, LESS_FIVE_LB = 7,
              LESS_EIGHT_LB = 5, LESS_TEN_LB = 3, LESS_TWENTY_LB = 2,
              ABOVE_TWENTY = 1;
  float price, tax, shipping, totalCost, weight;

  cout << "Calculate the total cost of an online purchase" << endl;

  cout << "\nEnter the item's price: ";

  cin >> price;

  cout << "Enter the item's weight: ";

  cin >> weight;

  if (weight < 1) {
    shipping = LESS_ONE_LB * weight;
  } else if (weight < 5) {
    shipping = LESS_FIVE_LB * weight;
  } else if (weight < 8) {
    shipping = LESS_EIGHT_LB * weight;
  } else if (weight < 10) {
    shipping = LESS_TEN_LB * weight;
  } else if (weight < 20) {
    shipping = LESS_TWENTY_LB * weight;
  } else {
    shipping = ABOVE_TWENTY * weight;
  }

  tax = price * TAXRATE;
  totalCost = price + tax + shipping;

  cout << "\nTotal price: " << fixed << setprecision(2) << totalCost << endl;
  return 0;
}
