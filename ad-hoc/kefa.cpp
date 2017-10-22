//source: http://codeforces.com/problemset/problem/841/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	int alphabet[26] = {0};
	string ballons;
	bool impossible = false;
	
	cin >> n >> k;
	cin >> ballons;
	
	for(int i = 0; i < n && !impossible; i++){
		alphabet[ballons[i] - 'a']++;
		if(alphabet[ballons[i] - 'a'] > k)
			impossible = true; 
	}
	
	if(impossible == true)
		cout << "NO";
	else 
		cout << "YES";
	
	return 0;
}
