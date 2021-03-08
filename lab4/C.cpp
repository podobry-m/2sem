#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int N, i;
    cin>>N;
    vector<int> v;
    string s;
    for(int k=0;k<N;k++){
        cin>>s;
        if(s=="+"){
            cin>>i;
            v.push_back(i);
        }
        else if(s=="*"){
            cin>>i;
            v.insert(v.begin()+(v.size()+1)/2,i);
        }
        else{
            cout<<v[0]<<endl;
            v.erase(v.begin());
        }
    }

    return 0;
}
