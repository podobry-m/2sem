#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float k, h_0, m, F;
    cin >> k >> h_0 >> m;
    F = k * h_0;
    float v = sqrt(2 * F / m * h_0);
    cout << fixed;
    cout.precision(1);
    cout << v;
    return 0;
}