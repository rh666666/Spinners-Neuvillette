#include "head.h"

int main() {
	HWND win = MakeWindow();
	settextcolor(BLUE);
	outtextxy(50, 55, L"按住鼠标侧键就可以转啦，快去试试吧！");
	Spinners();

	_getch();
	return 0;
}