# Segment Tree
## Segment Tree란?
- A 배열의 부분 합을 구할 때 A 배열이 계속해서 바뀔 수 있다고 할 때, 부분 합을 트리구조에 저장함으로서 O(logN)의 속도로 A 배열의 부분 합을 빠르게 구할 수 있게 한다.
## Segment Tree 만들기
![세그먼트 트리](https://github.com/kkoon9/algorithm/blob/master/img/segment_tree.png)
- 다음과 같은 구조로 트리를 만든다.
- 부모 노드의 값은 자식 노드 값의 합이고, 리프 노드는 A 배열의 각 요소들이다.
- A 배열의 크기가 N이라면?  
리프 노드의 개수 : N  
배열의 크기 : 2^(H+1)  
![세그먼트 트리 인덱스](https://github.com/kkoon9/algorithm/blob/master/img/segment_tree_index.png)
- 배열의 i 번째 요소의 자식 노드의 값은 2*i, 2*i+1이다.
~~~cpp
#include <math.h>
int *tree;
int A[10] = {1,4,2,3,5,1,2,4,5,3};

long long init(int index, int start, int end)
{    
    if(start == end)
        tree[index] = A[start];
    else
        tree[index] = init(index*2+1, start, (start+end)/2) + init(index*2+2, (start+end)/2 + 1, end);

    return tree[index];
}
void main()
{    
    int N=10;
    int h = ceil(log2(N));
    int tree_size = 1 << (h+1);

    tree = new long long[tree_size];
    init(0, 0, N-1);

    delete[] tree;
}
~~~
## Segment Tree 합
- 특정 범위[left, right]의 합을 구한다.
- 탐색 범위인 [start, end]에서 구하려는 합의 범위인 [left, right] 구간의 관계는 4가지 경우가 있다.
    1. [left, right] 범위가 [start, end]와 전혀 겹치지 않는 경우
    2. [start, end] 범위가 [left, right]와 완전히 속해 있는 경우
    3. [left, right] 범위가 [start, end]와 전혀 겹치지 않는 경우
    4. 범위가 일부분 겹치는 경우
1. 찾으려는 범위가 전혀 겹치지 않으므로, 0이 반환
2. 탐색 범위가 구하려는 전체 범위에 포함되므로, start에서 end까지의 합인 tree[index]를 반환
3. 하위 범위를 탐색하며 그 범위가 1, 2번의 경우에 해당되는지 아니면 더 하위범위를 탐색할건지 판단해야 하므로, 재귀 호출 실행
~~~cpp
long long sum(int index, int start, int end, int left, int right)
{
    if( start > right || end < left ) // case 1
        return 0;
    else if( start >= left && end <= right) //case 2
        return tree[index];
    else // other case
    {
        int mid = (start+end)/2;
        return sum(2*index+1, start, mid, left, right) + sum(2*index+2, mid+1, end, left, right);
    }
}
~~~
출처 : <a href>https://www.acmicpc.net/blog/view/9</a>