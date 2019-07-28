Baekjoon 2493
=============
탑  <https://www.acmicpc.net/problem/2493>
---------------
- - -
## 첫 번째 접근
- 
## 변수 설명
- st : pair<int, int>를 갖는 스택 first : 탑의 높이, second : 탑의 위치
- N : 탑의 개수 (input)
- index_ps_val : 현재 탑의 높이 (input)
- i : 탑의 위치
## 코드 설명
- N만큼 index_ps_val를 입력받는다.
- st이 빌 때까지 반복문을 돌려준다.
- index_ps_val가 스택에 있는 top의 first보다 크면 st 원소 하나를 pop해준다.
- 스택에 있는 top의 first보다 작다면 스택의 top의 second를 출력해주고 반복문을 break시켜준다.
- 반복문을 빠져나온 뒤 st이 비어있으면 0을 출력해준다.
- st에 (index_ps_val, i)를 push해준다.
## 기억해야 할 것
- stack 활용 방법
