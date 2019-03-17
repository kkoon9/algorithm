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

## A진법 => B진법
- A진법 => 10진법 => B진법 순으로 바꾸면 된다.  
[진법 변환](https://github.com/kkoon9/algorithm/blob/master/BOJ11576.md)

## 소수
- 약수가 1과 자기 자신밖에 없는 수를 의미한다.
### 첫 번째 소수 구하기
- N이 소수가 되려면 2보다 크거나 같고 **N-1**보다 작거나 같은 자연수로 나누어 떨어지면 안된다.  
~~~cpp
bool prime(int n){
    if(n < 2)
        return fasle;
    for(int i=2; i<=n-1;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
~~~
### 두 번째 소수 구하기
- N이 소수가 되려면, 2보다 크거나 같고 **N/2**보다 작거나 같은 자연수로 나누어 떨어지면 안된다.  
why? N의 약수 중에서 가장 큰 것은 N/2보다 작거나 같기 때문이다.
- N = a x b로 나타낸다면, a가 작을수록 b가 크다.
- 가능한 a 중에서 가장 작은 값은 2이기 때문에 b는 N/2를 넘지 않는다.  
~~~cpp
bool prime(int n){
    if(n < 2)
        return fasle;
    for(int i=2; i<=n/2;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
~~~
### 세 번째 소수 구하기
- N이 소수가 되려면, 2보다 크거나 같고 **루트N**보다 작거나 같은 자연수로 나누어 떨어지면 안된다.  
why? N이 소수가 아니라면 N = a x b로 나타낼 수 있다.(a <= b))
- 두수 a와 b의 차이가 가장 작은 경우는 루트 N이다.
- 따라서, 루트 N까지만 검사해보면 된다.  
~~~cpp
bool prime(int n){
    if(n < 2)
        return fasle;
    for(int i=2; i*i <= n;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
~~~
- 따라서 어떤 수 N이 소수인지 판별하는데 걸리는 시간은 O(루트N)이다.  
[소수 찾기](https://github.com/kkoon9/algorithm/blob/master/BOJ1978.md)
- N = 백만인 경우, 루트 N = 1000이다.
- 만약 1부터 1,000,000까지 모든 소수를 구하는데 걸리는 시간 복잡도는 얼마일까?
- 각각의 수에 대해서 O(루트N)의 시간이 걸린다.
- 수는 총 N개이기 때문에 O(N루트N)의 시간이 걸린다.
- 1,000,000 * 1,000 = 1,000,000,000 = 10억 = 10초
- 시간 초과 날게 뻔하다.

### 네 번째 소수 구하기 : 에라토스테네스의 체
- 1부터 N까지 범위 안에 들어가는 모든 소수를 구하려면 에라토스테네스의 체를 사용한다.
1. 2부터 N까지 모든 수를 써놓는다.
2. 아직 지워지지 않은 수 중에서 가장 작은 수를 찾는다.
3. 그 수는 소수이다.
4. 이제 그 수의 배수를 모두 지운다.
~~~cpp
int p[100]; // 소수 저장
int cnt = 0; // 소수의 개수
bool check[101] // 지워졌으면 true
int n = 100;
for(int i = 2; i <= n; i++){
    if(check[i] == false) {
        p[pn++] = i;
        for(int j = i*i; j <= n; j+=i){
            check[j] = true;
        }
    }
}
~~~
- 1부터 N까지 모든 소수를 구하는 것이 목표이기 때문에, 구현할 때에는 바깥 for문 i를 n까지 돌린다.
- 안쪽 for문 j는 N의 크기에 따라서, i*i or i+i로 바꾸는 것이 좋다.
- i=백만인 경우, i*i는 범위를 넘어간다.  
[에라스토테네스의 체](https://github.com/kkoon9/algorithm/blob/master/BOJ1929.md)

### 다섯 번째 소수 구하기 : 골드바흐의 추측
- 2보다 큰 모든 짝수는 두 소수의 합으로 표현 가능하다.
- 5보다 큰 모든 홀수는 세 소수의 합으로 표현 가능하다.
- 아직 증명되지 않은 문제이다.
- 10의 18승 이하에서는 참인 것이 증명되어 있다.  
[골드바흐의 추측](https://github.com/kkoon9/algorithm/blob/master/BOJ6588.md)

## 소인수분해
- Prime Factorization
- 정수를 N을 소수의 곱으로 분해
- N을 소인수분해했을 때, 나타날 수 있는 인수 중에서 가장 큰 값은 루트N이다.
- 따라서, 2부터 루트N까지 for문을 돌면서 N을 나눌 수 있으면 나눌 수 없을 때까지 계속해서 나눠주면 된다.
~~~cpp
for (int i=2; i*i <= n; i++){
    while(n%i ==0){
        cout << i << '\n';
        n /= i;
    }
}
if (n > 1)
    cout << n << '\n';
~~~  
[소인수분해](https://github.com/kkoon9/algorithm/blob/master/BOJ11653.md)
