#include <iostream>
using namespace std;

int main()
{
    int N, k;
    cin>>N;
    bool b=false;
    for(int i=0;i<N;i++){
        cin>>k;
        if((k%4==0&&k/1000!=4&&k/1000!=5)||(k%7==0&&k/1000!=7&&k/1000!=1)||(k%9==0&&k/1000!=9&&k/1000!=8))
        {
            b=true;
            cout<<k<<endl;
        }
    }
    if(!b)
        cout<<0<<endl;
    return 0;
}
