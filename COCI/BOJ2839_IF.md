Baekjoon 2839
=============
설탕 배달  <https://www.acmicpc.net/problem/2839>
---------------
- - -
### 조건문
- - -
## 코드 설명
- 5kg 포대와 3kg 포대가 있고 무조건 나누어 떨어져야 한다.
- 일단 5kg로 나누어 떨어지는지 검사한 뒤 3kg를 검사해줘야 한다.
1. 5로 나누었을 때 나누어떨어지거나 나머지가 3일 때
    - N을 5로 나눈 값을 더해준 뒤, 3으로 나눈 값을 더해준다.
2. 5로 나누었을 때 나머지가 1일 때
    - N을 5로 나눈 값에서 1을 뺀 값을 더해준 뒤, N에 5를 더해준 뒤 3으로 나눈 값을 더해준다.
3. 5로 나누었을 때 나머지가 2일 때
    - N이 7이라면 포대에 옮겨 담을 수 없다.
    - N이 12라면 3kg 포대 4개에 담을 수 있다.
    - N이 17이라면 5kg 포대 1개와 3kg 포대 4개에 담을 수 있다.
4. 5로 나누었을 때 나머지가 4일 때
    - N이 4이라면 포대에 옮겨 담을 수 없다.
    - N이 9라면 3kg 포대 3개에 담을 수 있다.
    - N이 14이라면 5kg 포대 1개와 3kg 포대 3개에 담을 수 있다.
- 위처럼 조건문을 코드로 옮기면 된다.
