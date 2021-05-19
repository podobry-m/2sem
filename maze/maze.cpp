#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
struct Point
{
    int x,y;

};
struct Maze
{
    int sx,sy;
    Point input, exit;
    int* map=nullptr;
    string* str_map;
    int* f(int y, int x)
    {
        return (map+y*sx+x);
    }
    void read(string filename)
    {
        ifstream fin(filename);
        fin>>sx>>sy;
        map = new int[sx*sy];
        str_map=new string[sy];
        string s;
        getline(fin, s);
        for(int i=0; i<sy; i++)
        {

            getline(fin, s);
            //cout<<s<<endl;
            str_map[i]=s;
            for(int j=0; j<sx; j++)
            {
                char c = s[j];
                if(c =='#')
                    *f(i,j)=-1;
                else if(c==' ')
                    *f(i, j)=-2;
                else if(c=='I')
                {
                    input=Point{j,i};
                    *f(i, j)=-3;
                }
                else if(c=='E')
                {
                    exit=Point{j,i};
                    *f(i, j)=-4;
                }
            }
        };

    }


};
int main()
{
    Maze m;
    m.read("maze.txt");
    stack<Point> st;
    st.push(m.input);
    while(st.size()>0)
    {
        Point t = st.top();
        st.pop();
        int* cur=m.f(t.y, t.x);
        if(t.x==m.exit.x&&t.y==m.exit.y)
            {
                int way=*cur;
                while(way!=-3)
                {
                    m.str_map[way/m.sx][way%m.sx]='*';
                    way=m.map[way];
                }
                for(int i=0;i<m.sy;i++)
                    cout<<m.str_map[i]<<endl;
                break;
            }

        Point w[]=
        {
            Point{t.x+1, t.y},
            Point{t.x, t.y+1},
            Point{t.x-1, t.y},
            Point{t.x, t.y-1}
        };
        for(int i=0;i<4;i++)
        {
            Point p=w[i];
            int* p_int=m.f(p.y, p.x);

            if(p.x>0&&p.y>0&&p.x<m.sx&&p.y<m.sy&&(*p_int==-2||*p_int==-4))
            {

                *p_int=cur-m.map;
                st.push(p);
            }
        }
    }

    return 0;
}
