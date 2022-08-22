#include <bits/stdc++.h>
using namespace std;

int exgcd(int a, int b, int &x, int &y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int d = exgcd(b, a%b, x, y);
    int temp = x;
    x = y;
    y = temp - a/b*y;
    return d;
}

int main()
{
    int x, y, a, b;
    while(cin >> a >> b)
    {
        int gcd = exgcd(a, b, x, y);
        cout << x << " " << y << " " << gcd << endl;
    }
    return 0;
}
