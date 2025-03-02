/*Given an unsorted array of integers, design an algorithm and  implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required.*/
#include<iostream>
using namespace std;
void sort(int *arr, int n)
{
    int i, j, k=0, s=0, m;
    for(i=0; i<n-1; i++)
    {
         m=i;
        for(j=i+1; j<n; j++)
        {
            k++;
            if(arr[m]>arr[j])
            m=j;
        }
        swap(arr[m], arr[i]);
        s++;
  	}
  	cout<<"Comparisions: "<<k<<endl;
  	cout<<"Swaps: "<<s<<endl;
}
main()
{
  	int n, i, t;
  	cout<<"Enter no. of test cases: ";
  	cin>>t;
  	while(t>0)
  	{
      	cout<<"Enter size: ";
      	cin>>n;
      	int a[n];
      	for(i=0; i<n; i++)
      	  	cin>>a[i];
      	cout<<"Unsorted array: ";
      	for(i=0; i<n; i++)
      	  	cout<<a[i]<<" ";
    		cout<<endl;
      	sort(a, n);
      	cout<<"Sorted array: ";
      	for(i=0; i<n; i++)
      	  	cout<<a[i]<<" ";
      	cout<<endl;
  	  	t--;
  	}
}
