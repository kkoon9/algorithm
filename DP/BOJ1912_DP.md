Baekjoon 1912
=============
연속합  <https://www.acmicpc.net/problem/1912>
---------------
- - -
### 다이나믹 프로그래밍
- - -
## 첫 번째 접근
- memo[i]가 마이너스면 0으로 초기화되는 코드를 짰다.
~~~cpp
#include <iostream>
using namespace std;
long long memo[100001];
int input[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i <= n; i++) {
		memo[i] = memo[i-1];
		if (memo[i] + input[i] < 0)
			memo[i] = 0;
		if (memo[i] < memo[i] + input[i])
			memo[i] += input[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < memo[i])
			ans = memo[i];
	}
	cout << ans << '\n';
	return 0;
}
~~~
- 반례 : 모든 수가 마이너스면 틀리게 나온다.
## 두번째 접근
- memo[i]가 마이너스가 되면 memo[i]에 input[i]를 대입해준다.
~~~cpp
#include <iostream>
using namespace std;
long long memo[100001];
int input[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> input[i];
	for (int i = 1; i <= n; i++) {
		memo[i] = memo[i-1];
		if (memo[i] < 0)
			memo[i] = input[i];
		else
			memo[i] += input[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < memo[i])
			ans = memo[i];
	}
	cout << ans << '\n';
	return 0;
}
~~~
- 반례) ans가 0이면 memo에 저장되어 있는 수가 모두 음수면 0을 출력한다.
- ans에 0이 아닌 memo[1] 값을 대입해줘야 한다.
## 변수 설명
- memo : 최대합을 저장하는 배열
- input : 입력값을 담는 배열
- n : input 변수
- ans : output 변수
## 코드 설명
- memo[i]에 memo[i-1] 값을 대입하고 memo[i]가 음수인지 조사한다.
- 음수면 input[i]를 대입해주고 양수면 더해준다.
## 기억해야 할 것
- ans 초기값 조심
