#include <iostream>
using namespace std;
/*
  AUTHOR      :    DZIKRA FATHIN
  APP_NAME    :    LEARNING01
  LAST_EDITED :    17-09-2018
*/
double salePrice, taxRate, salesTax, cost;

int main() {
  cout << "Enter the sale price : ";
  cin >> salePrice;
  cout << "Enter the sale tax rate : ";
  cin >> taxRate;
  salesTax = salePrice * taxRate;

  cost = salePrice + salesTax;
  cout << "Cost : $" << cost << endl;
}
