# Problem Solving Solutions

My accepted competitive programming solutions, written in C++.

## Structure

Solutions are stored in one folder per platform:

| Folder        | Platform                                       |
|---------------|------------------------------------------------|
| `Codeforces/` | [Codeforces](https://codeforces.com)           |
| `AtCoder/`    | [AtCoder](https://atcoder.jp)                  |
| `LeetCode/`   | [LeetCode](https://leetcode.com)               |
| `CSES/`       | [CSES Problem Set](https://cses.fi/problemset) |
| `Other/`      | Any other judge                                |

Folders for other judges (CodeChef, SPOJ, Kattis, VJudge, ...) are created automatically.

**Browse by topic or difficulty:** [Index/BY_TOPIC.md](Index/BY_TOPIC.md) · [Index/BY_DIFFICULTY.md](Index/BY_DIFFICULTY.md) · [Index/BY_PLATFORM.md](Index/BY_PLATFORM.md)

**File naming:** `<ProblemID>_<Problem_Name>.cpp`, for example `Codeforces/4A_Watermelon.cpp`
or `LeetCode/0001_Two_Sum.cpp`.

Every file starts with a header:

```cpp
/*
 * Problem Name: Watermelon
 * Problem Link: https://codeforces.com/problemset/problem/4/A
 * Platform: Codeforces
 * Problem ID: 4A
 * Difficulty: 800
 * Topics: math, brute force
 * Date Solved: 2026-11-23
 * Notes: ...
 */
```

## How solutions get here

I solve problems in a Visual Studio practice project. When a submission is accepted,
[CP Solution Saver](https://github.com/MostafaSamyFayez/CP-Solution-Saver) reads the header,
looks the problem up (name, rating, tags), saves the file here, updates the progress
section below and the indexes, then commits and pushes.

<!-- CPSAVER:STATS:START -->
## Progress

**5** problems solved  (last updated 2026-11-25)

Browse: [by platform](Index/BY_PLATFORM.md) | [by topic](Index/BY_TOPIC.md) | [by difficulty](Index/BY_DIFFICULTY.md)

| Platform | Solved |
|---|---|
| SPOJ | 3 |
| HackerRank | 2 |

**Top topics:** queue (2) · stack (2) · stl (1)

**By level:** Easy 3 · Medium 2

### Starred

| # | Problem | Platform | Difficulty | Level | Topics | Solution | Solved |
|---|---|---|---|---|---|---|---|
| 1 | ★ [Left Rotation](https://www.hackerrank.com/contests/rait-a-thon/challenges/array-left-rotation/problem) | HackerRank | Easy | Easy | stl | [Left_Rotation.cpp](HackerRank/Left_Rotation.cpp) | 2026-11-23 |
| 4 | ★ [Easy Queue](https://www.spoj.com/problems/QUEUEEZ/en/) | SPOJ | Easy | Easy | queue | [QUEUEEZ_Easy_Queue.cpp](SPOJ/QUEUEEZ_Easy_Queue.cpp) | 2026-11-25 |

### Recently solved

| # | Problem | Platform | Difficulty | Level | Topics | Solution | Solved |
|---|---|---|---|---|---|---|---|
| 5 | [Easy Stack](https://www.spoj.com/problems/STACKEZ/en/) | SPOJ | Easy | Easy | stack | [STACKEZ_Easy_Stack.cpp](SPOJ/STACKEZ_Easy_Stack.cpp) | 2026-11-25 |
| 4 | ★ [Easy Queue](https://www.spoj.com/problems/QUEUEEZ/en/) | SPOJ | Easy | Easy | queue | [QUEUEEZ_Easy_Queue.cpp](SPOJ/QUEUEEZ_Easy_Queue.cpp) | 2026-11-25 |
| 3 | [Ada and Queue](https://www.spoj.com/problems/ADAQUEUE/en/) | SPOJ | Medium | Medium | queue | [ADAQUEUE_Ada_and_Queue.cpp](SPOJ/ADAQUEUE_Ada_and_Queue.cpp) | 2026-11-25 |
| 2 | [Balanced Brackets](https://www.hackerrank.com/contests/master/challenges/balanced-brackets/problem) | HackerRank | Medium | Medium | stack | [Balanced_Brackets.cpp](HackerRank/Balanced_Brackets.cpp) | 2026-11-25 |
| 1 | ★ [Left Rotation](https://www.hackerrank.com/contests/rait-a-thon/challenges/array-left-rotation/problem) | HackerRank | Easy | Easy | stl | [Left_Rotation.cpp](HackerRank/Left_Rotation.cpp) | 2026-11-23 |
<!-- CPSAVER:STATS:END -->
