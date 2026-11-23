/*
 * Problem Name: Left Rotation
 * Problem Link: https://www.hackerrank.com/contests/rait-a-thon/challenges/array-left-rotation/problem
 * Platform: HackerRank
 * Difficulty:
 * Topics:
 * Date Solved: 2026-11-23
 * Notes: submited on vjudge
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    int r = d % n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = r; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    for (int i = 0; i < r; i++)
    {
        cout << v[i]<<" ";
    }
}