#include<cstdio>

void movehn( int num, char star, char last )
{
    printf ( "Move %d From %c to %c\n", num, star, last );
}

int hanoi( int cen, char A, char B, char C )
{
    if ( cen == 2 )/*如果剩余层数为1，直接把他挪到c柱子*/
    {
         movehn( 1, A, C );
         movehn( 2, A, C );
    }

    else/*否则*/
    {
        hanoi( cen-2, A, C, B  );/*把除了最下面的所有圆盘从A柱挪到B柱*/
        movehn( cen-1, A, C );     /*再把最下面的圆盘从A注挪到C柱*/
        movehn( cen, A, C );
        hanoi( cen-2, B, A, C  );/*再把除了最下面的所有圆盘从B柱挪到C柱*/
    }
}

int game()
{
    int n;
    char a, b, c;
    scanf( "%d %c %c %c", &n, &a, &b, &c );
    hanoi( n*2, a, b, c );
    return 0;
}

int main( int argc, char**argv )
{
    game();
}
