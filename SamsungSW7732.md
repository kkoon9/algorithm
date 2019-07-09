Samsung Expert Academy 7732
=============
시간 개념  <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWrDLM0aRA8DFARG>
---------------
## 변수 설명
- t : testcase (input)
- pre_time : 현재 시각(input)
- pro_time : 약속 시각(input)
- answer_int[3] : 약속 시각 - 현재 시각
- check : 0~9가 input에 있으면 True, 없으면 False 
- answer : 정답
## 코드 설명
1. 약속 시각에서 현재 시각을 뺴준다. (answer_int)
2. answer_int가 음수일 경우
- 초 단위가 음수일 경우 60을 더해준 뒤 분 단위--
- 분 단위가 음수일 경우 60을 더해준 뒤 시 단위--
- 시 단위가 음수일 경우 24을 더해준다.
## 기억해야 할 것
- 현재 시각과 약속 시각에 따라 결과가 달라지므로 잘 생각해보자.
