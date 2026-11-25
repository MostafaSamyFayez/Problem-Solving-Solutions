/*
 * Problem Name: Easy Queue
 * Problem Link: https://www.spoj.com/problems/QUEUEEZ/en/
 * Platform: SPOJ
 * Problem ID: QUEUEEZ
 * Difficulty: Easy
 * Topics: Queue
 * Date Solved: 2026-11-25
 * Notes:
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    queue<int> q;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if (op==1)
        {
            int n;
            cin >> n;
            q.push(n);

        }
        else if (op==2)
        {
            if (!q.empty()) q.pop();
        }
        else
        {
            if (!q.empty())cout << q.front()<<"\n";
            else cout << "Empty!\n";
        }
    }
    return 0;
}
