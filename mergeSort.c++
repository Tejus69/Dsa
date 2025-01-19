#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
  int mid = (s + e) / 2;
  int lenLeft = mid - s + 1;
  int lenRight = e - mid;

  // defining array into Heap Meomory
  int *left = new int[lenLeft];
  int *right = new int[lenRight];

  // copying values of original array to left array
  int k = s;
  for (int i = 0; i < lenLeft; i++)
  {
    left[i] = arr[k];
    k++;
  }

  // copying values of original array to right  array
  k = mid + 1;
  for (int i = 0; i < lenLeft; i++)
  {
    right[i] = arr[k];
    k++;
  }

  // actual logic for merge
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrayIndex = s;
  while (leftIndex < lenLeft && rightIndex < lenRight)
  {
    if (left[leftIndex] > right[rightIndex])
    {
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
    else
    {
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }
  }

  // still 2 cases are reamains
  // case1 : left array exhuasted but right array elements are still there so in this copy the remaining elements as it is.

  while (rightIndex < lenRight)
  {
    arr[mainArrayIndex] = right[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  }
  // case2 : right array exhuasted but left array elements are still there

  while (leftIndex < lenLeft)
  {
    arr[mainArrayIndex] = left[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }

  // deallocating the Heap Meomory
  delete[] left;
  delete[] right;
}

void mergeSort(int arr[], int s, int e)
{

  int mid = (s + e) / 2;
  if (s > e)
  {
    return;
  }
  if (s == e)
  {
    return;
  }

  // leftPArt
  mergeSort(arr, s, mid);

  // rightPart
  mergeSort(arr, mid + 1, e);

  // merging both parts
  merge(arr, s, e);
}
int main()
{
  int arr[] = {2, 4, 6, 3, 7, 5};

  int size = 6;
  int s = 0;
  int e = size - 1;

  // printing unsorted array
  cout << "Printing Before Sorting:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl ;
  mergeSort(arr, s, e);
  // printing sorted array
  cout << "Printing After Sorting:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ",";
  }
  return 0;
}