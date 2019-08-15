#include <iostream>
using namespace std;

const int SIZE = 4;
int arr[SIZE][SIZE];
int f = 0, s = 0, t = 0;

void fst(int sum[]);
void print(int sum[]);
int main() {
	int N;
	int x, y, z;
	int sum[SIZE] = { 0,0,0,0 };
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x >> y >> z;
		arr[1][x]++;
		arr[2][y]++;
		arr[3][z]++;
		sum[1] += x;
		sum[2] += y;
		sum[3] += z;
	}
	fst(sum);
	print(sum);
	return 0;
}
void fst(int sum[]) {
	if (sum[1] > sum[2]) {
		if (sum[1] > sum[3])
			f = 1;
		else if (sum[1] == sum[3]) {
			f = 1;
			s = 3;
		}
		else
			f = 3;
	}
	else if (sum[1] == sum[2]) {
		if (sum[1] < sum[3])
			f = 3;
		else if (sum[1] == sum[3]) {
			f = 1;s = 2;t = 3;
		}
		else 
			f = 1;s = 2;
	}
	else {
		if (sum[2] < sum[3]) {
			f = 3;
		}
		else if (sum[2] == sum[3]) {
			f = 2;
			s = 3;
		}
		else {
			f = 2;
		}
	}
}

void print(int sum[]) {
	if (s == 0) {
		cout << f << ' ' << sum[f] << endl;
	}
	else {
		if (t == 0) {
			if (arr[f][3] > arr[s][3])
				cout << f << ' ' << sum[f] << endl;
			else if (arr[f][3] < arr[s][3])
				cout << s << ' ' << sum[s] << endl;
			else {
				if (arr[f][2] > arr[s][2])
					cout << f << ' ' << sum[f] << endl;
				else if (arr[f][2] < arr[s][2])
					cout << s << ' ' << sum[s] << endl;
				else {
					if (arr[f][1] > arr[s][1])
						cout << f << ' ' << sum[f] << endl;
					else if (arr[f][1] < arr[s][1])
						cout << s << ' ' << sum[s] << endl;
					else
						cout << "0 " << sum[s] << endl;
				}
			}
		}
		else {
			if (arr[f][3] > arr[s][3]) {
				if (arr[f][3] > arr[t][3])
					cout << f << ' ' << sum[f] << endl;
				else if (arr[f][3] < arr[t][3])
					cout << t << ' ' << sum[t] << endl;
				else {
					if (arr[f][2] > arr[t][2])
						cout << f << ' ' << sum[f] << endl;
					else if (arr[f][2] < arr[t][2])
						cout << t << ' ' << sum[t] << endl;
					else {
						if (arr[f][1] > arr[t][1])
							cout << f << ' ' << sum[f] << endl;
						else if (arr[f][1] < arr[t][1])
							cout << t << ' ' << sum[t] << endl;
						else {
							cout << "0 " << sum[f] << endl;
						}
					}
				}
			}
			else if (arr[f][3] < arr[s][3]) {
				if (arr[s][3] > arr[t][3])
					cout << s << ' ' << sum[s] << endl;
				else if (arr[s][3] < arr[t][3])
					cout << t << ' ' << sum[t] << endl;
				else {
					if (arr[s][2] > arr[t][2])
						cout << s << ' ' << sum[s] << endl;
					else if (arr[s][2] < arr[t][2])
						cout << t << ' ' << sum[t] << endl;
					else {
						if (arr[s][1] > arr[t][1])
							cout << s << ' ' << sum[s] << endl;
						else if (arr[s][1] < arr[t][1])
							cout << t << ' ' << sum[t] << endl;
						else
							cout << "0 " << sum[s] << endl;
					}
				}
			}
			else {
				if (arr[f][2] < arr[t][2])
					cout << t << ' ' << sum[t] << endl;
				else
					cout << "0 " << sum[f] << endl;
			}
		}
	}

}