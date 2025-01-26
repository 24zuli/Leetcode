class Foo {
public:
    Foo() = default;
    std::binary_semaphore secondReady{0}, thirdReady{0};


    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        secondReady.release();
    }

    void second(function<void()> printSecond) {
        secondReady.acquire();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        thirdReady.release();

    }

    void third(function<void()> printThird) {
        thirdReady.acquire();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};