/*Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).*/
#include<iostream>
using namespace std;
void bsearch(int a[], int l, int h, int k, int *c)
{
  int m=(l+h)/2;
  if(l>h)
  {
    cout<<"Element not found"<<endl;
    return;
  }
  if(a[m]<k)
  {
    (*c)++;
    bsearch(a, m+1, h, k, c);
  }
  else if(a[m]>k)
  {
    (*c)++;
    bsearch(a, l, m-1, k, c);
  }
  else
  {
    (*c)++;
    cout<<"Element found"<<endl;
    return;
  }
}
main()
{
  int n, k, c=0, i;
  cout<<"Enter size: ";
  cin>>n;
  int a[n];
  cout<<"Enter elements: ";
  for(i=0; i<n; i++)
    cin>>a[i];
  cout<<"Enter key: ";
  cin>>k;
  bsearch(a, 0, n, k, &c);
  cout<<"No of comparsions: "<<c<<endl;
}
