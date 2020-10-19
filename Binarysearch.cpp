#include <iostream>
using namespace std;

int binarySearch(int arr[], int val, int low, int high) {
  if (high >= low)
    {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (arr[mid] == val)
      return mid;

    // Search the left half
    if (arr[mid] > val)
      return binarySearch(arr ,val, low, mid - 1);

    // Search the right half
    return binarySearch(arr, val, mid + 1, high);
  }

  return -1;
}

int main()
{
    int i,n,val,result;
    cout<<" Enter number of elements in array : ";
    cin>>n;
    int arr[n];
     cout<<" Enter elements of array : ";
    for(i=0;i<n;++i)
        cin >> arr[i];
    cout<<"\n Enter value to be searched : ";
    cin>>val;
    result = binarySearch(arr, val, 0, n - 1);
    if (result == -1)
        cout<<"Not found";
    else
        cout<<" Element is found at index "<<result;
    return 0;
}
