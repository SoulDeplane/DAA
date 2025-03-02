/*Given an unsorted array of integers, design an algorithm and implement it using a program to find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n)) */
#include<iostream>
using namespace std;
void sort(int *a, int n, int m)
{
    int *c=(int*)calloc(m+1, sizeof(int)), in=0, i;
    for(i=0; i<n; i++)
        c[a[i]]++;
    for(i=0; i<=m; i++)
    {
        while(c[i]>0)
        {
            a[in++]=i;
            c[i]--;
        }
    }
}
int find(int *a, int n, int k, int c)
{
    if(k>n)
        cout<<"K is larger than size of array"<<endl;
    else
    {
        if(c==1)
          return a[k-1];
        else
          return a[n-k];
    }
    return -1;
}
main()
{
  int n, i, t, k, c, m;
	cout<<"Enter no. of test cases: ";
  cin>>t;
	while(t>0)
	{
	  	cout<<"Enter size: ";
	  	cin>>n;
	  	int a[n];
	  	for(i=0; i<n; i++)
	  	{
	    		cin>>a[i];
	    		if(a[i]>m)
	    			m=a[i];
	  	}
	    sort(a, n, m);
	    cout<<"Enter the value of k: ";
	    cin>>k;
	    cout<<"1-Smallest\n2-Largest\nEnter choice: ";
	    cin>>c;
	    if((c=find(a, n, k, c))!=-1)
	  	    cout<<"The element is: "<<c<<endl;
			t--;
	}
}
