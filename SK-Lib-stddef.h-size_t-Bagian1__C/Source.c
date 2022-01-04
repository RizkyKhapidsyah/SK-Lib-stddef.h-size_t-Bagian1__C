
#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

#define N 10

int main() {
	int a[N];

	// This is fine.
	for (size_t n = 0; n < N; ++n) {
		a[n] = n;
	}

	// But reverse cycles are tricky for unsigned
	// types as they can lead to infinite loops.
	for (size_t n = N - 1; n >= 0; --n) {
		printf("%d ", a[n]);
	}
		
	_getch();
	return 0;
}
