/*You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list of elements which are common to both. (Time Complexity = O(m+n))*/
#include<iostream>
using namespace std;
void find(int *a, int n, int *b, int m)
{
    int i=0, j=0, h=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            cout<<a[i]<<" ";
            h++;
            i++;
            j++;
        }
    }
    cout<<endl;
    if(h==0)
        cout<<"No common elements"<<endl;
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
            cin>>a[i];
        cout<<"Enter size: ";
        cin>>m;
        int b[m];
        for(i=0; i<m; i++)
            cin>>b[i];
        find(a, n, b, m);
        t--;
    }
}
