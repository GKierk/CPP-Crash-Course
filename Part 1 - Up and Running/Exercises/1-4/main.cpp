#include <iostream>
using namespace std;

/*
1-4.
Write another function called sum that takes two int arguments and returns their sum. How can you modify the template in Listing 1-9 to test your new function?
*/

int sum(int numbers[], int size)
{
  int sum{};

  for (int i = 0; i < size; i++)
  {
    sum += numbers[i];
  }

  return sum;
}

int main()
{
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  cout << "The sum of the numbers is " << sum(numbers, size) << endl;

  return 0;
}