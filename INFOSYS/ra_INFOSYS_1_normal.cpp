#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n, exp;
	cin >> n;
	cin >> exp;
	
	vector <int> pow(n), bon(n);      // without specifying the size leads to access invalid indexes -> runtime error (segmentation fault)
	vector <bool> defeted(n, false);

	for(int i = 0; i < n; i++){
		cin >> pow[i];
	}
	
	for(int i = 0; i < n; i++){
		cin >> bon[i];
	}
	
	int count = 0;
	bool progress = true;

	while(progress){

		progress = false;

		for(int i = 0; i < n; i++){
		
			if(!defeted[i] && pow[i] <= exp){
				exp += bon[i];
				defeted[i] = true;
				count ++;

				progress = true;
			}
		}
	}
	cout << "output: " << count << endl;
	
	return 0;
}










