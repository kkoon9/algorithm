#include <string>
#include <vector>
using namespace std;

string TenToTwo(int a, int n);
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<int> arr;
	vector<string> answer;
	for (int i = 0;i < n;i++){
		arr.push_back((arr1[i] | arr2[i]));
    }
	for (int i = 0;i < n;i++) {
		answer.push_back(TenToTwo(arr[i], n));
	}
	return answer;
}

string TenToTwo(int a, int n) {
	string res;
    res.resize(n);
	for(int i=n-1;i>=0;i--){
		if ((a % 2) == 1)
			res[i] = '#';
		else
			res[i] = ' ';
		a /= 2;
	}
	return res;
}