/*Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)*/
#include<iostream>
using namespace std;
int find(char *a, int n)
{
    	char c[2*n]={0}, in=0, k;
    	int i;
    	for(i=0; i<n; i++)
    	    	c[a[i]-'a']++;
    	for(i=0; i<2*n; i++)
    	{
    	    	if(c[i]>in)
    	    	{
    	    	   	in=c[i];
    	    	   	k=i+'a';
    	    	}
    	}
    	return k;
}
main()
{
    	int n, i, t;
    	char c;
	cout<<"Enter no. of test cases: ";
	cin>>t;
	while(t>0)
	{
	      	c=' ';
		cout<<"Enter size: ";
	  	cin>>n;
	  	char a[n];
	  	for(i=0; i<n; i++)
	      		cin>>a[i];
	      	c=find(a, n);
	  	cout<<"Element with highest frequency: "<<c<<endl;
		t--;
	}
}
