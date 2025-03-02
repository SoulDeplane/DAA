/*Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element. (Time Complexity = O(n log n)) */
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
void find(int *a, int n, int k)
{
    int i, l, h, m, r;
    for(i=0; i<n; i++)
    {
        r=a[i];
        l=0; h=n;
        while(l<=h)
        {
            m=(l+h)/2;
            if(a[m]+r==k)
            {
                cout<<a[m]<<" "<<r<<endl;
                return;
            }
            else if(a[m]+r<k)
                l=m+1;
            else
                h=m-1;
        }
    }
    cout<<"No such element exist"<<endl;
}
main()
{
    int n, i, t, k, m;
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
        cout<<"Enter key: ";
        cin>>k;
        sort(a, n, m);
        find(a, n, k);
        t--;
    }
}
