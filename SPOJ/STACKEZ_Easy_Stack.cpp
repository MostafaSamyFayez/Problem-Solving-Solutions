/*
 * Problem Name: Easy Stack
 * Problem Link: https://www.spoj.com/problems/STACKEZ/en/
 * Platform: SPOJ
 * Problem ID: STACKEZ
 * Difficulty: Easy
 * Topics: Stack
 * Date Solved: 2026-11-25
 * Notes:
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    stack<int> st;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if (op==1)
        {
            int n;
            cin >> n;
            st.push(n);

        }
        else if (op==2)
        {
            if (!st.empty()) st.pop();
        }
        else
        {
            if (!st.empty())cout << st.top()<<"\n";
            else cout << "Empty!\n";
        }
    }
    return 0;
}
