//source: http://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	float w;
	
	cin >> w;
	
	if(fmod(w, 2) == 0 && w != 2)
		cout << "YES\n";
	else 
		cout << "NO\n";
	
	return 0;
}
