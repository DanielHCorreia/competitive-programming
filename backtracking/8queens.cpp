//source: https://uva.onlinejudge.org/external/7/750.pdf

#include <bits/stdc++.h>

int tc, a, b, row[8], lineCounter;

bool avblPlace(int c, int r) {
	for (int prev = 0; prev < c; prev++)
		if (row[prev] == r || (abs(c - prev) == abs(row[prev] - r)))
			return false;
	return true; }

void backtrack(int c){
	if (c == 8 && row[b] == a) {
		printf("%2d		%d", ++lineCounter, row[0] + 1);
		for (int i = 1; i < 8; i++) printf(" %d", row[i] + 1);
		printf("\n"); }
	for (int r = 0; r < 8; r++)
		if (avblPlace(c, r)) {
			row[c] = r; backtrack(c+1); }
}

int main() {
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d %d", &a, &b); a--; b--;
        memset(row, 0, sizeof(row)); lineCounter = 0;
        printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0);
		if (tc) printf("\n"); }
    return 0; }