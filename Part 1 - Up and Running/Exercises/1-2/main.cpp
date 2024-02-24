#include <iostream>
using namespace std;

/*
1-2.
Try running your program with different values. Did you see the values you expect?
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