#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
vector<int> b;

vector<int> append(vector<int> a, vector<int> b);

int main() {
	cout << "Enter vector a: ";
	for (int i = 1; i < 5; i++) {
		int input;
		cin >> input;
		a.push_back(input);
	}
	cout << "Enter vector b: ";
	for (int i = 1; i <= 5; i++) {
		int input;
		cin >> input;
		b.push_back(input);
	}
	vector<int> append(vector<int> a, vector<int> b);
	
	for (auto it : append(a, b)) {
		cout << it << " ";
	}
}
vector<int> append(vector<int> a, vector<int> b) {
	int siz = b.size();
	while (siz) {
		a.push_back(b[b.size() - siz]);
		siz--;
	}
	return a;
}