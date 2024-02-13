#include <iostream>

using namespace std;

int main()
{
  string veggie_on_stack = "carrot";
  int water_per_week_on_stack = 1;

  string *veggie_on_heap = new string;
  *veggie_on_heap = "soybeans";

  int *water_per_week_on_heap = new int;
  *water_per_week_on_heap = 2;

  cout << endl;
  cout << "Printing items on the stack" << endl;
  cout << "veggie_on_stack: " << veggie_on_stack << endl;
  cout << "&veggie_on_stack: " << &veggie_on_stack << endl;
  cout << "water_per_week_on_stack: " << water_per_week_on_stack << endl;
  cout << "&water_per_week_on_stack: " << &water_per_week_on_stack << endl;

  cout << endl;
  cout << "Printing items on the heap" << endl;
  cout << "veggie_on_heap: " << veggie_on_heap << endl;
  cout << "*veggie_on_heap: " << *veggie_on_heap << endl;
  cout << "water_per_week_on_heap: " << water_per_week_on_heap << endl;
  cout << "*water_per_week_on_heap: " << *water_per_week_on_heap << endl;

  delete veggie_on_heap;
  delete water_per_week_on_heap;

  return 0;
}
