/*Given an unsorted array of integers, design an algorithm and implement it using a program to find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n^2)) */
#include<iostream>
using namespace std;
void sort(int *a, int n)
{
    int i, j, s;
    for(i=0; i<n; i++)
    {
        s=0;
        for(j=0; j<n-i-1;j++)
        {
            if(a[i]>a[j+1])
            {
                swap(a[i], a[j+1]);
                s++;
                
            }
        }
        if(s==0)
            return;
    }
}
int find(int *a, int n, int k, int c)
{
    if(k>n)
        cout<<"K is larger than size of array"<<endl;
    else
    {
        sort(a, n);
        if(c==0)
            return a[k];
        else
            return a[n-k];
    }
    return -1;
}
main()
{
    int n, i, t, k, c;
	  cout<<"Enter no. of test cases: ";
	  cin>>t;
	  while(t>0)
	  {
	  			cout<<"Enter size: ";
	  			cin>>n;
	  			int a[n];
	  			for(i=0; i<n; i++)
	    				cin>>a[i];
	    		cout<<"Enter the value of k: ";
	    		cin>>k;
	    		cout<<"1-Smallest\n2-Largest\nEnter choice: ";
	    		cin>>c;
	    		if((k=find(a, n, k, c))!=-1)
	  			    cout<<"Smallest "<<k<<"th element is: "<<k<<endl;
					t--;
		}
}
