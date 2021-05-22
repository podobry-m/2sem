#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct str
{
    string name;
    long tel;
    int bal;
};
bool cmp(const str &s1, const str &s2)
{
    if (s1.bal < s2.bal)
        return true;
    if (s1.bal > s2.bal)
        return false;
    if (s1.name < s2.name)
        return true;
    if (s1.name > s2.name)
        return false;
    if (s1.tel < s2.tel)
        return true;
    if (s1.tel > s2.tel)
        return false;
    return true;
}
int main()
{

    vector<str> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string name;
        long tel;
        int bal;
        cin >> name >> tel >> bal;
        v.push_back(str{name, tel, bal});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < min(100, (int)v.size()); i++)
    {
        if (v[i].bal >= 0)
            break;
        cout << v[i].name << " " << v[i].tel << " " << v[i].bal << endl;
    }

    return 0;
}