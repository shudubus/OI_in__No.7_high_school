#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string>

int main()
{
	std::string n;       // 读入高精度的正整数
	int k;
	std::cin>>n;
	scanf( "%d",&k );

	while( k-- )
	{
		int len = n.length();
		int i = 0;
		while( i < len)
		{
			if( n[i] > n[i+1] || i == len-1 )
			{
				n.erase(i, 1);      // 删除从位置i开始的1个字符
				break;
			}
			i++;
		}
	}

	while( n[0] == '0' && n[1] )      // 去掉前缀0，并至少保留1个数字
	    n.erase(0, 1);              // 删去当前字符串开头的'0'

	printf( "%s", n.c_str() );
	return 0;
}
