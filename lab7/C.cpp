#include <iostream>
#include <cmath>
#include <vector>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed;
    cout<<setprecision(1);
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
    cout<<m<<" "<<sum2/v2.size()-m*m<<endl;
    return 0;
}
