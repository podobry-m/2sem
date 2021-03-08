#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> s;
    int n;
    cin>>n;
    while(n!=0)
    {
        if(n>0)
            s.push_back(n);
        else if(s.size()>0)
        {
            s[s.size()-1]+=n;
            if(s[s.size()-1]<=0)
                s.pop_back();
        }
        cin>>n;
    }
    if(s.size()>0)
        cout<<s.size()<<" "<<s[s.size()-1];
    else
        cout<<"0 -1";
    return 0;
}
