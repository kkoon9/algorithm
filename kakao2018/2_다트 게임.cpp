#include <string>
#include <regex>

using namespace std;

enum DARTITEM { DART_SCORE, DART_BONUS, DART_OPTION };
struct dartresult
{
	int score;
	char bonus;
	char option;
};

const int n = 3;
dartresult dart[n];


void tokenizing(string str, regex reg, DARTITEM item, dartresult dart[]);
int calscore(dartresult dart[]);

int solution(string dartResult) {
	int answer = 0;
	if (dartResult != "0") {
		for (int i = 0; i < n; i++) {
			dart[i].score = 0;
			dart[i].bonus = 0;
			dart[i].option = 0;
		}
		tokenizing(dartResult, regex("(10|[0-9])"), DART_SCORE, dart);
		tokenizing(dartResult, regex("[S|D|T]"), DART_BONUS, dart);
		tokenizing(dartResult, regex("[0-9][S|D|T][*|#]?"), DART_OPTION, dart);
	}
	answer = calscore(dart);
	return answer;
}

void tokenizing(string str, regex reg, DARTITEM item, dartresult dart[])
{
	sregex_iterator itr(str.begin(), str.end(), reg);
	sregex_iterator end;

	int k = 0;
	for (sregex_iterator i = itr; i != end; ++i)
	{
		smatch match = *i;
		switch (item)
		{
		case DART_SCORE:
			dart[k].score = atoi(match.str().c_str());
			break;
		case DART_BONUS:
			dart[k].bonus = match.str()[0];
			break;
		case DART_OPTION:
			if (match.str()[match.str().size() - 1] == '*' ||
				match.str()[match.str().size() - 1] == '#')
			{
				dart[k].option = match.str()[match.str().size() - 1];
			}
			break;
		}
		k++;
	}
}

int calscore(dartresult dart[]) {
	int sum[n];

	for (int i = 0; i < n; i++)
	{
		sum[i] = 0;

		sum[i] = dart[i].score;

		switch (dart[i].bonus)
		{
		case 'S':
			break;
		case 'D':
			sum[i] = sum[i] * sum[i];
			break;
		case 'T':
			sum[i] = sum[i] * sum[i] * sum[i];
			break;
		}

		switch (dart[i].option)
		{
		case '*':
			sum[i] = sum[i] * 2;
			if (i > 0)
			{
				sum[i - 1] = sum[i - 1] * 2;
			}
			break;
		case '#':
			sum[i] = sum[i] * (-1);
			break;
		}
	}

	int totalscore = 0;
	for (int i = 0; i < n; i++)
	{
		totalscore += sum[i];
	}
	return totalscore;
}