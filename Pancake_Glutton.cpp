/*

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
...
Person 5: ate 0 pancakes

use for loop with array. for the sorting part, use one of the sorting algorithm

*/

#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}
