//source: http://codeforces.com/problemset/problem/844/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int k, alphabet[26] = {0}, eq = 0, changes = 0;
	
	cin >> str;
	cin >> k;
	
	if(k > str.size())
		cout << "impossible";
	else{
		for(int i = 0; i < str.size(); i++){ //counting letters
			alphabet[str[i] - 'a'] += 1;
			if(alphabet[str[i] - 'a'] >= 2)
				eq++; //counting redundacies
		}
		
		for(int i = 0; i < 26 && (str.size() - eq) < k; i++){ //substituting redundancies with others non utilized letters
			if(alphabet[i] == 0){
				eq--;
				changes++;
			}
		}
		
		if(k > (str.size() - eq))
			cout << "impossible";
		else 
			cout << changes;
	}
	
	return 0;
}
