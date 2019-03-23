Samsung Expert Academy 1244
=============
최대 상금  <https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV15Khn6AN0CFAYD>
---------------
- - -
### 정렬을 이용하여 풀어보자.
- - -
## 변수 설명
- input : 크기 100을 가지는 층 높이
- n : 평탄화 횟수
## 코드 설명
- n 만큼 input 배열을 sort해준 뒤 input[0](최소값)은 1 더해주고, input[99](최대값)은 1 빼준다.
- 마지막으로 sort를 한 번 더 해준 뒤 input[99]-input[0]을 출력해준다.
## 기억해야 할 것
- 정렬되어 있는 배열을 정렬해준다.
- 그러므로 정렬되어 있는 배열을 정렬하는 정렬 기법을 사용하는게 효과적이다.
- 삽입 정렬 : 정렬되어 있는 배열을 정렬할 때 효과적인 기법
~~~cpp
void InsertionSort(int array[], int size) {
    for(int i=1; i<count;i++){
        int temp = array[i];
        int j = i;
        while( (--j >= 0) && array[j] > temp)
            array[j + 1] = array[j];
        array[j + 1] = temp;
    }
}
~~~
