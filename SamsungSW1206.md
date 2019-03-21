Samsung Expert Academy 1206
=============
View  <https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE>
---------------
- - -
### 완전 탐색으로 풀어보자.
- - -
## 변수 설명
- L_max : i-2가 기준일 때 i-4, i-3 중 큰 값
- R_max : i-2가 기준일 때 i-1, i 중 큰 값
- LRmax : L_max, R_max 중 큰 값
- input : 각 빌딩의 높이를 가지는 배열
- n : 빌딩의 개수
- result : 조망권이 확보된 층의 개수(output)
## 함수 설명
- max : 두 매개변수 중 큰 값을 리턴하는 함수
## 코드 설명
- 앞에 두개와 뒤에 두개는 층이 없다.
- 즉, n이 4 이하이면 출력값이 0이다.
- for문 i는 5부터 반복한다.
- L_max와 R_max와 LRmax를 구해준다.
- LRmax와 input[i-2]를 비교하여 input[i-2]가 더 크면 input[i-2] - LRmax를 result에 더해준다.
## 기억해야 할 것
- n이 4보다 작거나 같으면 출력값이 0임을 염두하여 프로그램을 짜자.
