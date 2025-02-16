/*Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)*/
#include<iostream> 
using namespace std;
int lsearch(int a[], int n, int k)
{
    int i, c=0;
    for(i=0; i<n; i++)
    {
        c++;
        if(a[i]==k)
        {
            cout<<"Present ";
            return c;
        }
    }
    cout<<"Not Present ";
    return c;
}
main()
{
  int n, k, i;
  cout<<"Enter size: ";
  cin>>n;
  int a[n];
  cout<<"Enter elements: "
  for(i=0; i<n; i++)
    cin>>a[i];
  cout<<"Enter key: ";
  cin>>k;
  cout<<lsearch(a, n, k)<<endl;
}
