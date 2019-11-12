Samsung Expert Academy 7272
=============
안경이 없어!  <https://www.swexpertacademy.com/main/code/problem/problemDetail.do>
---------------
## 변수 설명
- t : testcase (input)
- str1,str2 : input
- hold_one : 구멍이 하나인 알파벳 배열 A, D, O, P, Q, R
- hold_two : B를 가지는 변수
- size_str1, size_str2 : input의 길이
- result : DIFF, SAME 둘 중 하나의 값을 가지는 output 변수 (초기값은 SAME)
- hole1, hole2 : str1[i], str2[i]의 구멍 개수
## 코드 설명
- SAME일 경우보다는 DIFF일 경우를 찾아주어서 break 시켜줬다.
### DIFF일 경우
1. str1과 str2의 길이가 다를 경우
2. 같은 index에 있는 알파벳의 구멍 개수가 다를 때
- 이런식으로 DIFF일 경우를 찾는다면 result를 DIFF로 바꿔준 뒤 for문을 break해준다.
## 기억해야 할 것
- 어떤식으로 코드를 짜야 더 빠를까 항상 생각하자.
