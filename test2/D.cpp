#include <iostream>
using namespace std;
const unsigned long long M = 0b1111111111111111111111111111111;
int main()
{
    int n;
    cin >> n;
    unsigned long long s = 1, u = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        unsigned long long s1 = s + u + d;
        unsigned long long u1 = s + d;
        unsigned long long d1 = s + u;
        s = s1 % M;
        u = u1 % M;
        d = d1 % M;
    }
    cout << (s + u + d) % M;

    return 0;
}