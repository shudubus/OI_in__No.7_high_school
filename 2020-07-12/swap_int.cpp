#include <iostream>
 #include <cstring>
 void sub(char a[102],char b[102]);
 void conect(char d[],char c);
 using namespace std;
 int main()
 {
  char a[102];
  char b[102];
         cin>>a>>b;
		 char sum[102];
  char part_of_a[102];


  int i;
  int j=0;
  int cnt=0;
  int lenth_of_a=strlen(a);
  int lenth_of_b=strlen(b);
    if( lenth_of_a==lenth_of_b&&strcmp(a,b)<0 || lenth_of_a<lenth_of_b)//除数小于被除数
	{
		cout<<"0"<<endl;
	    cout<<"0"<<endl;
	}
	else  // 除数大于被除数
	{

				 for (i=0; i<lenth_of_b; i++)// 取 被除数a的一部分赋给part_of_a
					 {
					part_of_a[i]=a[i];
						}
					part_of_a[i]='/0';
				if ( strcmp(part_of_a,b)<0)//如果当part_of_a和b长度相等而part_of_a又小一点时，加长part_of_a
						conect(part_of_a,a[i++]);
					while ( i<=lenth_of_a )
					{
								while(1)
								{
									sub(part_of_a,b);
									cnt++;//计数器
									if ( strlen(part_of_a)<strlen(b) ||
											strlen(part_of_a)==strlen(b)&&strcmp(part_of_a,b)<0)
												break;
								//减到所得数小减数为止
								}
									sum[j++]=cnt+'0';
									cnt=0;
					while ( 1 )
							{
						          conect(part_of_a,a[i++]);
								  if (strcmp(part_of_a,b)>=0 && strlen(part_of_a)==lenth_of_b
									  || strlen(part_of_a)>lenth_of_b
									  || i==lenth_of_a+1 )	// 这点是关键，就不写注释了，大家用这个算法写的时候先自己琢磨，如果搞不定可以来看看。
									   break;
								sum[j++]='0';
							}
					}

		sum[j]='/0';
       cout<<sum<<endl;
	      if(strlen(part_of_a)>0)
				cout<<part_of_a<<endl;
		  else
			    cout<<"0"<<endl;
	}

                return 0;
 }

 void sub(char a[102],char b[102])//减法函数
 {
  char c[101];
  int i=strlen(a)-1;
  int j=strlen(b)-1;
  int k=0;
  int x;
  int y;
  int z;
  int up=0;
        while (i>=0 || j>=0)
          {
            i>=0?x=a[i]-'0':x=0;
            j>=0?y=b[j]-'0':y=0;
            z=x-y+up;
            z<0?z+=10,up=-1:up=0;
             c[k++]=z+'0';
            i--;
            j--;
          }
        up==-1?c[k]=1+'0':k--;
             i=0;
       		while (k>=0)
        	{
                  a[i++]=c[k--];
        	}
			a[i]='/0';
			//清除多于的零
			while (a[0] =='0')
			{
			   for(j=0; j-1<i; j++)
				   a[j]=a[j+1];
			}
 }


 void conect(char d[],char c)// 加长part_of_a函数.
   {
   int i=strlen(d);
      d[i++]=c;
	  d[i]='/0';
   }
