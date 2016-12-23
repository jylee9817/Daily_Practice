/*

Write a program that presents the user w/ a choice of your 5 favorite beverages
(Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

*/
#include <iostream>
#include "string.h"

using namespace std;

const string beverages[] = {"Coke", "Water", "Sprite", "Fanta", "Memes"};
int input = 0;

void chooseBeverage(int number)
{
  number--;
  if(0 < number && 6 > number)
  {
    cout << "You chose " << beverages[number] << endl;
  }
  else
  {
    cout << "Error: Cannot Place Your Order!";
  }
}

int main()
{
  cout << "Please Choose a Number between 1 and 5 to Select Your Drink" << endl;
  cin >> input;
  chooseBeverage(input);
  return 0;
}
