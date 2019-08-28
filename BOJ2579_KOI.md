Baekjoon 2579
=============
계단오르기  <https://www.acmicpc.net/problem/2579>
---------------
- - -
### 다이나믹 프로그래밍을 사용하자.
- - -
## 첫 번째 접근
- n-3까지만 구하고 n-2 n-1 n을 따로 더해주려고 했다.
~~~cpp	
	memo[1] = input[1];
	memo[2] = input[1] + input[2];
	for (int i = 3; i <= n-3; i++) {
		memo[i] = memo[i-1]; // OOX
		if (memo[i] < memo[i - 2] + input[i]) {
			memo[i] = memo[i - 2] + input[i]; // OXO
			flag = 1;
		}
		if (memo[i] < memo[i - 3] + input[i - 1] + input[i]) {
			memo[i] = memo[i - 3] + input[i - 1] + input[i]; // XOO
			flag = 2;
		}
		if (memo[i] == memo[i - 1])
			flag = 0;
	}
	memo[n] = memo[n - 3] + input[n];
	if (flag == 2) 
		memo[n] += input[n - 1];
	else {
		if (input[n - 2] > input[n - 1])
			memo[n] += input[n - 2];
		else
			memo[n] += input[n - 1];
	}
	cout << memo[n] << '\n';
	return 0;
}
~~~
- 반례 : 10 20 15 25 10 20일 때
- 20 15 10 20을 가져가서 최대값이 안나온다.
## 두 번째 접근
- n-1까지 구하고 flag값에 따라 처리
~~~cpp	
	memo[1] = input[1];
	memo[2] = input[1] + input[2];
	for (int i = 3; i <= n-1; i++) {
		memo[i] = memo[i-1]; // OOX
		if (memo[i] < memo[i - 2] + input[i]) {
			memo[i] = memo[i - 2] + input[i]; // OXO
			flag = 1;
		}
		if (memo[i] < memo[i - 3] + input[i - 1] + input[i]) {
			memo[i] = memo[i - 3] + input[i - 1] + input[i]; // XOO
			flag = 2;
		}
		if (memo[i] == memo[i - 1])
			flag = 0;
	}
	memo[n] = input[n];
	if (flag == 2) {
		if (input[n - 1] > input[n - 2])
			memo[n] += memo[n - 1] - input[n - 2];
		else
			memo[n] += memo[n - 2];
	}
	else
		memo[n] = memo[n - 1] + input[n];
	cout << memo[n] << '\n';
	return 0;
}
~~~
- 반례 : OOX가 나올 수가 없다.
- X라는게 있을 수가 없다. 문제를 잘못 이해함.
## 코드 설명
- memo[i][1]은 계단을 건너뛴 합을 대입한다.  
ex) memo[3][1]은 1번째 계단 O 2번째 계단 X 3번째 계단 O
- memo[i][2]은 계단을 연속적으로 밟은 합을 대입한다.  
ex) memo[3][2]은 1번째 계단 X 2번째 계단 O 3번째 계단 O
- memo[i][1]은 memo[i-2][1]과 memo[i-2][2]중 최대값을 구해 input[i]를 더해준다.
- memo[i][2]은 memo[i-1][1]에 input[i]를 더해준다.
