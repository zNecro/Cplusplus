#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}