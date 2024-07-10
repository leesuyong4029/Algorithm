#include <iostream>
#include <string>
using namespace std;

class Array {
public:
    Array(int s = 10000)
    :arr(new int[s]), n(0), size(s) {
        for(int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    int at(int idx) {
        if (idx >= n || idx < 0)
            return 0;
        else
            return arr[idx];
    }

    void set(int idx, int x) {
        if (idx >= n || idx < 0)
            cout << 0 << "\n";
        else
            arr[idx] = x;
    }

    void add(int idx, int x) {
        if (idx > n || idx < 0)
            arr[n++] = x;
        else {
            for (int i = n; i > idx; i--) {
                arr[i] = arr[i - 1]; // 현재 원소를 다음 인덱스로 위치시킴
            }
            arr[idx] = x; // 인덱스 값 위치에 새로운 값 x를 삽입
            n++; // 배열의 크기를 1 증가시킴
        }
    }

    int remove(int idx) {
        if (idx >= n || idx < 0)  // 원소가 없는 index 값 주어졌을 때
            return 0;
        else {
            int ret = arr[idx];
            for (int i = idx; i < n; i++)
                arr[i] = arr[i + 1]; // 현재 원소를 이전 인덱스로 위치시킴

            arr[--n] = 0; // 배열의 크기를 1 감소시킴
            return ret; // 배열의 인덱스 idx에 저장된 양의 정수를 삭제한 후의 해당 값
        }
    }

    void printArray() {
        if (n == 0)
            cout << 0 << "\n";
        else {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << ' ';
            }
            cout << "\n";
        }
    }

    int *arr; // 배열
    int n; // 배열 내 원소 수
    int size; // 배열의 크기
};

int main() {
    Array arr;
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str == "at") {
            int x;
            cin >> x;
            cout << arr.at(x) << "\n";
        }

        else if (str == "add") {
            int i, x;
            cin >> i >> x;
            arr.add(i, x);
        }

        else if (str == "remove") {
            int i;
            cin >> i;
            cout << arr.remove(i) << endl;
        }

        else if (str == "printArray") {
            arr.printArray();
        }
    }
}