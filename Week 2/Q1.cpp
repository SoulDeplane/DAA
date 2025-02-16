/*Given a sorted array of positive integers containing few duplicate elements, design an  and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))*/
#include<iostream>
using namespace std;
void search(int a[], int l, int h, int k)
{
  int m=(l+h)/2, i, c=0;
  if(l>h)
  {
    cout<<"Key not present"<<endl;
    return;
  }
  if(a[m]<k)
    search(a, m+1, h, k);
  else if(a[m]>k)
    search(a, l, m-1, k);
  else
  {
    cout<<k<<" - ";
    i=m;
  while(a[i--]==k)
    c++;
  i=m+1;
  while(a[i++]==k)
    c++;
  cout<<c<<endl;
  }
}
main()
{
  int n, k, c=0, i;
  cout<<"Enter size: ";
  cin>>n;
  int a[n];
  for(i=0; i<n; i++)
    cin>>a[i];
  cout<<"Enter key: ";
  cin>>k;
  search(a, 0, n, k);
}
