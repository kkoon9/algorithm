#include <iostream>
#include <string>
using namespace std;

float grade1(char a);
float grade2(char a);
int main(void) {
	string str;
	cin >> str;
	float result = grade1(str[0]);
	if (result != 0)
		result += grade2(str[1]);
	printf("%.1f\n", result);
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