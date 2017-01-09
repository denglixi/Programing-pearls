

#include<iostream>

#define SHIFT 5//sizeof(int)*8
#define MASK 0x1F   // (i & MASK) == (i % 32)
using namespace std;
int vector[100000];

void set(int i) {
	vector[i >> SHIFT] |= (1 << (i & MASK));
}
void clean(int i) {
	vector[i >> SHIFT] &= ~(1 << (i & MASK));
}
int test(int i) {
	// if bit i not seted , return 0
	// else return number
	return vector[i >> SHIFT] & (1 << (i & MASK));
}

int main() {
	int i;
	cin >> i;
	
}
