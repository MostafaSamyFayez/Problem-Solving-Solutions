# Problem Solving Solutions

My accepted solutions to competitive programming problems, written in C++.

## Structure

| Folder        | Platform                                   |
|---------------|--------------------------------------------|
| `Codeforces/` | [Codeforces](https://codeforces.com)       |
| `AtCoder/`    | [AtCoder](https://atcoder.jp)              |
| `LeetCode/`   | [LeetCode](https://leetcode.com)           |
| `CSES/`       | [CSES Problem Set](https://cses.fi/problemset) |
| `Other/`      | Any other judge                            |

Folders for other judges (SPOJ, VJudge, HackerRank) are created automatically the first time a solution from them is saved.

**File naming:** `<ProblemID>_<Problem_Name>.cpp` — for example `Codeforces/4A_Watermelon.cpp`.
When a platform has no short ID (e.g. LeetCode), the file is just `<Problem_Name>.cpp`.

Every file starts with a header comment:

```cpp
/*
 * Problem Name: Watermelon
 * Problem Link: https://codeforces.com/problemset/problem/4/A
 * Notes: math, brute force
 */
```

## How solutions get here

I solve problems in a Visual Studio practice project (`main.cpp`). After a submission is accepted,
`save_solution.bat` reads the header, copies the code into the right folder with the right name,
commits it, and pushes it to this repo.
