#include <iostream>
using namespace std;

/*
1-3.
Run your program with a debugger, stepping through each instruction.
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
  int my_number[] = {-10, 5, 7, -3, 0};

  for (int i = 0; i < 5; i++)
  {
    cout << "The absolute value of " << my_number[i] << " is " << absolute_value(my_number[i]) << endl;
  }

  return 0;
}