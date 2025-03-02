/*Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by dividing the array into two subarrays and combining these subarrays after sorting each one of them. Your program should also find number of comparisons and inversions during sorting the array.*/
#include <iostream>
using namespace std;
void sort(int *a, int n)
{
    int c=0, s=0, i, j, t;
    for(i=1; i<n; i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0)
        {
            c++;
            if(a[j]>t)
            {
                a[j+1]=a[j];
                s++;
                j--;
            }
            else
                break;
        }
        a[j+1]=t;
        s++;
    }
    cout<<"Comparisions: "<<c<<endl;
    cout<<"Inversions: "<<s<<endl;
}
main()
{
    int n, t;
    cout<<"Enter no. of test cases: ";
    cin>>t;
    while(t>0)
    {
        cout << "Enter size: ";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, n);
        for (int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        t--;
    }
}
