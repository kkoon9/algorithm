#include<iostream>
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        long long N;
        unsigned long long s1, s2, s3;
        cin >> N;
        s1 = (N*N + N) / 2;
        s2 = N * N;
        s3 = s1 * 2;
        cout << '#' << test_case << ' ' << s1 << ' ' << s2 << ' ' << s3 << '\n';
    }
    return 0;
}
