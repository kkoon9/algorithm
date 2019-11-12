#include<iostream>
using namespace std;
const unsigned int Size = 10001; // 상수 선언
int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case) {
        int N, sum = 0, result = 0;
        int arr[Size];
        for (int i = 1; i < Size; i++)
            arr[i] = 0;
        int input[100];
        arr[0] = 1;
        cin >> N;
        for (int i = 0; i<N; i++) { // input
            cin >> input[i];
            sum += input[i];
        }
        for (int i = 0; i < N; i++) {
            for (int j = sum; j >= 0; j--)
                if (arr[j] == 1 && j + input[j] <= sum)
                    arr[j + input[i]] = 1;
        }
        for (int i = 0; i <= sum; i++) {
            if (arr[i] == 1)result++;
        }
 
        cout << '#' << test_case << ' ' << result << '\n';
 
    }
    return 0;
}