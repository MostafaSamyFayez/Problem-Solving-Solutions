/*
 * Problem Name: Array
 * Problem Link: https://codeforces.com/problemset/problem/300/A
 * Platform: Codeforces
 * Problem ID: 300A
 * Difficulty: 1100
 * Level: Easy
 * Topics: brute force, constructive algorithms, implementation
 * Date Solved: 2026-11-25
 * Notes: tricky problem
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int>pos, neg, zero, temp_neg;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x < 0)temp_neg.push_back(x);
        else if (x > 0)pos.push_back(x);
        else zero.push_back(x);
    }
    neg.push_back(temp_neg.back());
    temp_neg.pop_back();
    if ((temp_neg.size() % 2) && (temp_neg.size() > 0))
    {
        zero.push_back(temp_neg.back());
        temp_neg.pop_back();
    }
    for (auto a : temp_neg)pos.push_back(a);
    // result
    cout << neg.size() << " ";
    for (auto a : neg)cout << a << " ";
    cout << endl << pos.size() << " ";
    for (auto a : pos)cout << a << " ";
    cout << endl << zero.size() << " ";
    for (auto a : zero)cout << a << " ";
    return 0;
}
