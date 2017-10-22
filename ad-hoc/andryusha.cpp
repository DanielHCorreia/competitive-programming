//source: http://codeforces.com/problemset/problem/782/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	long int n, max = 0, sock;
	set<long int> socks;
	set<long int>::iterator it;
	
	cin >> n;
	
	for(long int i = 0; i < 2*n; i++){
		cin >> sock;
		
		it = socks.find(sock);
		
		if(it == socks.end()){ //the another part of the pair isn't on the table
			socks.insert(sock);
			if(socks.size() > max)
				max = socks.size();
		} else //the another part of the pair is on the table and got to be removed
			socks.erase(it);
	}
	
	cout << max;
	
	return 0;
}
