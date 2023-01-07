#include <iostream>
#include <vector>
#include<ctime>
using namespace std;
int main()
{
     int n,a,ele,min,max,temp,i,j,key;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    clock_t tStart = clock();    
  for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    double time1=(double)(clock() - tStart)/CLOCKS_PER_SEC;
	cout<<"Time taken is "<<time1<<endl;
     /*for(i=0;i<arr.size();i++)
   {
       cout<<" "<<arr[i];
   }*/
return 0;
}
