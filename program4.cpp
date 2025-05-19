#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
  map<int, int> countMap;

  for (int i = 1; i <= 9; i++)
  {
    countMap[i] = 0;
  }

  for (int i = 1; i <= 9; i++)
  {
    for (int num : input)
    {
      if (num % i == 0)
      {
        countMap[i]++;
      }
    }
  }

  cout << "Output:\n{";
  for (int i = 1; i <= 9; i++)
  {
    cout << i << ": " << countMap[i];
    if (i != 9)
      cout << ", ";
  }
  cout << "}" << endl;

  return 0;
}
