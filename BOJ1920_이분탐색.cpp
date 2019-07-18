#include <iostream>
using namespace std;
const int Nsize = 100000;

int compare(const void* first, const void* second);
int BinarySearch(int arr[], int find, int N);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, M; // input
	int Mnum;
	cin >> N;
	int Narr[Nsize];
	for (int i = 0; i < N; i++)
		cin >> Narr[i];
	qsort(Narr, N, sizeof(int), compare);

	////////////////////////////////
	cin >> M;
		for (int i = 0; i < M; i++) {
			cin >> Mnum;
			cout << BinarySearch(Narr, Mnum, N) << '\n';
		}

	return 0;
}

int compare(const void* first, const void* second)
{
	if (*(int*)first < *(int*)second) return -1;
	else if (*(int*)first > *(int*)second) return 1;
	else return 0;
}
int BinarySearch(int arr[], int find, int N) {
	int first = 0;
	int end = N - 1;
	int mid = 0;
	while (first <= end) {
	//	cout << "first : " << first << " mid : " << mid << " end : " << end << endl;
		mid = (first + end) / 2;
		if (arr[mid] == find)
			return 1;
		else if (arr[mid] < find)
			first = mid + 1;
		else
			end = mid - 1;
	}
	return 0;
}
