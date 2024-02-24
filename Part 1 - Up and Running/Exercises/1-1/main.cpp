#include <iostream>
using namespace std;

/*
1-1.
Create a function called absolute_value that returns the absolute value of its single argument. The absolute value of an integer x is the following: x (itself) if x is greater than or equal to 0; otherwise, it is x times −1.
*/

int absolute_value(int x)
{
  if (x < 0)
    return -x;
  else
    return x;
}

int main()
{
  int my_number = -10;

  cout << "The absolute value of " << my_number << " is " << absolute_value(my_number) << endl;

  return 0;
}