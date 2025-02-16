/*Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.*/
#include<iostream>
using namespace std;
int search(int a[], int n, int k)
{
  int i, j, c=0;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      if(a[i]-a[j]==k)
        c++;
    }
  }
  return c;
}
main()
{
  int n, k, i;
  cout<<"Enter size: ";
  cin>>n;
  int a[n];
  for(i=0; i<n; i++)
    cin>>a[i];
  cout<<"Enter key: ";
  cin>>k;
  cout<<search(a, n, k)<<endl;
}
