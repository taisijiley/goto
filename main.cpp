#include <iostream>
using namespace std;

/* goto */

int main()
{
	cout << "one" << endl;
	goto link; // �� ����� link ����� ��� ������ �������� 
	cout << "two" << endl;//���������� 
	cout << "three" << endl;//����������
	link: //�������������
	cout << "four" << endl;
	cout << "five" << endl;
}