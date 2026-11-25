/*
 * Problem Name: Balanced Brackets
 * Problem Link: https://www.hackerrank.com/contests/master/challenges/balanced-brackets/problem
 * Platform: HackerRank
 * Difficulty: Medium
 * Topics: stack
 * Date Solved: 2026-11-25
 * Starred: yes
 * Notes: can also be submitted on https://vjudge.net/problem/HackerRank-balanced-brackets
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int is_match(char open, char close)
{
    if ((open == '{') && (close == '}'))return 1;
    if ((open == '(') && (close == ')'))return 1;
    if ((open == '[') && (close == ']'))return 1;
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        stack<char>st;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (!st.empty())
            {
                if (is_match(st.top(), s[i])) st.pop();
                else st.push(s[i]);
            }
            else
            {
                st.push(s[i]);
            }
        }
        if (st.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

/*
//hacker rank submmision code
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int is_match(char open, char close)
{
    if ((open == '{') && (close == '}'))return 1;
    if ((open == '(') && (close == ')'))return 1;
    if ((open == '[') && (close == ']'))return 1;
    return 0;
}
string isBalanced(string s) {
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {
        if (!st.empty())
        {
            if (is_match(st.top(), s[i])) st.pop();
            else st.push(s[i]);
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty()) return "YES";
    else return "NO";
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
*/