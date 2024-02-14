#include <iostream>
#include "helpers.hpp"

using namespace std;

string *resize_array(string *garden_array, int current_size)
{
  // Create a new dynamic array that is one larger than the old array
  string *new_array = new string[current_size + 1];

  // Copy the elements from the original array to the new array
  for (int i = 0; i < current_size; i++)
  {
    new_array[i] = garden_array[i];
  }

  // Delete the original array
  delete[] garden_array;

  return new_array;
}

int main()
{
  cout << endl;

  // Where we started (with a small difference)
  int size = 2;
  string *garden = new string[size];
  garden[0] = "Kale";
  garden[1] = "Arugula";

  // Where we have arrived
  bool in_progress = true;
  string plant_or_exit;

  while (in_progress)
  {
    cout << "Enter a plant or type 'exit'" << endl;
    cin >> plant_or_exit;
    if (plant_or_exit == "exit")
    {
      in_progress = false;
    }
    else
    {
      garden = resize_array(garden, size);
      garden[size] = plant_or_exit;
      size = size + 1;
      print_message(plant_or_exit);
    }
  }

  print_garden(garden, size);

  // Don't forget to free the memory
  delete[] garden;

  return 0;
}
