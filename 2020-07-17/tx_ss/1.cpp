#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string>

int main()
{
	std::string n;       // ����߾��ȵ�������
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
				n.erase(i, 1);      // ɾ����λ��i��ʼ��1���ַ�
				break;
			}
			i++;
		}
	}

	while( n[0] == '0' && n[1] )      // ȥ��ǰ׺0�������ٱ���1������
	    n.erase(0, 1);              // ɾȥ��ǰ�ַ�����ͷ��'0'

	printf( "%s", n.c_str() );
	return 0;
}
