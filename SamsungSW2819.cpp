#include <iostream>
#include <set>
#include <vector>
using namespace std;
const int first = 1000000;
int move(vector<pair<int, int[4]>> arr, int index, int count, int result);
int pow(int a);
set<int> output;
int main(int argc, char** argv) {
    int test_case;
    int T;
    cin >> T;
  
    for (test_case = 1; test_case <= T; ++test_case) {
        vector<pair<int, int[4]>> arr(16);
        int count = 0, result = 0;
  
        for (int i = 0; i < 16; i++) {
            cin >> arr[i].first;
            arr[i].second[0] = (i + 1); // 동쪽 index
            arr[i].second[1] = (i - 1); // 서쪽 index
            arr[i].second[2] = (i + 4); // 남쪽 index
            arr[i].second[3] = (i - 4); // 북쪽 index
            if (i % 4 == 0)
                arr[i].second[1] = -1; // 서쪽이 -1
            if (i % 4 == 3)
                arr[i].second[0] = -1; // 동쪽이 -1
            if (i >= 12)
                arr[i].second[2] = -1; // 남쪽이 -1
        }
        for (int i = 0; i < 16; i++) {
            move(arr, i, count, result);
        }
        cout << '#' << test_case << ' ' << output.size() << '\n';
        output.clear();
    }
    return 0; 
}
  
int move(vector<pair<int, int[4]>> arr, int index, int count, int result) {
    count++;
    result += arr[index].first * pow(count);
      
    if (count == 7) {
        output.insert(result);
        return 0;
    }
    for (int i = 0; i < 4; i++) {
        if (arr[index].second[i] < 0) continue;//인덱스 벗어나며 종료
        move(arr, arr[index].second[i], count, result);
    }
}
  
int pow(int a) {
    int result = 1;
    for (int i = 6; i >= a; i--) {
        result *= 10;
    }
    return result;
}