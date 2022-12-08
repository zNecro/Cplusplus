#include <bits/stdc++.h>
using namespace std;

class complx
{
private:
    int real, imag;

public:
    complx(int r, int i)
    {
        real = r;
        imag = i;
    }
    int operator + (complx &n)
    {
        imag = imag + n.imag;
        real = real + n.real;
    }
};

int main()
{
    int n;
    cin >> n;

    complx  arr[n];

    for (int i = 0; i < n; i++)
    {

    }
}