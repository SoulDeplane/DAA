/*Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n)) */
#include <iostream>
using namespace std;
int part(int *a, int l, int r, int *c, int *s)
{
    int p=a[r], i=l, j=l-1;
    while(i<r)
    {
        (*c)++;
        if(a[i]<p)
        {
            j++;
            swap(a[i], a[j]);
            (*s)++;
        }
        i++;
    }
    swap(a[j+1], a[r]);
    (*s)++;
    return j+1;
}
void sort(int *a, int l, int r, int *c, int *s)
{
    int p;
    if(l<r)
    {
        p=part(a, l, r, c, s);
        sort(a, l, p-1, c, s);
        sort(a, p+1,r, c, s);
    }
}
main()
{
    int n, t, c=0, s=0;
    cout<<"Enter no. of test cases: ";
    cin>>t;
    while(t>0)
    {
        cout << "Enter size: ";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, 0, n-1, &c, &s);
        for (int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<"Comparisions: "<<c<<endl;
        cout<<"Swaps: "<<s<<endl;
        t--;
    }
}
