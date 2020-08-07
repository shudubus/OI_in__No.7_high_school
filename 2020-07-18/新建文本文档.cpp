int *_10to2( int num )
{
    int t;
    t = num%2;
    num = num/2;

    if ( num != 0 ) _10to2 ( num );

    nn[i] = t;
    i++;

    if( num == 0 )
        return nn;
}
