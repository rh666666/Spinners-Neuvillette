#include<stdio.h>
#include<Windows.h>

int main() {
	while (1) {
		if (GetKeyState(VK_XBUTTON1) < 0) {
			mouse_event(MOUSEEVENTF_MOVE, 800, 0, 0, 0);
		}
		Sleep(1);
	}
	return 0;
}