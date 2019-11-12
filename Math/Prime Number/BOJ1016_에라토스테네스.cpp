/*
	이름 : 남궁권
	문제 : BOJ1016 제곱 ㄴㄴ수 
	날짜 : 2019-08-17
	참고 사이트 : https://blockdmask.tistory.com/147
*/
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int MAX = 1000000 + 1;
bool check[MAX];
ll num[MAX];

int main() {
	ll min, max;
	cin >> min >> max;
	ll sq_max = (long long)sqrt(max);	// 제곱값이 될 수 있는 가장 큰 값
	ll cntNum = 0;						// 제곱들의 개수
	for (ll i = 2;i <= sq_max;i++) {	// 제곱들 저장
		num[i] = i * i;
		cntNum++;
	}
	int count = 0; // min ~ max 사이에 제곱의 수로 나누어 떨어지는 수

	for (int i = 2;i < cntNum + 2;i++) {
		ll div_min = min;								// div_min을 범위의 최소값 min으로 둔 후
		if (div_min % num[i] != 0) {					// div_min이 제곱수로 나누어 지지 않으면
			div_min = ((min / num[i]) + 1) * num[i];	// 최소값을 제곱근으로 나눈 몫에 +1 후 다시 곱해서 범위 안으로 바꾼다.
		}

		for (ll tmp = div_min;tmp <= max;tmp += num[i]) { // num[i]로 나누어지는 div_min을 count 한다.
			if (!check[tmp - min]) {
				check[tmp - min] = true;
				count++;
			}
		}
	}
	cout << max - min - count + 1 << endl;
	return 0;
}
