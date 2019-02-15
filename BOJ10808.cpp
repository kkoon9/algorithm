#include <iostream>
using namespace std;

int main() {
	int arr[26];
	char input[100];
	for (int i = 0; i < 26; i++) arr[i] = 0; // 초기화
	cin >> input;
	for (int i = 0; input[i] != '\0'; i++)
		arr[input[i] - 97]++;
	for (int i = 0; i < 26; i++)cout << arr[i] << ' ';

	return 0;
}