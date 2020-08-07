#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
bool b[21]={0};
int total=0,a[21]={0};

inline void out(int x) {
  static char s[6];
  register int cnt = 0;
  do s[cnt++] = x % 10; while (x /= 10);
  while (cnt--) putchar(s[cnt] + '0');
}

bool pd(int x,int y)
{
    int k=2,i=x+y;
    while(k<=sqrt(i)&&i%k!=0) k++;

    if(k>sqrt(i)) return 1;
    else return 0;
}

int print()
{
	total++;
	printf( "<%d>", total );
	for(int j=1;j<=20;j++)
    {
        out( a[j] );
    }
	printf( "\n" );
}

int search(int t)
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(pd(a[t-1],i)&&(!b[i]))
        {
            a[t]=i;
            b[i]=i;

            if(t==20 && pd(a[20],a[1]))print();
            else search(t+1);

            b[i]=0;
        }
    }
}

int main()
{
    freopen("sub.in","r",stdin);
	freopen("sub.txt","w",stdout);
	search(1);
	printf( "%d", total );
}
