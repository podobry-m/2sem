#include <iostream>
using namespace std;
int main()
{
    int n, k;
    string s = "";
    cin >> n;
    while(n > 0)
    {
        s = "." + s;
        k = n % 60;
        for(int i = 0; i < k % 10; i++)
            s = "v" + s;
        for(int i = 0; i < k / 10; i++)
            s = "<" + s;
        n /= 60;
    }
    s.pop_back();
    cout << s;
    return 0;
}
