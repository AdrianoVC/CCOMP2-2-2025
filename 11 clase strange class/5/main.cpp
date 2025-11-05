#include "MyString.h"

MyString::MyString(char *arr)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }

    this->size = count;        // TODO
    this->data = new char[count];
}

int MyString::getSize() const
{
    return size;
}

MyString::~MyString()
{
    //dtor
}
