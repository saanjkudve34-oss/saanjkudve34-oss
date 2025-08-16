#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int n)
{
  int totalSum = n * (n+1) / 2;
   int arrSum = 0;
   for (int num : arr)
{
    arrSum +=num;
}
    return totalSum;
}
   int main()
{
   vector<int> arr = {1 2 4 5};
    int n = arr.size() + 1;

    count << "Missing Number:" << findMissingNumber(arr,n) << endl;
    return 0;
}
