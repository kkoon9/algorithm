#include <iostream>
#include <string>
using namespace std;

float grade1(char a);
float grade2(char a);
int main(void) {
	int T;
	string str;
	float score = 0;
	int count = 0;
	cin >> T;
	for (int test_case = 1;test_case <= T;test_case++) {
		string subject;
		int cnt;
		string grade;
		cin >> subject >> cnt >> grade;
		float result = grade1(grade[0]);
		if (result != 0)
			result += grade2(grade[1]);
		score += result * cnt;
		count += cnt;
	}
	score /= count;
	printf("%.2f\n", score);
	return 0;
}
float grade1(char a) {
	float result;
	if (a == 'F') 
		result = 0.0;
	else if (a == 'A')
		result = 4.0;
	else if (a == 'B')
		result = 3.0;
	else if (a == 'C')
		result = 2.0;
	else
		result = 1.0;
	return result;
}
float grade2(char a) {
	float result;
	if (a == '+')
		result = 0.3;
	else if (a == '0')
		result = 0.0;
	else
		result = -0.3;
	return result;
}