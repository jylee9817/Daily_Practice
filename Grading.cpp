#include <iostream>
#include "string.h"

using namespace std;

int inputGrade = 0;
bool perfectGrade = false;
bool error = false;
string letterGrade = "Z";

void setGrade()
{
    if(inputGrade < 60)
        letterGrade = "F";

    else if(inputGrade < 70)
        letterGrade = "D";

    else if(inputGrade < 80)
        letterGrade = "C";

    else if(inputGrade < 90)
        letterGrade = "B";

    else if(inputGrade < 100)
        letterGrade = "A";

    else if(inputGrade == 100)
        perfectGrade = true;

    else
        error = true;
}

void isPerfectGrade()
{
    if(perfectGrade)
        cout << "You got a perfect score!" << endl;
    else
        cout << "Your Grade is: " << letterGrade << endl;
}

void errorTester()
{
    if(error)
        cout << "ERROR: Cannot interpret the input" << endl;
    else
        isPerfectGrade();
}

int main()
{
  cout << "Input Your Grade!" << endl;

  cin >> inputGrade;
  setGrade();
  errorTester();

  return 0;
}
