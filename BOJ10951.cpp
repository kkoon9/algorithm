#include <iostream>
using namespace std;
int main() {
    int t;
    int a,b;

    // 1번째 방법
        while (scanf("%d %d",&a,&b) == 2) {
        cout << a+b << '\n';
    }

    // 2번째 방법
    while (cin >> a >> b) {
        cout << a+b << '\n';
    }
    return 0;
}