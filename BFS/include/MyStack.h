/*
    MyStack_h
*/

#ifndef MyStack_h
#define MyStack_h

#include <cstddef>

template <class T>
class MyStack
{
public:
    T arr[100];
    int topIndex;

    MyStack()
    {
        topIndex = 0;
    }

    bool isEmpty()
    {
        return topIndex == 0;
    }

    void push(T n)
    {
        arr[topIndex] = n;
        topIndex++;
    }

    T pop()
    {
        if (isEmpty())
        {
            return NULL;
        }
        topIndex--;
        return arr[topIndex];
    }

    T top()
    {
        if (isEmpty())
        {
            return NULL;
        }
        return arr[topIndex - 1];
    }
};

#endif