//source: https://uva.onlinejudge.org/external/100/p10055.pdf

#include <bits/stdc++.h>

using namespace std;

int main(){
	long int h, o;
	
	while(scanf("%ld %ld", &h, &o) != EOF){
		cout << abs(h - o) << endl;
	}
	
	return 0;
}
