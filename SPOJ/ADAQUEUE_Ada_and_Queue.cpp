/*
 * Problem Name: Ada and Queue
 * Problem Link: https://www.spoj.com/problems/ADAQUEUE/en/
 * Platform: SPOJ
 * Problem ID: ADAQUEUE
 * Difficulty: Medium
 * Topics: queue
 * Date Solved: 2026-11-25
 * Starred: yes
 * Notes: good trick using 2 vectors to mask the reverse input with index 0,1
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
    int q;
    deque<int>dq;
    bool isreversed = 0;
    cin >> q;
    while (q--)
    {
        string cmd;
        int n;
        cin >> cmd;
        vector<string> v1 = { "front","back"};
        vector<string>  v2 = { "toFront","push_back"};
        if (cmd == v1[isreversed])
        {
            if (!dq.empty())
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else cout << "No job for Ada?\n";
        }
        if (cmd == v1[!isreversed])
        {
            if (!dq.empty())
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else cout << "No job for Ada?\n";
        }
        if (cmd == v2[isreversed])
        {
            cin >> n;
            dq.push_front(n);
        }
        if (cmd == v2[!isreversed])
        {
            cin >> n;
            dq.push_back(n);
        }
        if (cmd == "reverse") isreversed = !isreversed;
        if (dq.empty())isreversed = 0;
    }
    return 0;
}
