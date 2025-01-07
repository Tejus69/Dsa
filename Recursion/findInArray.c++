// find ele in array and if it is their then return index

#include <iostream>

using namespace std;

int find(int arr[], int target, int size, int i)
{
    if (i >= size)
    {
        return 0;
    }
    // processing
    if (arr[i] == target)
    {
        return i;
    }

    return find(arr, target, size, i + 1);
}
int main()
{
    int arr[5] = {11, 12, 45, 14, 15};

    int size = 5;
    int target = 14;

    cout << "target is present at index :"<<find(arr, target, size, 0);

    return 0;
}