// Template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "conio.h"

using namespace std;

/** @brief �����-�� �����.*/
class A
{
public:
	/**@brief ���� int*/
	int var1;
	/**@brief ���� int*/
	int var2;
	/** @brief ����������� �� ���������*/
	A()
	{
		var1 = 0;
		var2 = 0;
	}
//*@funcltion swap1 �������, �������������� �������� �� �������� � �������� �������� ������� ������� � ������ �������������� ������
	//*@param b ������ �� ���������� �������
	void swap1 (A &a)
	{
	if (this->var1 < a.var1)
		{
			A tmp;/// ������ ��������� ����������
			tmp.var1 = this->var1;///������������ ��������� � ��������
			tmp.var2= this->var2;
			this->var1 = a.var1;///������������ ������� � �����������
			this->var2 = a.var2;
			a.var1 = tmp.var1;///������������ ���������� � ��������
			a.var2 = tmp.var2;
		}
	}

	void print ()
	{
		cout << this->var1 << " ";
	}

   
};

/**@brief �����-�� �����*/
class B
{
public:
	/**@brief ���� double*/
	double var1;
	/**@brief ���� char*/
	char var2;
	/** @brief ����������� �� ���������*/
	B()
	{
		var1 = 0;
		var2= 0;
	}
	//*@funcltion swap1 �������, �������������� �������� �� �������� � �������� �������� ������� ������� � ������ �������������� ������
	//*@param b ������ �� ���������� �������
	void swap1 (B &b)
	{
		if (this->var1 < b.var1)/// ���� ���������� ������� ������
		{
			B tmp;/// ������ ��������� ����������
			tmp.var1 = this->var1;///������������ ��������� � ��������
			tmp.var2= this->var2;
			this->var1 = b.var1;///������������ ������� � �����������
			this->var2 = b.var2;
			b.var1 = tmp.var1;///������������ ���������� � ��������
			b.var2 = tmp.var2;
		}
	}

	void print ()
	{
		cout << this->var1 << " ";
	}

	
};

/**@function sort
@brief ��������� �������, ������������ ���������� ������� �� �����������
@param mas ��������� �� ������
@param count ���������� ��������� �������*/
template <class T>
void sort(T *mas, int count)
{

	
	for (int i = count-1; i>0; i--)///�������� ���� ����������� �� �������
	{
		for (int j = 1; j < i+1; j++) ///���������� ���� ����������� �� �������
		{
			mas[j].swap1(mas[j-1]);///������������ �������� � ����� �������
		}
	}

		
	for (int j = 0; j<count; j++)
	{
		mas[j].print();
	}
}





/**@function _tmain
@brief ������� �������
*/
int _tmain(int argc, _TCHAR* argv[])
{
	A *masA = new A[10];
	B *masB = new B[10];
	cout << "Enter class A elements (10)";
	for (int i = 0; i <10; i++)
	{
		cin >> masA[i].var1;
	}

	cout << "\n\n";

	sort <A> (masA, 10);
		
	cout << "\n\n";


	cout << "Enter class B elements (10)";
	for (int i = 0; i <10; i++)
	{
		cin >> masB[i].var1;
	}

	
	cout << "\n\n";
	
	sort <B> (masB, 10);

	return 0;
}

