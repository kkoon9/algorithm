Samsung Expert Academy 4796
=============
의석이의 우뚝 선 산 
<https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWS2h6AKBCoDFAVT>
---------------
- - -
### 경우의 수 찾기
### 우뚝 선 산 왼쪽, 오른쪽의 개수를 곱해주면 경우의 수를 빠르게 찾을 수 있다.
- - -
## 변수 설명
- result1 : 우뚝 선 산이 포함되는 집합의 개수
- count1 : 우뚝 선 산 기준으로 왼쪽에 있는 산의 개수
- count2 : 우뚝 선 산 기준으로 오른쪽에 있는 산의 개수

## 코드 설명
- h1 < h2 < h3 > h4 > h5라고 할 때h3 앞에 올 수 있는 경우의 수 (h2), (h1, h2) 2가지이고, h3 뒤에 올 수 있는 경우의 수 (h4), (h4, h5) 2가지이다.
- 우뚝 선 산이 될 수 있는 구간이 될 경우의 수는 2 * 2 = 4가지이다. 
- (h2, h3, h4), (h2, h3, h4, h5), (h1, h2, h3, h4), (h1, h2, h3, h4, h5)
- 이런 식으로 우뚝 선 산 전후로 경우의 수가 몇 개인지 체크해 준 후 더해주면 된다.
- 이렇게 되면 O(N)로 시간 초과를 피할 수 있다.