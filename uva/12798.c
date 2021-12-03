#include <stdio.h>
int main() {
	int n, m;
	while (scanf("%d %d", &n, &m) == 2) {
		int i,j,ret = 0, x;
		for (i = 0; i < n; i++) {
			int ok = 1;
			for (j = 0; j < m; j++) {
				scanf("%d", &x);
				ok &= x > 0;
				printf("%d ", ok);
			}
			ret += ok;
		}
		printf("%d\n", ret);
	}
	return 0;
}

