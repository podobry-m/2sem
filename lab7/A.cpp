#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,x;
    cin>>a>>b>>c>>d>>x;
    int m=3;
    if(a+x==b)
        m++;
    if(c*x==d)
        m++;
    if(m==3&&x!=1024)
        m--;
    cout<<m;
    return 0;
}
