#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int N, M;
    bool nw;
    cin>>N>>nw;
    vector<string> names;
    vector<bool> b;
    for(int i=0;i<N;i++)
    {
        string nm;
        cin>>nm;
        names.push_back(nm);
        bool tr;
        cin>>tr;
        b.push_back(tr);
    }
    cin>>M;
    bool bi=nw;
    int d=0;
    while(b.size()>1&&d<M)
    {
        vector<int> del;

        for(int i=0;i<b.size();i++)
        {

            bi=(bi==b[i]);
            if((!b[i]) && bi)
                b[i] = 1;
            else if(b[i]&&!bi)
            {
                del.push_back(i);
            }
            d++;
            if(d==M)
                break;
        }
        for(int i=0;i<del.size();i++)
        {
            b.erase(b.begin()+del[i]-i);
            names.erase(names.begin()+del[i]-i);
        }

    }
    for(int i=0;i<b.size();i++)
    {
        cout<<names[i]<<" "<<b[i]<<endl;
    }
    return 0;
}
