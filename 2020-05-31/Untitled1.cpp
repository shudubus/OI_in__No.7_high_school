#include<cstdio>

#define no 0

long long chess[20][20];
int noway[20][20];
int input1, input2, input3, input4;

int start()
{
    int x1[8] = {1, 1, 2, 2, -1, -1, -2, -2};
    int y1[8] = {-2, 2, -1, 1, 2, -2, -1, 1};

    int input31, input41;

    int i=0, j=0;
    chess[input3][input4] = chess[0][0] = no;
    noway[input3][input4] = 1;

    i = 0;
    while( i<8 )
    {
        input31 = input3 + x1[i];
        input41 = input4 + y1[i];

        if (  input31 >= 0
           && input31 >= input3
           && input41 >= 0
           && input41 >= input4  )
        {
            chess[input31][input41] = no;
            noway[input31][input41] = 1;
        }

        i++;
    }

    i = 0;
    while( i<= input1 )
    {
        if( noway[i][0] == 1 )
        {
            while( i<=input1 )
            {
                i++;
                chess[i][0] = no;
            }
        }

        else
        {
            chess[i][0] = 1;
        }
        i++;
    }

    i = 0;
    while( i <= input2 )
    {
        if( noway[0][i] == 1 )
        {
            while( i<=input2 )
            {
                i++;
                chess[0][i] = no;
            }
        }

        else
        {
            chess[0][i] = 1;
        }
        i++;
    }
}

int game()
{
    scanf( "%d%d%d%d", &input1, &input2, &input3, &input4 );
    int i=0, j=0;
    while( i<=input1 )
    {
        while( j<=input2 )
        {
            if( noway[i][j] == 0 )
                chess[i][j] = chess[i-1][j]+chess[i][j-1];
            j++;
        }
        i++;
    }

    printf( "%lld", chess[input1][input2] );
}

int main()
{
    start();
    game();
}
