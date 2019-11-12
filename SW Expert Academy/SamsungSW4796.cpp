#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, x, result = 0, count1 = 0, count2 = 0;
		bool mt = false;
		scanf("%d", &N);
		vector<int> v;
		for (int idx = 0; idx < N; idx++) {
			scanf("%d", &x);
			v.push_back(x);
		}
		for (int i = 0; i < N - 1; i++) { 			
			if (!mt && v[i] < v[i + 1])
				count1++;
			else if (!mt && v[i] > v[i + 1]) {// 솟아오른 산을 찾음.
				mt = true;
				count2++;
			}
			else if (mt && v[i] > v[i + 1]) 
				count2++;
			else if(mt && v[i] < v[i+1]){
				mt = false;
				result += (count1 * count2);
				count1 = 1; count2 = 0;
			}
		}
		result += (count1 * count2);
		printf("#%d %d\n", test_case, result);
		
	}
	return 0;
}