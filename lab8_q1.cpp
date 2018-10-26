#include <iostream>
using namespace std;
int fun(int arr[] , int arrsize)
{
 int sum = 0;
 for (int i = 0; i < arrsize; i++)
 {
  sum = sum + arr[i];
 }
 return sum;
}
 
 int main()
 {
 int arr[5] = {2,4,6,8,1};
 int x = 0;
 
 x = fun(arr, 5);
 cout << x;
return 0;
}
