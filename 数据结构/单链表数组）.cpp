#include<iostream>

using namespace std;
const int N = 1e5 + 10;
int head;
int e[N], ne[N], idx;

void init() {
	head = -1;
	idx = 0;
}
void add_to_head(int k) {
	e[idx] = k;
	ne[idx] = head;
	head = idx;
	idx++;
}
void add(int now, int k) {
	e[idx] = k;
	ne[idx] = ne[now];
	ne[now] = idx;
	idx++;
}
void remove(int front) {
	ne[front] = ne[ne[front]];
}
int main() {
	init();
	add_to_head(1);
	add_to_head(2);
	add(2, 3);
	for (int i = head; i != -1; i = ne[i])cout << e[i] << endl;
	return 0;

}