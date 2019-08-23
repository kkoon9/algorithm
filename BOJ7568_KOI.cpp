#include <iostream>
#include <vector>
using namespace std;
typedef struct Person {
	int w, h;
	int rank = 1;
}person;

int cmp(const Person a, const Person b);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	vector<person> v;
	cin >> N;
	v.resize(N);
	for (int i = 0;i < N;i++) 
		cin >> v[i].w >> v[i].h;
	for (int i = 0;i < N;i++) 
		for (int j = 0;j < N;j++) 
			v[i].rank += cmp(v[j], v[i]);
		
	for (int i = 0;i < N;i++) {
		cout << v[i].rank << ' ';
	}

}

int cmp(const Person a, const Person b) {
	if (a.h > b.h && a.w > b.w)
		return 1;
	else
		return 0;
}