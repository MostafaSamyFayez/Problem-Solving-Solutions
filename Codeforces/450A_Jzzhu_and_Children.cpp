/*
 * Problem Name: Jzzhu and Children
 * Problem Link: https://codeforces.com/problemset/problem/450/A
 * Platform: Codeforces
 * Problem ID: 450A
 * Difficulty: 1000
 * Level: Easy
 * Topics: stl, implementation
 * Date Solved: 2026-11-25
 * Notes:
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, result=0, x = 1;
    deque<int>dq;
    deque<int>order;
    cin >> n >> m;
    while (n--)
    {
        int a;
        cin >> a;
        dq.push_back(a);
        order.push_back(x++);
    }
    while (!order.empty()) 
    {
        if (dq.front() > m)
        {
            dq.push_back(dq.front() - m);
            dq.pop_front();
            order.push_back(order.front());
            order.pop_front();
        }
        else
        {
            result = order.front();
            dq.pop_front();
            order.pop_front();

        }
    }
    cout << result;
    return 0;
}
