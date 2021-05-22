#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    set<pair<int, int>> k;

    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    for (int i = 0; i < n; i++)
        k.insert(a[i]);

    for (int i = 0; i + 1 < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            pair<int, int> ans;
            ans.first = a[i].first + a[j].first;
            ans.second = a[i].second + a[j].second;
            if (k.count(ans))
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}