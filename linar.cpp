#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 3;
  int index = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      index = i;
      break;
    }
  }
  if (index != -1)
  {
    cout << "Element found at index: " << index << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
}