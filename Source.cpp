//����������� �� ����� FILE1 � ���� FILE2 ��� ������, ������� �������� ������ ���� �����. ����� �����, ���������� 5 ��������, � ����� FILE2.
#include<iostream>
#include<fstream>
#include<windows.h>
#include <string>
using namespace std;
int main()
{
	int j;
	char A[30];
	setlocale(LC_ALL, "rus");
	ofstream ofs("FILE1.txt"); //�������
	ifstream f2; //�������� ����
	ofstream f3("FILE2.txt"); // �������� �����
	if (ofs.is_open()) //���������� ������ � ����
	{
		ofs << "������" << endl;
		ofs << "���� �����" << endl;
		ofs << "�����" << endl;
	}
	else
	{
		cout << "End of program" << endl;
	}
	f2.close();
	f3.close();
	f2.open("FILE1.txt");
	f3.open("FILE2.txt");

	while (f2.eof() == 0) {
		f2.getline(A, 30);
		int k = 0;
		for (j = 0; A[j] != '\0'; j++)
		{
			if (A[j] == ' ')
				k++;
		}
		if (k == 0)
		{
			f3 << A << endl;
			if (j == 5)
			{
				cout << A;
			}
		}
	}

	ofs.close();
	f2.close();
	f3.close();
}