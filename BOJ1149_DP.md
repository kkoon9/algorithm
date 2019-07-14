Baekjoon 1149
=============
RGB 거리  <https://www.acmicpc.net/problem/1149>
---------------
- - -
### 다이나믹 프로그래밍
- - -
## 함수 설명
- min : red, green, blue 중 최소값을 리턴하는 함수
- dp : 다이나믹 프로그래밍과 함수 min()을 사용하여 결과를 리턴하는 함수

## 풀이 방법
- red에는 green과 blue 중 작은 값에 r을 더해준다.
- green에는 red와 blue 중 작은 값에 g을 더해준다.
- blue에는 red와 green 중 작은 값에 b를 더해준다.
- 그러고 나서 min(a,b,c)함수를 사용해 최소값을 출력한다.

## 주의사항
- 삼항 연산자를 사용할 때 괄호를 사용하자!
- R에 green과 blue 중 작은 값을 더해주고 싶다.  
R = green < blue ? green : blue + R;    
위와 같은 코드로 작성하면 green이 blue보다 크면 blue + R이 들어가게 된다.
- 그러므로  
R = (green < blue ? green : blue) + R;  
로 써야한다.
