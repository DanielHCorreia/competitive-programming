//source: http://codeforces.com/problemset/problem/551/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, points, j, classifi[2000], group = 1, last;
	vector<pair<int, int> > rank;
	pair<int, int> key;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> points;
		
		rank.push_back(make_pair(points, i)); //rank composed of (points, player id)
	}
	
	for(int i = 1; i < n; i++){ //insertion sort decreasing
		key = rank[i];
		
		j = i - 1;
		
		while(j >= 0 && rank[j].first < key.first){
			rank[j + 1] = rank[j];
			j--;
		}
		
		rank[j + 1] = key;
	}
	
	last = rank[0].first; //clustering iterator
	classifi[rank[0].second] = position; //classification array
	
	for(int i = 1; i < n; i++){ //grouping
		if(last != rank[i].first) //if last point isn't equal to actual, then change group
			group = i + 1;
			
		classifi[rank[i].second] = group;
		last = rank[i].first;
	}
	
	for(int i = 0; i < n; i++){
		cout << classifi[i];
		if(i != n - 1)
			cout << " ";
	}

	return 0;
}
