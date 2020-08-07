#include<cstdio>

inline void putint( int x )
{
  static char s[6];
  register int cnt = 0;
  do s[cnt++] = x % 10; while (x /= 10);
  while (cnt--) putchar(s[cnt] + '0');
}

int main()
{
    return 0;
}
