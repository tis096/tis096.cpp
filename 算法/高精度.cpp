#include<iostream>
using namespace std;
int main() {
	string a, b;
	int a1[210] = {}, a2[210] = {}, a3[210] = {};
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		a1[a.size() - i - 1] = a[i] - '0';
	}
	for (int i = 0; i < b.size(); i++)
		a2[b.size() - i - 1] = b[i] - '0';
	int len = max(a.size(), b.size());
	for (int i = 0; i < len; i++)
		a3[i] = a1[i] + a2[i];
	for (int i = 0; i < len; i++) {
		if (a3[i] >= 10) {
			a3[i + 1]++;
			a3[i] %= 10;
		}
	}
	if (a3[len] == 0) {
		for (int i = len - 1; i >= 0; i--)
			printf("%d", a3[i]);
	}
	else {
		for (int i = len; i >= 0; i--)
			printf("%d", a3[i]);
	}
	return 0;
}