Math
==============
## 나머지 연산 Modular
- 컴퓨터의 정수는 저장할 수 있는 범위가 한정되어 있기 때문에, 답을 M으로 나눈 나머지를 출력하라는 문제가 등장한다.
- (A+B) mod M = ( (A mod M ) + (B mod M ) ) mod M
- (AXB) mod M = ( (A mod M ) X (B mod M ) ) mod M
- 나누기의 경우에는 성립하지 않는다.
- 뺄셈의 경우에는 먼저 mod 연산을 한 결과가 음수가 나올 수 있기 때문에 다음과 같이 해야 한다.  
- (A-B) mod M = ( (A mod M ) - (B mod M ) + M ) mod M  
[BOJ1463](https://github.com/kkoon9/algorithm/blob/master/BOJ10430.md)

## 최대공약수 GCD
- Greatest Common Divisor
- 두 수 A와 B의 최대공약수 G는 A와 B의 공통된 약수 중에서 가장 큰 정수이다.
- GCD를 구하는 가장 쉬운 방법 : 2부터 min(A,B)까지 모든 정수로 나누어 보는 법
- GCD가 1인 두 수를 서로소(Coprime)라고 한다.
~~~cpp
int g = 1;
for(int i=2; i<=min(A,B); i++){
    if(a % i ==0 && b % i == 0) {
        g= i;
    }
}
~~~
### 유클리드 호제법
- a를 b로 나눈 나머지를 r이라고 했을 때 GCD(a,b) = GCD(b,r)과 같다.
- r이 0이면 그 때 b가 최대 공약수인 셈이다.  
ex) GCD(24,16) = GCD(16,8) = GCD(8,0) = 8
~~~cpp
//재귀 사용
int gcd(int a, int b){
    if(b==0){
        return a;
    } else {
        return gcd(b, a%b);
    }
}
// 재귀 미사용
int gcd(int a, int b){
    while(b!=0){
        int r= a%b;
        a = b;
        b = r;
    }
    return a;
}
~~~
### 세 수의 최대공약수 구하기
- GCD(a,b,c) = GCD(GCD(a,b), c)

## 최소공배수 LCD
- Least Common Multiple
- 두 수의 최소공배수는 두 수의 공통된 배수 중에서 가장 작은 정수
- 최소공배수는 GCD를 응용해서 구할 수 있다.
- 두 수 a,b의 GCD를 g라고 했을 때  
LCM l = g * (a/g) * (b/g)  
[최대공약수와 최소공배수](https://github.com/kkoon9/algorithm/blob/master/BOJ2609.md)

## 진번 변환 Base Conversion
- 10진법 수 N을 B진번으로 바꾸려면 N이 0이 될 때까지 나머지를 계속구하면 된다.  
[진법 변환](https://github.com/kkoon9/algorithm/blob/master/BOJ11005.md)  
[진법 변환 2](https://github.com/kkoon9/algorithm/blob/master/BOJ2745.md)
