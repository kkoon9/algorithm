/**
 * 문제 이름 : 회의실배정
 * 작성자 : kkoon9
 * 날짜 : 2019.11.15
 * 링크 : https://www.acmicpc.net/problem/1931
 * 회의가 끝나는 시간을 기준으로 정렬해주는게 포인트!
 * */
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct Meeting {
    int begin, end;
};
bool cmp(const Meeting &u, const Meeting &v);

int main() {
    int n;
    scanf("%d",&n);
    vector<Meeting> a(n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&a[i].begin,&a[i].end);
    }
    sort(a.begin(), a.end(), cmp);
    int now = 0;
    int ans = 0;
    int size = a.size();
    for (int i = 0; i < size; i++) {
        if (now <= a[i].begin) {
            now = a[i].end;
            ans += 1;
        }
    }
    printf("%d\n",ans);
    return 0;
}

bool cmp(const Meeting &u, const Meeting &v) {
    if (u.end == v.end) {
        return u.begin < v.begin;
    } else {
        return u.end < v.end;
    }
}