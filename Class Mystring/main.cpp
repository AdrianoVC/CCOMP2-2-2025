#ifndef MYSTRING_N
#define MYSTRING_N

class MyString
{
    public;
        MyString(char *data);
        int getsize() const;
        char* getData() const;

        void toUpper();
        void toLower();

        -MyString();

    private:
        int size;
        char *data;

};

#endif // MYSTRING_N
