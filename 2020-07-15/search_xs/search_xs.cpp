#include<cstdio>
#include<cstdlib>

int b[10],              /*��¼���ŷ���*/
    f[10];              /*��¼��ǰ����*/

const int  d[5][5] = { /*��¼Ч��ֵ����Ŀ��������*/
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
            f[s] = i;/*��s����ѡ���i���*/
            p[i] = 1;/*��Ǵ�����ѱ�ѡ��*/
            t = t + d[s][i];/*Ч��ֵ=��ǰ+��s��������i�����Ч��ֵ*/

            if( s < 4 )/*�����ǰ����δ����*/
            {
                ssearch( s+1, t );/*���������*/
            }

            else if( t > maxt )/*���t�ǵ�ǰ���Ч��*/
            {
                maxt = t;/*��¼t*/
                int j = 0;
                while( j < 5 )
                {
                    b[j] = f[j];/*���浱ǰ����*/
                    j++;
                }
                t = t - d[s][i];/*����*/
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
