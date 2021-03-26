#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int c, m=0;
    vector<int> v;
    while(cin>>c)
    {
        if(c>m)
            m=c;
        v.push_back(c);
    }
    int p=1;
    bool b=false;

    while(p<=m)
    {
        int h=0;
        for(int i=0; i<v.size(); i++)
        {
            if((v[i]/p)%10==0)
            {
                int r=v[i];
                v.erase(v.begin()+i);
                v.insert(v.begin()+h,r);
                h++;
            }

        }
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        p*=10;
        cout<<endl;
    }
    return 0;
}
