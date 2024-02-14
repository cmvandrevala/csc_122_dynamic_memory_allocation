#include <iostream>
#include "helpers.hpp"

void print_garden(string *garden, int size)
{
  cout << endl;
  cout << "Printing everything in the garden now!" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << garden[i] << endl;
  }
  cout << endl;
}

void print_message(string veg)
{
  cout << veg << " was added!" << endl;
}
