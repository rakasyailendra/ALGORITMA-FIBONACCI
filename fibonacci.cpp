#include <iostream>
#include <vector>

void generateDeretFibonacci(std::vector<int>& array, int n) {
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
}

int jumpSearch(const std::vector<int>& array, int size, int k, int l) {
    int step = l;
    int prev = 0;

    while (array[step - 1] < k && step < size) {
        prev = step;
        step += l;
        if (step > size) {
            step = size;
        }
    }

    for (int i = prev; i < step; i++) {
        if (array[i] == k) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n = 10;
    std::vector<int> array(n);
    generateDeretFibonacci(array, n);

    std::cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int l, k;
    std::cout << "Masukkan nilai lompatan (L): ";
    std::cin >> l;

    std::cout << "Masukkan nilai yang dicari (K): ";
    std::cin >> k;

    int index = jumpSearch(array, n, k, l);

    if (index != -1) {
        std::cout << "Nilai " << k << " ditemukan pada indeks ke-" << index << ".\n";
    } else {
        std::cout << "Nilai " << k << " tidak ditemukan dalam deret Fibonacci.\n";
    }

    return 0;
}
