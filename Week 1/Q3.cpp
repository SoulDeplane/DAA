/*Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k]<key<arr[ 2k+1]) is found, perform a linear search operation from the index 2k to find the element key. (Complexity<O(n), where n is the number of elements need to be scanned for searching): Jump Search*/
#include<iostream>
#include<cmath>
using namespace std;
void jsearch(int a[], int n, int k)
{
  int i=0, m;
  for(m=0; m<sqrt(n)+1; m++)
  {
    for(; i<pow(2, m); i++)
    {
      if(a[i]==k)
      {
        cout<<"Present "<<endl;
        return;
      }
    }
  }
  cout<<"Not Present "<<endl;
  return;
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
  jsearch(a, n, k);
}
