#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N], b[N];
int n;
void merge_sort(int a[], int l, int r) {
	if (l >= r)return;
	int mid = l + r >> 1;
	merge_sort(a, l, mid),
		merge_sort(a, mid + 1, r);
	int cnt = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
		if (a[i] <= a[j])b[cnt++] = a[i++];
		else b[cnt++] = a[j++];
	while (i <= mid) {
		b[cnt++] = a[i++];
	}
	while (j <= r) {
		b[cnt++] = a[j++];
	}
	for (i = l, j = 0; i <= r; j++, i++)a[i] = b[j];
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	merge_sort(a, 0, n - 1);
	for (int i = 0; i < n; i++)cout << a[i] << " ";
	return 0;
}