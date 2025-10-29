#include <iostream>
#include <array>

constexpr auto msg = std::to_array({'H','e','l','l','o',',',' ','W','o','r','l','d','!','\0'});

template<size_t N>
constexpr void print_msg(const std::array<char, N>& arr, size_t i = 0) {
    if constexpr (i < N - 1) {
        std::cout << arr[i];
        print_msg(arr, i + 1);
    }
}

int main() {
    print_msg(msg);
    std::cout << std::endl;
}
