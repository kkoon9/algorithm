Baekjoon 2225
=============
합분해 <https://www.acmicpc.net/problem/2225>
---------------
### 다이나믹 프로그래밍을 사용하자.
- - -
## 변수 설명
- memo : 정수 K개를 더해서 그 합이 N이 되는 경우의 수를 담는 2차원 배열
- N : input(최대 200)
- K : input(최대 200)
- mod : 1,000,000,000
## 코드 설명
- memo[1][k] 는 k이다.  
k = 3 일 때, 경우의 수 (1,0,0), (0,1,0), (0,0,1)
- memo[n][1] 은 모두 1이다.
- memo[n][k]는 memo[n][k-1] + memo[n-1][k] 이다.  
n = 2, k = 2일 때 (2,0), (0,2), (1,1) 3개이다.  
n = 2, k = 3일 때 (2,0,0), (0,2,0), (0,0,2), (1,1,0), (1,0,1), (0,0,1) 6개, memo[2][2] = 3,  memo[1][3] = 3
## 기억해야 할 것
- 문제 푸는 방법이 생각나지 않을 때에는 무식한 방법으로 4~5단계까지는 써보면 아이디어가 떠오를 수 있다.
