#include <iostream>
#include <vector>
using namespace std;
int pop(vector<int> &v){
    int b = v[v.size()-1];

    v.pop_back();
    return b;
}
int main()
{
    vector<int> v;
    string s;
    while(cin>>s){
        if(s=="+"){
            v.push_back(pop(v)+pop(v));
        }
        else if(s=="-")
        {
            int a=pop(v);
            int b=pop(v);
            v.push_back(b-a);
        }
        else if(s=="*")
            v.push_back(pop(v)*pop(v));
        else if(s=="/")
        {
            int a=pop(v);
            int b=pop(v);
            v.push_back(b/a);
        }
        else
            v.push_back(stoi(s));
    }
    cout<<v[0];

    return 0;
}

