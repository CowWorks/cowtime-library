#include <Windows.h>
#include <stdio.h>

void countdown(int h, int m, int s, int skipLine) {
	while (1) {
		printf("\r%2d : %2d : %2d", h, m, s);
		
		if (s == 0) {
			break;
		}
		s--;
		Sleep(1000);
		if (s == 0 && m != 0) {
			m--;
			s = 59;
		}if (m == 0 && h != 0) {
			h--;
			m = 59;
		}
	}
	if (skipLine == 0) {

	}if (skipLine == 1) {
		printf("\n");
	}
}