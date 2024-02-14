#include <iostream>
#include "helpers.hpp"

using namespace std;

void add_veg(int indx, string *garden, string veg)
{
  garden[indx] = veg;
  print_message(veg);
}

int main()
{
  cout << endl;
  string garden[2];

  add_veg(0, garden, "Kale");
  add_veg(1, garden, "Arugula");

  print_garden(garden, 2);

  return 0;
}
