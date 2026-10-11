#define main hiredis_full_test_main
#include "../test.c"
#undef main

int main(void) {
    test_async_timeout_enqueue(0);
    test_async_timeout_enqueue(1);
    return fails != 0;
}
