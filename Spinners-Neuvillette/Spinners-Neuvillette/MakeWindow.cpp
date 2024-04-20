#include "head.h"

HWND MakeWindow() {
	HWND window;
	window = initgraph(400, 300);
	setbkcolor(WHITE);
	cleardevice();

	return window;
}