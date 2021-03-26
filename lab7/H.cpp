#include <iostream>
using namespace std;

int main()
{
    int N,m;
    cin>>N;
    m=N;
    int* a=new int[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N;i++)
    {
        int t=a[i];
        if(t<0)
            for(int j=i+1;j<N;j++)
        {
            if(a[j]==-t&&j-i<m)
                m=j-i;
        }
    }
    if(m==N)
        m=0;
    cout<<m;
    return 0;
}
