#include<cstdio>

void movehn( int num, char star, char last )
{
    printf ( "Move %d From %c to %c\n", num, star, last );
}

int hanoi( int cen, char A, char B, char C )
{
    if ( cen == 2 )/*���ʣ�����Ϊ1��ֱ�Ӱ���Ų��c����*/
    {
         movehn( 1, A, C );
         movehn( 2, A, C );
    }

    else/*����*/
    {
        hanoi( cen-2, A, C, B  );/*�ѳ��������������Բ�̴�A��Ų��B��*/
        movehn( cen-1, A, C );     /*�ٰ��������Բ�̴�AעŲ��C��*/
        movehn( cen, A, C );
        hanoi( cen-2, B, A, C  );/*�ٰѳ��������������Բ�̴�B��Ų��C��*/
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
