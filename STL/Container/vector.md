Container vector
==============
## vector란?
- 동적 배열로서 자신의 크기를 조정할 수 있다.
- vector를 사용하기 위해서는 **vector library**를 사용해야 한다.
## vector 예시 코드
```{.C++}
#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> v1; // 비어있는 vector v1
	vector<int> v2(10); // 0으로 초기화 된 10개의 원소를 가지는 vector v2
	vector<int> v3(15, 1); // 1로 초기화된 15개의 원소를 가지는 vctor v3
	vector<int> v4 = { 1,2,3,4,5 };

	vector<pair<int, int>> v5;
	vector<pair<int, int>> v6 = { {1,2},{3,4} };
	vector<vector<int>> v7; 

	int n = 10, m = 20;
	vector<vector<int>> v8(n, vector<int>(m)); // v8[n][m] 과 같은 2차원 배열
	return 0;
}
```

## Q. size와 capacity의 차이
- size : 데이터가 채워진 원소의 개수
- capacity : 할당된 메모리 공간
### 예시 코드
```{.C++}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	for (int i = 0; i < 16; i++) {
		v.push_back(i+1);
		cout << "v[" << i <<  "] : " << v[i]  << " v.size() : " << v.size() << " v.capacity() : " << v.capacity() << '\n';
	}
	return 0;
}
/* output
v[0] : 1 v.size() : 1 v.capacity() : 1
v[1] : 2 v.size() : 2 v.capacity() : 2
v[2] : 3 v.size() : 3 v.capacity() : 3
v[3] : 4 v.size() : 4 v.capacity() : 4
v[4] : 5 v.size() : 5 v.capacity() : 6
v[5] : 6 v.size() : 6 v.capacity() : 6
v[6] : 7 v.size() : 7 v.capacity() : 9
v[7] : 8 v.size() : 8 v.capacity() : 9
v[8] : 9 v.size() : 9 v.capacity() : 9
v[9] : 10 v.size() : 10 v.capacity() : 13
v[10] : 11 v.size() : 11 v.capacity() : 13
v[11] : 12 v.size() : 12 v.capacity() : 13
v[12] : 13 v.size() : 13 v.capacity() : 13
v[13] : 14 v.size() : 14 v.capacity() : 19
v[14] : 15 v.size() : 15 v.capacity() : 19
v[15] : 16 v.size() : 16 v.capacity() : 19
*/
```
- 위처럼 capacity가 모자랄 경우 capacity/2 만큼의 capacity를 늘려간다.
- 만약 입력될 원소의 개수를 알 수 있다면 reserve를 사용하여 미리 capacity 메모리를 할당해 놓으면 효율적이다.
