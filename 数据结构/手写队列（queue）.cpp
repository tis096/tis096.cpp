#include<iostream>
using namespace std;
const int N = 1e5;
int q[N] = {};
int lnt = 0;
int head = 0;
void push(int q[], int x) {
    q[lnt++] = x;
}
void pop(int q[]) {
    if (lnt == head)
    {
        cout << "No-queue" << endl;
        return;
    }
    else
    {
        head++;
    }
}
void query(int q[]) {
    if (lnt == head)
    {
        cout << "No-queue" << endl;
        return;
    }
    else
    {
        cout << q[head] << endl;
    }
}
void size(int q[]) {
    cout << lnt - head << endl;
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        switch (x) {
        case 1:int d; cin >> d; push(q, d); break;
        case 2:pop(q); break;
        case 3:query(q); break;
        case 4:size(q); break;
        }
    }
    return 0;
}
