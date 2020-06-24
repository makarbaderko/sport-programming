#include <iostream>
#include <string.h>
using namespace std;

int module(int &num) {
	if (num > 0) {
		return num;
	} else if(num < 0) {
		return -num;
	} else {
		return 0;
	}
}
int main(){
	int a, b, ans;
	cin >> a;
	cin >> b;
	if (a - b == 1 || b - a == 1){
		ans = 0;
	}  else {
		ans = (a - b) / 2;
	}
	cout << module(ans) << "\n";
}