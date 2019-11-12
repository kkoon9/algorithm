Samsung Expert Academy 2819
=============
격자판의 숫자 이어 붙이기 <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7I5fgqEogDFAXB>
---------------
- - -
### dfs 문제
### 조건 변수를 매개변수에 넣어줌으로써 문제를 해결한다.
- - -
## 변수 설명
- arr : pair를 가지는 vector 컨테이너, first에는 숫자, second에는 동서남북의 각 인덱스가 저장되어 있는 크기가 4인 배열이 들어간다.
- output : dfs를 통해 7자리가 정해지면 들어가는 set 컨테이너
## 함수 설명
- pow : 10의 제곱 생성 함수
- move : 7자리 숫자를 구하여 output에 넣어주는 함수
- move 함수 매개변수로는 arr와 arr의 second 배열, count, result가 있다.
## 코드 설명
- 4x4 배열에서 index를 벗어나는 부분을 -1로 채워준다.
- arr index, 0에서 15까지 move 함수를 시작해준다.(dfs)
- move 함수에 들어갈 때마다 count가 증가하는데 count가 7이 되면 함수는 종료되고 output에 result를 추가해준다.
- set 컨테이너가 중복을 제거해주기 떄문에 set 컨테이너에 넣어준다.

## 기억해야 할 것
- 4x4 격차판에 벗어나는 인덱스에는 종료될 수 있는 쓰레기값(ex -1)을 넣어준다.
