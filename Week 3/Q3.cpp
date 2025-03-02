/*Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n)) */
#include <iostream>
using namespace std;
int part(int *a, int l, int r)
{
    int p=a[r], i=l, j=l-1;
    while(i<r)
    {
        if(a[i]<p)
        {
            j++;
            swap(a[i], a[j]);
        }
        i++;
    }
    swap(a[r], a[j+1]);
    return j+1;
}
void sort(int *a, int l, int r)
{
    int p;
    if(l<=r)
    {
        p=part(a, l, r);
        sort(a, l, p-1);
        sort(a, p+1,r);
    }
}
void Dup(int *a, int n) {
    sort(a, 0, n-1);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Dup(a, n);
}
