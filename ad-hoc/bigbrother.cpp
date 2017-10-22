//source: http://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, yrs;
	
	cin >> a >> b;
	
	for(yrs = 1; a <= b; yrs++){
		a *= 3;
		b *= 2;
	}
	
	yrs--;	
	
	cout << yrs;
	
	return 0;
}
