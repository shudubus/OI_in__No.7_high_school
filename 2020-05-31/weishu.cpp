#include<cstdio>

int game()
{
    int weishu;
    scanf( "%d", &weishu );
    int shudu[weishu+1][2];

    int i=0;

    shudu[0][0] = 8;
    shudu[0][1] = 1;

    while( i<=weishu )
    {
        i++;
        shudu[i][0] = (shudu[i-1][1] + shudu[i-1][0]*9)%12345;
        shudu[i][1] = (shudu[i-1][1]*9 + shudu[i-1][0])%12345;
    }
    printf( "%d", shudu[weishu-1][0] );
}

int main()
{
    game();
}
