Samsung Expert Academy 4613
=============
러시아 국기 같은 깃발  <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWQl9TIK8qoDFAXj>
---------------
- - -
### 동적 계획법(Dynamic Programming)을 사용하는 문제
### 흰색(W), 파란색(B), 빨간색(R) 칠하는 경우를 더해준다.
### 가장 작은 값을 더해주며 최소값을 출력해준다.
- - -
## 변수 설명
- result1 : W 칠한 결과
- result2 : B 칠한 결과
- result3 : R 칠한 결과
- x : W, B, R을 입력 받기위한 변수
- W, B, R : 각 줄에 있는 W, B, R의 개수

## 코드 설명
- 24줄 ~ 49줄이 이 코드의 핵심이다.
- 국기가 N행이라 할 때, 1, 2, N-1, M행에서만 조건문을 걸어 처리해주고 나머지는 동일하다.     
### 1. 1 행 : result1, result2, result3 모두 흰색으로 칠한다.
### 2. 2 행 : result1은 흰색, result2, result3은 파란색으로 칠한다.
### 3. N-1 행 : result1와 result2는 파란색. result3은 빨간색으로 칠한다. 
- result3는 그 전 결과 result2와 result3를 비교하여 더 작은 곳에 더해준다. 
- result2는 그 전 결과 result1와 result2를 비교하여 더 작은 곳에 더해준다.
### 4. M 행 : result1, result2, result3 모두 빨간색으로 칠한다.
### 5. 그 외 헹 : result1는 흰색, result2은 파란색, result3은 빨간색으로 칠한다.
- result3는 그 전 결과 result2와 result3를 비교하여 더 작은 곳에 더해준다. 
- result2는 그 전 결과 result1와 result2를 비교하여 더 작은 곳에 더해준다.
