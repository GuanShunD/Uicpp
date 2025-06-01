#define CRT_SECURE_NO_WARNING 1
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int amount = 1000000;
    int count = 0;
    int power = 0;
    while (amount > 0) {
        int remainder = amount % 7;
        count += remainder;
        amount /= 7;
        power++;
    }
    printf("%d\n", count);
	return 0;
}