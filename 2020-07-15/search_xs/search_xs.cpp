#include<cstdio>
#include<cstdlib>

int b[10],              /*记录最优方案*/
    f[10];              /*记录当前方案*/

const int  d[5][5] = { /*记录效益值（题目），常量*/
    { 13, 11, 10,  4,  7 },
    { 13, 10, 10,  8,  5 },
    {  5,  9,  7,  7,  4 },
    { 15, 12, 10, 11,  5 },
    { 10, 11,  8,  8,  4 }
};

bool p[5];
int  maxt = 0;

int ssearch( int s, int t )
{
    int i = 0;
    while( i < 5 )
    {
        if( ! p[i] )
        {
            f[s] = i;/*第s个人选择第i项工作*/
            p[i] = 1;/*标记此项工作已被选择*/
            t = t + d[s][i];/*效益值=当前+第s个人做第i项工作的效益值*/

            if( s < 4 )/*如果当前方案未完善*/
            {
                ssearch( s+1, t );/*则继续完善*/
            }

            else if( t > maxt )/*如果t是当前最大效益*/
            {
                maxt = t;/*记录t*/
                int j = 0;
                while( j < 5 )
                {
                    b[j] = f[j];/*保存当前方案*/
                    j++;
                }
                t = t - d[s][i];/*回溯*/
                p[i] = 0;
            }
        }
        i++;
    }
}

int main()
{
    ssearch( 0, 0 );
    int i = 0;
    while( i < 5 )
    {
        printf( "%c:%d\n", char( 65+i ), b[i]+1 );
        i++;
    }
    printf( "\n%d", maxt );
}
