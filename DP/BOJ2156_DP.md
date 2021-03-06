Baekjoon 2156
=============
포도주 시식 <https://www.acmicpc.net/problem/2156>
---------------
### 다이나믹 프로그래밍
- - -
## 첫 번째 접근
- n=3일 때 n=4일 때까지 경우의 수를 따져보았다.
- 경우의 수가 3개밖에 없다고 착각하였다.
~~~cpp
	memo[1][0] = memo[1][1] = input[1];
	memo[2][0] += memo[1][0] + input[2];
	memo[2][2] = input[2];
	memo[2][1] = memo[1][1];
    // memo[3][0] = OOX, flag = 0
    // memo[3][1] = OXO, flag = 1
    // memo[3][2] = XOO, flag = 2
	for (int i = 3; i <= n; i++) {
		if (flag1 == 2) {
			memo[i][0] = memo[i - 1][0];
			flag1 = 0;
		}
		else {
			memo[i][0] += memo[i - 1][0] + input[i];
			flag1++;
		}
		if (flag2 == 2) {
			memo[i][1] = memo[i - 1][1];
			flag2 = 0;
		}
		else {
			memo[i][1] += memo[i - 1][1] + input[i];
			flag2++;
		}
		if (flag3 == 2) {
			memo[i][2] = memo[i - 1][2];
			flag3 = 0;
		}
		else {
			memo[i][2] += memo[i - 1][2] + input[i];
			flag3++;
		}
	}
~~~
- 반례) n=5일 때 OXOXO인 경우를 찾을 수 없다. ex) 100 1 100 1 100
- n=5일 때까지만 생각해봤어도 충분히 찾을 수 있는 반례였다.
- 좀 더 깊게 고민해보자.

## 코드 설명
- 경우의 수가 3가지인 것은 맞았다.
1. memo[i]가 memo[i-1]일 때  OOX
2. memo[i]가 memo[i-2] + input[i]일 때 OXO
3. memo[i]가 memo[i-3] + input[i-1] + input[i] 일 때 XOO
- 위에 3가지로 나눌 경우 OXOXO 반례도 잡을 수 있다.
