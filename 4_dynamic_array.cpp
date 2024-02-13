#include <iostream>

using namespace std;

void print_message(string veg)
{
  cout << veg << " was added!" << endl;
}

string *resizeArray(string *array1d, int currentSize)
{
  // Create a new dynamic array that is one larger than the old array
  string *newArray = new string[currentSize + 1];

  // Copy the elements from the original array to the new array
  for (int i = 0; i < currentSize; i++)
  {
    newArray[i] = array1d[i];
  }

  // Delete the original array
  delete[] array1d;

  return newArray;
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
      garden = resizeArray(garden, size);
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
