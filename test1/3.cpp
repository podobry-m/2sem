#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n_x, n_y, k;
    cin >> n_x >> n_y >> k;
    vector<vector<int>> mas(n_x, vector<int>(n_y, 0));

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        mas[x][y] = 1;
    }
    for (int i = 0; i < n_y; i++)
    {
        for (int j = 0; j < n_x; j++)
        {
            if (mas[j][i] == 0)
                cout << "*";
            else
                cout << "T";
        }
        cout << endl;
    }

    return 0;
}