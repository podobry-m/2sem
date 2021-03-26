#include <iostream>
#include <cmath>
#include <vector>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed;
    float c, sum=0, sum2=0;
    cin>>c;
    vector<float> v, v2;
    while(c!=0)
    {
        sum+=c;
        sum2+=c*c;
        v.push_back(c);
        v2.push_back(c*c);
        cin>>c;
    }
    float m=sum/v.size();
    m= round(1000*m)/1000;
    cout<<setprecision(1);
    cout<<m<<" ";
    float m2=sum2/v2.size()-m*m;
    cout<<m2<<endl;
    return 0;
}
