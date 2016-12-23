#include <iostream>
#include "string.h"

using namespace std;

int inputGrade = 0;
string outputGrade;

void setGrade()
{
    if(inputGrade < 60)
    {
        outputGrade = 'F';
    }
    else if (input Grade < 70)
    {
        outputGrade = 'D';
    }
    else if (input Grade < 80)
    {
        outputGrade = 'C';
    }
    else if (input Grade < 90)
    {
        outputGrade = 'B';
    }
    else if (input Grade < 100)
    {
        outputGrade = 'A';
    }
    else if (input Grade == 100)
    {
        outputGrade = 'Perfect Score';
    }
    else
    {
        outputGrade = 'Error: Cannot Recognize Your Input';
    }
}

int main()
{
  cin >> inputGrade;
  setGrade();
  cout << "Your Grade is:" << outputGrade;
}
