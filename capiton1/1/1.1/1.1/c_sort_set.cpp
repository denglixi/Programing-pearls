#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	int i;
	while (cin >> i) {
		s.insert(i);
	}
	set<int>::iterator j = s.begin();
	while (j != s.end()) {
		cout << *j++ << endl;
	}


}