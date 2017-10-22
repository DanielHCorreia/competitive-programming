//source: http://codeforces.com/problemset/problem/805/A

#include <bits/stdc++.h>

using namespace std;

long int i, r;

long int divqt(int divisor){ //quantity of the divisor's multiples inside range [i,r]
	long int j, counter = 0;

	for(j = i; j % divisor != 0 && j <= r; j++); //find the first number inside range that is a multipler of the divisor
	
	for(;j <= r;j = j + divisor){ //count the divisors multiples inside range
		counter++;
	}
	
	return counter;
}

int main(){
	long int max = 0, res;
	int divisor;	
	
	cin >> i >> r;
	
	for(int j = 2; j < 10; j++){ // 2 - 9 (possible divisors)
		res = divqt(j);
		
		if(res >= max){ //if the j multiples quantity inside range [i,r] is bigger or equal max, then, res is the new max
			max = res;
			divisor = j; //the divisor related with max
		}
	}
	
	if(max != 0)
		cout << divisor;
	else // if i ans r are equal and both prime numbers
		cout << i;
			
	return 0;
}
