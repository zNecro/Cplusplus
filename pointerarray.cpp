#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //cout<<*arr<<endl;

    int *ptr=arr;

    for(int i=0;i<n;i++)
    { 
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}