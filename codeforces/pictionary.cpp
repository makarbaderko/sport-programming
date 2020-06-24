#include <iostream>
#include <string.h>

using namespace std;

int gcd (int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else b = b % a;
    }
    return a + b;
}

int main() {
	//string first_line;
	//cin >> first_line;
	int m,n,q,a,b, min;
	cin >> m >> n >> q;
	int first[q] = {};
	int second[q] = {};
	int pair_gcds[q] = {};
	for (int i = 0; i < q-1; i++) {
		cin >> a >> b;
		first[i] = a;
		second[i] = b;
		pair_gcds[i] = gcd(a, b);
	}
	min = arr[0];
	for (int i = 0; i < q-1; i++){
		if (min > arr[i])
            min = arr[i];
	}


}