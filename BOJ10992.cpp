#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int N;
	int length;
	cin >> N;
	length = 2 * N - 1;
	vector<vector<int>> p(N);
	for (int i = 0; i < N; i++)
		p[i].reserve(length);

	int i, j;
	i = j = (length - 1) / 2;
	while (--N) {
        int count = 0; // 별이 다 찍혔는지 체크해주는 변수
		for (int idx = 0; idx < length; idx++) {
            if(count == 2) break; // 별이 두 개 다 찍히면 break
			if (idx == i || idx == j){
				cout << "*";
                count++;
                if(i == j) // 첫 번째 별은 한 개이므로
                    count++;
            }
			else
				cout << " ";
		}
		cout << '\n';
		i -= 1;
		j += 1;
	}
	for (int idx = 0; idx < length; idx++)
		cout << "*";
	cout << '\n';
	return 0;
}