#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int n;

    cin >> n;

    cout << sum(n) << endl;

    return 0;
}
int sum(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}