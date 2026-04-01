#include <assert.h>

int add(int a, int b);

int main() {
    assert(add(2, 3) == 5);
    assert(add(10, 5) == 15);
    return 0;
}
