#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
bool b[21]={0};
int total=0,a[21]={0};
int search(int);
int print();
bool pd(int,int);
int main()
{
	search(1);
	cout<<total<<endl;
}
int search(int t)
{
int i;
for(i=1;i<=20;i++)
if(pd(a[t-1],i)&&(!b[i]))
{
	a[t]=i;
	b[i]=i;
	if(t==20){if(pd(a[20],a[1]))print();}
	else search(t+1);
	b[i]=0;
} 
}
int print()
{
	total++;
	cout<<"<"<<total<<">";
	for(int j=1;j<=20;j++)
	cout<<a[j]<<" ";
	cout<<endl;	
}
bool pd(int x,int y)
{
int k=2,i=x+y;
while(k<=sqrt(i)&&i%k!=0) k++;
if(k>sqrt(i)) return 1;
else return 0;
}
