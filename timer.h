#include <Windows.h>
#include <stdio.h>

void timer(void) {
	int hh = 0, mm = 0, ss = 0;

	while (1) {
		printf("\r%2d : %2d : %2d", hh, mm, ss);
		ss++;
		Sleep(1000);
		if (ss == 59) {
			mm++;
			ss = 0;
		}if (mm == 59) {
			hh++;
			mm = 0;
		}if (hh == 24) {
			hh = 0;
		}
	}

}