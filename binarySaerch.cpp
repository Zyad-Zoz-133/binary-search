#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int size)
{
  int left = 0, right = size - 1;
  int mid;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}
int main()
{
  int size = 1000;
  int n[size];
  int found_in;
  int target;
  bool found = false;
  for (int i = 0; i < 1000; i++)
  {
    n[i] = i + 2000;
  }
  cout << "enter the number you want to search : ";
  cin >> target;
  int index = binarySearch(n, target, size);
  if (index != -1)
    cout << "the target was found in index " << index;
  else
    cout << "we didn't found the target in the array";
  return 0;
}