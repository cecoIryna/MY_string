#include <iostream>
#include <cstring>
#include <Windows.h>
#pragma warning(disable : 4996)
#include "Header.h"
using namespace std;

int main() {

    // �������� �����
    MyString str1("Hello");
    MyString str2("World");

    // ������������ ������� MyStrCat (����������� �����)
    cout << "Demonstration of MyStrCat: ";
    str1.MyStrCat(str2);
    cout << str1 << endl;

    // ������������ ������� MyStrLen (����� ������)
    cout << "Demonstration of MyStrLen: " << str1.MyStrLen() << endl;

    // ������������ ������� MyStrStr (����� ���������)
    cout << "Demonstration of MyStrStr ('World'): " << (str1.MyStrStr("World") ? "Found" : "Not Found") << endl;

    // ������������ ������� MyChr (����� �������)
    cout << "Demonstration of MyChr ('o'): Index = " << str1.MyChr('o') << endl;

    // ������������ ��������� + (������������)
    cout << "Demonstration of + operator: ";
    MyString str3 = str1 + str2;
    cout << str3 << endl;

    // ������������ ������� MyDelChr (�������� �������)
    cout << "Demonstration of MyDelChr ('o'): ";
    str1.MyDelChr('o');
    cout << str1 << endl;

    // ������������ ��������� == (��������� �����)
    cout << "Demonstration of == operator: ";
    cout << (str1 == str2 ? "Equal" : "Not Equal") << endl;

    // ������������ ������� MyStrCmp (��������� �����)
    cout << "Demonstration of MyStrCmp: " << endl;
    cout << "Comparing str1 and str2: " << str1.MyStrCmp(str2) << endl;

    // ������������ ����������� ������ (MyStrcpy)
    cout << "Demonstration of MyStrcpy: ";
    MyString str4;
    str4.MyStrcpy(str4.GetStr(), str1.GetStr());
    cout << str4 << endl;

    // �������� ��������� = (������������)
    cout << "Demonstration of operator= : ";
    MyString str5;
    str5 = str1;
    cout << str5 << endl;

    // ���������� ��������
    cout << "Object count: " << MyString::getObjectCount() << endl;

    MyString str6("Hello");

    //������������ ��������� []
    cout << "Demonstration of [] operator: " << str6[1] << endl;

    //// ������������ ��������� ()
    str6();
    cout << "Updated string: ";
    cout << str6 << endl;

    //// ������������ ���������� ������� � �����
    MyString str7 = str6 + 'A';
    cout << "After adding 'A' to the end: ";
    cout << str7 << endl;

    // ������������ ���������� ������� � ������
    cout << "Adding 'A' to beginning: ";
    str7 = 'A' + str6;
    cout << str7 << endl;

    // ������������ ���������� 10 ��������  � ����� ������
    MyString str8 = str6 + 10;
    cout << "After adding 10 ! to the end: ";
    cout << str8 << endl;

    // ������������ ���������� 10 �������� � ������ ������
    MyString str9 = 10 + str6;
    cout << "After adding 10 ! to the start: ";
    cout << str9 << endl;

    // ����������� ���������
    cout << "Add _ to the end: ";
    MyString str10 = str6++;
    cout << str10 << endl;

    // ����������� ��������� (���������� � ������)
    cout << "Add _ to the start: ";
    MyString str11 = ++str6;
    cout << str11 << endl;

    /*MyString str12;
    MyString str13("Hello, world!");

    cout << "Enter a string for str12: ";
    cin >> str12;  

    cout << "str1: " << str12 << endl; 
    cout << "str2: " << str13 << endl;*/

    //HW_13
    cout << "Demonstration of initializer_list constructor: ";
    MyString str12{ 'H', 'e', 'l', 'l', 'o' };
    cout << str12 << endl;

    MyString str13("World");
    MyString str14 = move(str13);  // Move constructor
    cout << str14;

    return 0;
}