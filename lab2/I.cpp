#include <iostream>
using namespace std;
int main()
{
    int s = 0;
    const string N = "A999AA";
    while(true)
    {
        int v;
        cin >> v;

        string n;
        cin >> n;

        if(n == N)
        {
            cout << s;
            break;
        }
        if(v > 60)
        {
            if((n[1] == n[2])&& (n[1] == n[3]))
                s += 1000;
            else if(n[1] == n[2] | n[2] == n[3] | n[1] == n[3])
                s += 500;
            else
                s += 100;
        }
    }
    return 0;
}
