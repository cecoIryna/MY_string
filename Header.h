#pragma once 
#include <iostream>
using namespace std;

//HW_10
class MyString {
    char* str;
    int length;
    static int objCount;

    int x;
    int y;

public:
    MyString();
    MyString(int);
    MyString(const char*);
    MyString(const MyString& other);
    ~MyString();

    char* GetStr() const;
    void setStr(const char*);


    /*void Input();
    void Output() const;*/
    void MyStrcpy(char*, const char*);
    bool MyStrStr(const char*);
    int MyChr(char);
    int MyStrLen(const char* s = nullptr) const;
    void MyStrCat(const MyString& b);
    void MyDelChr(char);
    int MyStrCmp(const MyString& b);

    //HW_11
    MyString operator+(const MyString& b) const;
    MyString operator=(const MyString& other);

    bool operator==(const MyString& other) const;

    static int getObjectCount();

    char& operator[](int);
    const char& operator[](int) const;
    void operator()();

    MyString operator++();
    MyString operator++(int);

    int getLength() const;
    void setLength(int newLength);

    //HW_13
    MyString(initializer_list<char>);

    MyString(MyString&& other);
    MyString operator=(MyString&& obj);

};

MyString operator+(const MyString& a, char b);
MyString operator+(char b, const MyString& a);

MyString operator+(const MyString& a, int num);
MyString operator+(int num, const MyString& a);

//HW_12
ostream& operator<<(ostream &os, const MyString &obj);
istream& operator>>(istream& is, MyString& obj);
