Dynamic Programming (이하 DP)
==============
## DP이란?
- 큰 문제를 작은 문제로 나누어서 푸는 알고리즘이다.
- 두 가지 속성을 만족해야 다이나믹 프로그래밍으로 문제를 풀 수 있다.  
1. Overlapping Subproblem
2. Optimal Substructure
## 1. Overlapping Subproblem
- 분할정복과 같이, DP은 subproblem들의 솔루션들을 결합한다.
- DP은 주로 같은 subproblem들의 솔루션이 계속해서 필요할 때 사용된다. - - DP에서 subproblem들의 복잡한 솔루션들을 한 테이블에 저장함으로써 재연산을 하지 않는다. 
- 그래서 DP은 같은 subproblem들이 없다면 사용하기 힘들다.  
반복할 필요가 없다면 솔루션을 저장할 필요가 없기 때문이다. 
- 재귀로 풀어지는 많은 subproblem들로 이루어진 유명한 문제로는 피보나치 수가있다. 
~~~cpp
int fib(int n)
{
   if ( n <= 1 )
      return n;
   return fib(n-1) + fib(n-2);
}
~~~
## 2. Optimal Substructure
- 어떤 한 문제의 정답은 일정하다.  
ex) 어떤 문제이든 4번째 피보나치( fib(4) ) 수는 항상 같다.
- subproblem들의 최적화된 솔루션으로 문제의 최적화된 솔루션을 구할 수 있다. 
- 예를 들어 최단경로 문제를 살펴보자.  
 만약 노드 x가 원시노드 u와 목적지노드 v 사이의 최단 경로에 놓여진다면  u에서 v까지의 최단경로는 u에서 x까지의 최단경로와 x에서 v까지의 최단경로의 조합이 될 것이다. 
- 전체-쌍 최단경로 문제의 알고리즘이 DP의 전형적인 예이다.
- ex) 플로이드-워셜 알고리즘, 벨만-포드 알고리즘
- 벨만-포드 알고리즘 : 음의 가중치까지 판별해내는 최단 경로 알고리즘이다. 
- 플로이드-워셜 알고리즘 : 한 시작점에서 시작점을 제외한 모든 정점까지의 거리를 구하는 벨만-포드 알고리즘과 다르게 모든 정점 쌍에 대해 둘 사이의 최단 거리를 구한다.

## 값을 저장하고 그 값을 재사용하는 방법
1. Memoization(하향식) = Top-Down
2. Tabulation(상향식) = Bottom-Up
## 1. Memoization
- 솔루션을 계산하기 전에 탐색 테이블에서 그 반환 값을 탐색한다.
- subproblem들의 솔루션을 필요로 할 때마다 먼저 탐색 테이블에서 탐색한다.
- 계산된 값이 없다면 값을 계산하고 결과를 탐색 테이블에 삽입하여 이후 재사용 가능하게 된다.
- n ~ 1 까지
## 2. Tabulation
- 상향식으로 만든 테이블에서 마지막 값을 솔루션으로서 반환한다.
- 1 ~ n 까지
## 어떤 방법이 더 빠를까?
- Tabulation(상향식, Bottom-UP) 방법이 더 빠르다.
- BOJ1463를 참고하자.  
[BOJ1463](https://github.com/kkoon9/algorithm/blob/master/BOJ1463.md)