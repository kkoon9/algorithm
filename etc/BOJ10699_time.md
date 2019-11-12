Baekjoon 10699
=============
오늘 날짜  <https://www.acmicpc.net/problem/10699>
---------------
- - -
### time
- - -
## 변수 설명
- curr_time : time_t 타입 변수
- curr_tm : 시간 표시를 위한 tm 타입 구조체
## 코드 설명
- time 함수는 1970년 1월 1일 이후 몇초가 지났는지 계산해준다.
- localtime 함수를 사용하여 지역 시간으로 바꿔준다.
- tm_year + 1900 : 년
- tm_mon + 1 : 월
- tm_mday : 일
