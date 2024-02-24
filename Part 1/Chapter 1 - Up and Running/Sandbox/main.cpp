#include <cstdio>
#include <iostream>
#include "step.h"
using namespace std;

int HelloWorld()
{
  cout << "Hello, World!" << endl;
  return 0;
}

int main()
{
  HelloWorld();

  int the_answer = 42;
  int lucky_number = the_answer / 6;
  cout << "The lucky number is " << lucky_number << endl;

  int x = lucky_number;

  if (x > 0)
  {
    cout << "Positive." << endl;
  }
  else if (x < 0)
  {
    cout << "Negative." << endl;
  }
  else
  {
    cout << "Zero." << endl;
  }

  int result = step::step_function(lucky_number);
  cout << "The result is " << result << endl;

  return 0;
}
