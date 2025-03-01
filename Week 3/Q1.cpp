#include<iostream>
using namespace std;
void sort(int *arr, int n)
{
  	int i, j, k=0, s=0, t;
  	for(i=1; i<n; i++)
  	{
				t=arr[i];
    		j=i-1;
    		while(j>=0)
    		{
      			k++;
      			if(t<arr[j])
      			{
          			arr[j+1]=arr[j];
          			s++;
          			j--;
      			}
      			else
        				break;
    		}
    		arr[j+1]=t;
    		s++;
  	}
  	cout<<"Comparisions: "<<k<<endl;
  	cout<<"Swaps: "<<s<<endl;
}
main()
{
  	int n, i;
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
}
