Baekjoon 1406
=============
에디터  <https://www.acmicpc.net/problem/1406>
---------------
- - -
### 리스트와 iterator를 이용하여 풀어보자
- - -
## 변수 설명
- editor : string 변수인 input을 리스트 형태로 변환받는 리스트 컨테이너
- cursor : 커서의 위치를 나타내는 iterator
- cmd : L, D, B, P 총 4개의 명령을 입력 받을 char형 변수
## 함수 설명
- print : list에 있는 값을 출력하는 함수
## 풀이 방법
- input을 입력 받은 뒤 editor에 넣어준다.
- editor.end()에 iterator를 cursor에 넣어준다.
- 각 cmd를 입력받아 그 명령을 수행한다.
- 최종적으로 editor에 있는 변수들을 차례로 출력해준다.
