Samsung Expert Academy 2805
=============
농작물 수확하기  <https://www.swexpertacademy.com/main/talk/solvingClub/problemView.do>
---------------
- - -
### list을 이용하여 문제를 해결하였다.
- - -
## 변수 설명
- t : testcase (input)
- N : 농장의 크기 (input)
- li : 수확할 수 있는 농작의 index를 저장하는 리스트
## 함수 설명
- CharToInt : char형을 int형으로 변환시키는 함수
## 코드 설명
- N을 입력받고  N/2을 li에 넣어준다.
- N만큼 string 변수를 받아준다.
- li에 있는 index를 가리키는 값을 모두 result에 더해준다.
- for문 변수 i가 N/2보다 작으면 N/2 - (i+1)과 N/2 -(i-1)을 넣어준다.
- for문 변수 i가 N/2보다 크면 pop_back()을 2번 해준다.
## 기억해야 할 것
- list와 iterator활용
