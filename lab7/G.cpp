#include <iostream>
#include<cmath>
using namespace std;
float find_root(float (*f)(float),float a,float b, float tol)
{
    float l,r;
    if(f(a)<f(b)){
        l=a;
        r=b;
    }
    else{
        l=b;
        r=a;
    }
    while((r-l)/2>tol||(l-r)/2>tol){
        if(f((l+r)/2)>0)
            r=(l+r)/2;
        else
            l=(l+r)/2;
    }
    return (r+l)/2;
}


int main()
{
    cout<<find_root(f, a, b, tol);
    return 0;
}
