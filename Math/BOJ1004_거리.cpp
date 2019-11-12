#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int test_case = 1;test_case <= T;test_case++) {
		int x1, y1;// 출발점
		int x2, y2;// 도착점
		int n; // 행성의 개수
		int count = 0; // 진입/이탈 횟수
		int cx, cy, r; // 행성의 중점과 반지름
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		for (int i = 0;i < n;i++) {
			cin >> cx >> cy >> r;
			double dis1 = sqrt((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1));
			double dis2 = sqrt((cx - x2) * (cx - x2) + (cy - y2) * (cy - y2));
			if (r < dis1 && r < dis2)
				continue;
			else if (r < dis1 || r < dis2) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
