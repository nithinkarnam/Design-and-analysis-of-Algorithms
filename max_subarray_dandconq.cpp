#include <bits/stdc++.h>
using namespace std;
int cross_sum(int arr[], int l, int m, int h)
{
  int sum = 0;
  int left_sum = INT_MIN;
  for (int i = m; i >= l; i--) 
  {
    sum = sum + arr[i];
    if (sum > left_sum)
      left_sum = sum;
  }
  sum = 0;
  int right_sum = INT_MIN;
  for (int i = m + 1; i <= h; i++) 
  {
    sum = sum + arr[i];
    if (sum > right_sum)
      right_sum = sum;
  }
  return max(left_sum + right_sum, max(left_sum, right_sum));
}
int max_sum(int arr[], int l, int h)
{
  if(l==h)
  {
    return arr[l];
  }
  int m=(l+h)/2;
  return max(max_sum(arr, l, m), max(max_sum(arr, m + 1, h), cross_sum(arr, l, m, h)));
} 
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int sum = max_sum(a,0,n-1);
  cout<<sum<<endl;
  return 0;
}
