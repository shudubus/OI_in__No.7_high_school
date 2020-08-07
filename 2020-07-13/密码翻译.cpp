#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<cctype>
#include<algorithm>
 
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='x')
        s[i]='a';
        else if(s[i]=='y')
            s[i]='b';
        else if(s[i]=='z')
            s[i]='c';
        else if(s[i]=='X')
            s[i]='A';
        else if(s[i]=='Y')
            s[i]='B';
        else if(s[i]=='Z')
            s[i]='C';
        else
            s[i]+=3;
 
    }
    reverse(s.begin(),s.end());
    for(int i=0;s[i];i++)
    {
        if(islower(s[i]))
            s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
 
	return 0;
}


