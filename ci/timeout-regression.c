#define main hiredis_full_test_main
#include "../test.c"
#undef main

int main(void) {
    test_async_timeout_enqueue(0);
    test_async_timeout_enqueue(1);
    test_async_timeout_enqueue(2);
    test_async_timeout_enqueue(3);
#ifdef HIREDIS_TEST_ASYNC
    test_async_timeout_enqueue(4);
#endif
    return fails != 0;
}
