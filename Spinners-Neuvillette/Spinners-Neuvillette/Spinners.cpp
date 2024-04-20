#include "head.h"

int Spinners() {
	while (1) {
		if (GetKeyState(VK_XBUTTON1) < 0) {
			mouse_event(MOUSEEVENTF_MOVE, 800, 0, 0, 0);
		}
		Sleep(1);
	}
	return 1;
}