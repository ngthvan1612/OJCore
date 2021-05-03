#include <stdio.h>

void Play(int &na, int &nb, int x, int y) {
	if (x == 1) { //keo
		if (y == 1) { //keo
			na++;
			nb++;
		}
		else if (y == 2) { //bua
			nb += 3;
		}
		else { //bao
			na += 3;
		}
	}
	else if (x == 2) { //bua
		if (y == 1) { //keo
			na += 3;
		}
		else if (y == 2) {
			na++;
			nb++;
		}
		else { //bao
			nb += 3;
		}
	}
	else { //bao
		if (y == 1) { //keo
			nb += 3;
		}
		else if (y == 2) { //bua
			na += 3;
		}
		else {
			na++;
			nb++;
		}
	}
}

int main() {
	int x, y, z, t, u, v;
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;
	Play(a, b, x, y);
	Play(a, c, z, t);
	Play(b, c, u, v);
	printf("%d %d %d", a, b,c);
	return 0;
}
