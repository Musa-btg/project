#include <iostream>
#include <random>
using namespace std;
int main(){
	mt19937 gen(random_device{}());
	uniform_int_distribution<int> distrib(1, 100);
	int a = distrib(gen);
	/*cout << a;*/
	int i;
	cin >> i;
	while (i != a) {
		if ((i < a + 10) && (i > a - 10))
			cout << "warm";
		cin >> i;
	}
	cout << "guessed";
	return 0;
}