Samsung Expert Academy 7810
=============
승현이의 질문  <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWslG2zqFQcDFASyh>
---------------
## 변수 설명
- t : testcase (input)
- fr, mid, en : front, mid, end index 이분 탐색에 쓰일 인덱스 변수
- v : input을 담을 벡터
- count : H를 담는 임시 변수
- answer : 정답
## 코드 설명
- 테스트케이스가 12개 중 8개 맞은 코드
1. 입력을 받을 때마다 N과 input을 체크하여 answer++를 시켜준다.
2. answer가 N과 같으면 answer를 출력한다.
3. (N-1) ~ 0까지 이분 탐색을 통해 H에 적합한지 구해낸다.
## 기억해야 할 것
- 