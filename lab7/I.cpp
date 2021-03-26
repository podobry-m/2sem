#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int c;
    while(cin>>c)
    {
        if(c%2==0)
            v1.push_back(c);
        else
            v2.push_back(c);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    return 0;
}
