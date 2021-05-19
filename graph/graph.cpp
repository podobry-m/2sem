#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
short N;
struct s
{
    short x, y, level;
    short* brd;
    
    s(short x0, short y0, short from, short* brd0, short lvl0) :x{x0}, y{y0}
    {
        brd=new short[N*N];
        for(short i=0; i<N*N; i++)
        {
            brd[i]=brd0[i];
        }
        brd[x+N*y]=from;
        level=lvl0+1;
    }
};


int main()
{
    cin>>N;
    short* b=new short[N*N];
    for(short i=1; i<N*N; i++)
    {
        b[i]=-1;
    }

    stack<s> st;
	
    st.push(s{0, 0, 0, b, 0});

    while(st.size()>0)
    {
        s cur=st.top();
        st.pop();
        if(cur.level>N*N-1)
        {
            cout<<"YES"<<endl;

            for(short i=0;i<N*N;i++)
            {
                b[i]='o';
            }
            
            
            short c=(cur.x)+(cur.y)*N;
            stack<short> way;
			
            while(c!=0)
            {
                way.push(c);
                c=(cur.brd)[c];
            }
			way.push(0);
			getchar();
			while (way.size()>0)
			{
				system("cls");
				short pos=way.top();
				way.pop();
				b[pos]='x';
                for(short i=0;i<N;i++)
                {
                    for(short j=0;j<N;j++)
                        cout<<(char)b[i+N*j]<<" ";
                    cout<<endl;
                }
				b[pos]='#';
                
                getchar();
			}
            break;
        }


        short x = cur.x;
        short y = cur.y;

        short var[] = {1,2,-1,-2};
        for(short i=0; i<4; i++)
        {
            for(short j=0; j<4; j++)
                if((abs(var[i])!=abs(var[j]))&&(0<=x+var[i])&&(x+var[i]<N)&&(0<=y+var[j])&&(y+var[j]<N)&&cur.brd[x+var[i]+N*(y+var[j])]==-1)
                    st.push(s{x+var[i], y+var[j], x+N*y, cur.brd, cur.level});
        }
        
        delete[] cur.brd;
    }
    cout<<"NO";
    return 0;
}
