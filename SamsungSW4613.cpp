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
        int result1 = 0, result2 = 0, result3 = 0;
        char x;
        int M, N;
        int W = 0, B = 0, R = 0;
        cin >> N >> M;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                cin >> x;
                if (x == 'W')W++;
                else if (x == 'B')B++;
                else R++;
            }
            if (i == 1) // 1번째는 무조건 하얀색 
                result1 = result2 = result3 = B + R;
            else if (i == 2) {
                result1 += B + R;
                result2 += W + R;
                result3 += W + R;
            }
            else if (i == (N - 1)) {
                if (result3 > result2) result3 = result2 + W + B;
                else result3 += W + B;
                if (result2 > result1) result2 = result1 + W + R;
                else result2 += W + R;
                result1 += W + R;
            }
            else if (i == N) {
                    result2 += W + B;
                    result1 += W + B;
                    result3 += W + B;
            }
            else{
                if (result3 > result2) result3 = result2 + W + B;
                else result3 += W + B;
                if (result2 > result1) result2 = result1 + W + R;
                else result2 += W + R;
                result1 += B + R;
            }
            W = B = R = 0;
        }
        if (result1 > result2) {
            if (result2 > result3)
                printf("#%d %d\n", test_case, result3);
            else
                printf("#%d %d\n", test_case, result2);
        }
        else {
            if (result1 > result3)
                printf("#%d %d\n", test_case, result3);
            else
                printf("#%d %d\n", test_case, result1);
        }
 
         
    }
    return 0;
}