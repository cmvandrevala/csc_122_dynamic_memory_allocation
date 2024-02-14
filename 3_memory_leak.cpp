#include <iostream>

using namespace std;

int main()
{
  cout << endl;

  int *water_per_week_on_heap = new int;
  water_per_week_on_heap = new int;
  water_per_week_on_heap = new int;
  water_per_week_on_heap = new int;
  water_per_week_on_heap = new int;
  water_per_week_on_heap = new int;

  cout << "Everything is working perfectly... right?" << endl;

  return 0;
}
