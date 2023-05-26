//
// Created by FanBig on 2023/5/26.
//

#ifndef BFS_MYQUEUE_H
#define BFS_MYQUEUE_H

#include <cstddef>

template<class T>
class MyQueue {
public:
    T array[100];
    int head = 0;
    int tail = 0;
    int length = 0;

    bool isEmpty() {
        return this->length == 0;
    }

    // insert
    void offer(T n) {
        this->array[tail] = n;
        tail = (tail + 1) % 100;
        length++;
    }

    // pop
    T poll() {
        if (this->isEmpty()) {
            return NULL;
        }
        T temp = (T) array[head];
        head = (head + 1) % 100;
        length--;
        return temp;
    }

    // top
    T peak() {
        if (this->isEmpty()) {
            return NULL;
        }
        T temp = (T) array[head];
        return temp;
    }
};

#endif //BFS_MYQUEUE_H
