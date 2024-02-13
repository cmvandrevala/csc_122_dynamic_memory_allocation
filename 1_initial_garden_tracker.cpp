#include <iostream>

using namespace std;

void print_message(string veg)
{
  cout << veg << " was added!" << endl;
}

void add_veg(int indx, string *garden, string veg)
{
  garden[indx] = veg;
  print_message(veg);
}

void print_garden(string *garden, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << garden[i] << endl;
  }
  cout << endl;
}

int main()
{
  cout << endl;
  string garden[2];

  add_veg(0, garden, "Kale");
  add_veg(1, garden, "Arugula");

  cout << endl
       << "Printing everything in the garden now!" << endl;

  print_garden(garden, 2);

  return 0;
}
