#include <iostream>
#include <vector>
#include <chrono>

class Vector {
private:
    int cap, c_index;
    int* arr;
public:
    Vector() {
        arr = new int[1];
        cap = 1;
        c_index = 0;
    }
    ~Vector() {
        delete[] arr;
    }
    void push_back(int n) {
        if (c_index == cap) {
            int* temp = new int[cap + 2];
            for (int i = 0; i < cap; i++) {
                temp[i] = arr[i];
            }
            delete[] arr;
            cap += 2;
            arr = temp;
        }
        else {
            arr[c_index] = n;
            c_index++;
        }
    }
    void insert(int n, int index) {
        if (index == cap)
            push_back(n);
        else
            arr[index] = n;
    }
    void clear() {
        delete[] arr;
        arr = new int[1];
        cap = 1;
        c_index = 0;
    }
    int get(int index) {
        if (index < c_index)
            return arr[index];
    }
    bool empty() {
        if (c_index == 0) return true;
        else return false;
    }
    void pop_back() {
        c_index--;
    }
    int size() {
        return c_index;
    }
    int capacity() {
        return cap;
    }
    void at(int index) {
        std::cout << arr[index];
    }
    void front() {
        std::cout << arr[0];
    }
    void back() {
        std::cout << arr[c_index - 1];
    }
    void print() {
        for (int i = 0; i < c_index; i++) {
            std::cout << arr[i] << " ";
        }
    }
};

int main()
{
    unsigned int sz = 10000000;  // 10000, 100000, 1000000, 10000000, 100000000

    Vector v2;

    std::vector<int> v1;

    auto t1_v = std::chrono::high_resolution_clock::now();
    for (int i = 1; i <= sz; ++i)
        v1.push_back(i);
    auto t2_v = std::chrono::high_resolution_clock::now();
    auto duration_v = std::chrono::duration_cast<std::chrono::milliseconds>(t2_v - t1_v).count();
    std::cout << duration_v << '\n';

    auto t1_c = std::chrono::high_resolution_clock::now();
    for (int i = 1; i <= sz; ++i)
        v2.push_back(i);
    auto t2_c = std::chrono::high_resolution_clock::now();
    auto duration_c = std::chrono::duration_cast<std::chrono::milliseconds>(t2_c - t1_c).count();
    std::cout << duration_c << '\n';

    return 0;
}