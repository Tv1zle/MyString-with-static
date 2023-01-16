#pragma once
class MyString
{
	char* str;
	int l;
	static unsigned int objcount;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();


	void MyStrcpy(MyString& obj); // ����������� �����
	void Print();
	bool MyStrStr(const char* str); // ����� ��������� � ������
	void MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	int MyStrLen();// ���������� ����� ������
	void MyStrCat(MyString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������ 
	int MyStrCmp(MyString& b); // ��������� ����� 
};