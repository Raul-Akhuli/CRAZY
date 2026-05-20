# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(){

	int n, exp;
	cin >> n >> exp;

	vector <pair<int, int>> monster;
	
	vector <int> pow(n);
	for(int i = 0; i < n; i++){
		cin >> pow[i];
	}
	
	for(int i = 0; i < n; i++){
	
		int bon;
		cin >> bon;
		
		monster.push_back({pow[i], bon});
	}
	
	sort(monster.begin(), monster.end());
	int count = 0;
	for(int i = 0; i < n; i++){
	
		if(monster[i].first <= exp){
		
			exp += monster[i].second;
			count++;
		}
		else{
			break;
		}
	}
	
	cout << "output: " << count << endl;
	
	return 0;
}







