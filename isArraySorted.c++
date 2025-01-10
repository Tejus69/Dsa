// Check if the array is in ascending order
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int index)
{

    if (index >= size)
    {
        return true;
    }

    if (arr[index] > arr[index - 1])
    {
        return isSorted(arr, size, index + 1);
    }

    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size, 1) == 1)
    {

        cout << "Array is sorted" << endl;
    }
    else
        cout << "Array is not Sorted " << endl;
    return 0;
}