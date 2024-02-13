#include <iostream>

using namespace std;

int main()
{
  string veggie_on_stack = "carrot";
  int inches_of_water_per_week_on_stack = 1;

  string *veggie_on_heap = new string;
  *veggie_on_heap = "soybeans";

  int *inches_of_water_per_week_on_heap = new int;
  *inches_of_water_per_week_on_heap = 2;

  cout << "Printing the vegetable info" << endl;
  cout << veggie_on_stack << endl;
  cout << veggie_on_heap << endl;
  cout << *veggie_on_heap << endl;
  cout << endl;

  cout << "Printing the watering info" << endl;
  cout << inches_of_water_per_week_on_stack << endl;
  cout << inches_of_water_per_week_on_heap << endl;
  cout << *inches_of_water_per_week_on_heap << endl;
  cout << endl;

  delete veggie_on_heap;
  delete inches_of_water_per_week_on_heap;

  cout << "Printing the vegetable info" << endl;
  cout << veggie_on_stack << endl;
  cout << veggie_on_heap << endl;
  cout << *veggie_on_heap << endl;
  cout << endl;

  cout << "Printing the watering info" << endl;
  cout << inches_of_water_per_week_on_stack << endl;
  cout << inches_of_water_per_week_on_heap << endl;
  cout << *inches_of_water_per_week_on_heap << endl;
  cout << endl;

  return 0;
}
