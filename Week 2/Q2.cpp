/*Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].*/
#include<iostream>
using namespace std;
void search(int a[], int n)
{
  int i, j, k=0;
  while(k<n)
  {
    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
        if((a[k]==a[i]+a[j]) && i!=j)
        {
          cout<<i<<", "<<j<<", "<<k<<endl;
          return;
        }
      }
    }
    k++;
  }
  cout<<"No sequence found"<<endl;
  return;
}
main()
{
  int n, k, c=0, i;
  cout<<"Enter size: ";
  cin>>n;
  int a[n];
  for(i=0; i<n; i++)
    cin>>a[i];
  search(a, n);
}
