//source: http://www.spoj.com/problems/AE00/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, ans, sum = 0;
	bool end = false;
	
	cin >> n;
	
	for(int i = 1; !end; i++){
		ans = floor((float)n / (float)i) - (i - 1);

		if(ans <= 0)
			end = true;
		else
			sum += ans;
	}
	
	cout << sum;

	return 0;
}
