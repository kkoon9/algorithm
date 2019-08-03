#include <iostream>
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
			int minX = cx - r;
			int minY = cy - r;
			int maxX = cx + r;
			int maxY = cy + r;
		
			if ((x1 > minX) && (y1 > minY) && (x1 < maxX) && (y1 < maxY)) {
				count++;
				if ((x2 > minX) && (y2 > minY) && (x2 < maxX) && (y2 < maxY))
					count--;
			}
			else {
				if ((x2 > minX) && (y2 > minY) && (x2 < maxX) && (y2 < maxY))
					count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
