//source: https://uva.onlinejudge.org/external/6/p661.pdf

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;
	long long int m, c, actual = 0, max = 0, seq = 1, cd;
	pair<int, bool> disp;
	vector <pair<int, bool> > disps;
	bool blown = false;
	
	while(scanf("%d %lld %lld", &n, &m, &c) && !(n == 0 && m == 0 && c ==0)){
		for(int i = 0; i < n; i++){
			scanf("%lld", &cd);
			disp = make_pair(cd, false);
			disps.push_back(disp);
		}
		
		for(int i = 0; i < m; i++){
			scanf("%d", &d);
			
			if(!blown){
				if(disps[d-1].second == false){
					actual += disps[d-1].first;
					disps[d-1].second = true;
				}else{
					actual -= disps[d-1].first;
					disps[d-1].second = false;
				}
			
				if(actual > c){				
					printf("Sequence %lld\n", seq);
					printf("Fuse was blown.\n");
					blown = true;
				}
			
				if(actual > max)
					max = actual;
			}
		}
		
		if(max <= c){				
			printf("Sequence %lld\n", seq);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %lld amperes.\n", max);
		}
		
		seq++;
		blown = false;
		actual = 0;
		max = 0;
		disps.clear();
		
		printf("\n");
	}
	
	return 0;
}
