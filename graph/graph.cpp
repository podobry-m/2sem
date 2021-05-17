#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
char N;
struct s
{
    char x, y, from, level;
    char** brd;
    s(char x0, char y0, char from0, char** brd0, char lvl0)
    {
        x=x0;
        y=y0;
        from=from0;
        brd=new char*[N];
        char *b=new char[N*N];
        for(char i=0; i<N; i++)
        {
            brd[i]=b+N*i;
            for(char j=0; j<N; j++)
            {
                brd[i][j]=brd0[i][j];
            }
        }
        brd[x][y]=from0;
        level=lvl0+1;
    }
};


int main()
{
    cin>>N;
    char** board=new char*[N];
    char* b=new char[N*N];
    for(char i=0; i<N; i++)
    {
        board[i]=b+N*i;
        for(char j=0; j<N; j++)
        {
            board[i][j]=-1;
        }
    }
    board[0][0]=0;

    stack<s*> st;
    st.push(new s(0, 0, 0, board, 0));

    int k=0;
    while(st.size()>0)
    {
        k++;
        s* cur=st.top();
        st.pop();
        if(cur->level>N*N-1)
        {
            cout<<"YES"<<endl;

            for(char i=0;i<N;i++)
            {
                for(char j=0;j<N;j++)
                {
                    board[i][j]=0;
                }
            }
            for (char i=0;i<N;i++)
            {
                for(char j=0;j<N;j++)

                cout<<(cur->brd)[i][j]<<" ";
                cout<<endl;
            }
            char cx=cur->x;
            char cy=cur->y;
            char c=(cur->x)+(cur->y)*N;
            while(c!=0)
            {
                board[cx][cy]=1;
                for(char i=0;i<N;i++)
                {
                    for(char j=0;j<N;j++)
                        cout<<board[i][j]<<" ";
                    cout<<endl;
                }
                cout<<endl;
                getchar();

                c=(cur->brd)[cx][cy];
                cy=c/N;
                cx=c%N;
            }
            break;
        }


        char x = cur->x;
        char y = cur->y;
        //cout<<x<<" "<<y<<endl;

        char var[] = {1,2,-1,-2};
        for(char i=0; i<4; i++)
        {
            for(char j=0; j<4; j++)
                if((abs(var[i])!=abs(var[j]))&&(0<=x+var[i])&&(x+var[i]<N)&&(0<=y+var[j])&&(y+var[j]<N)&&cur->brd[x+var[i]][y+var[j]]==-1)
                    st.push(new s(x+var[i], y+var[j], x+N*y, cur->brd, cur->level));
        }
    }
    cout<<"NO";
    return 0;
}
