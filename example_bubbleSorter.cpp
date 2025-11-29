#include <iostream>
#include <array>
#include <cstddef>
#include <algorithm>

void sort(int array[], int size);

constexpr std::array<int, 1000> make_array() {
    std::array<int, 1000> a{};

    for (std::size_t i = 0; i < 1000; ++i)
        a[i] = i + 1;

    unsigned seed = 0xA53C9E21u;
    for (std::size_t i = 999; i > 0; --i) {
        seed = seed * 1664525u + 1013904223u;
        std::size_t j = seed % (i + 1);

        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    return a;
}

constexpr auto const_arr = make_array();

int main() {
    int array[1000];
    std::copy(const_arr.begin(), const_arr.end(), array);

    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array) {
        std::cout << element << " ";
    }

    std::cout << "\nTotal number sorted: " << size << std::endl;
    return 0;
}

void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
