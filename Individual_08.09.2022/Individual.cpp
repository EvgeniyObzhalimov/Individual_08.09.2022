#include<iostream>

//������� �-� ������������ ���� 2-� ���������� �� �����

int sum(int num1, int num2) {
	return num1+num2;
}
//������� �-� ��������� ��������� ��������� � �������
void  hi() {
	std::cout << "hello world\n";
	std::cout << "bye world\n";

}
//������� ������� ��������� ���������� ������ � �������
void show_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b.\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size = 5;
	int arr[size]{ 4,2,6,8,5 };
	std::cout << "������:\n";
	show_arr(arr, size);
	/*hi();
	hi();
	hi();*/

	//sum
	/*std::cout << sum(10, 6) << "\n";
	std::cout << "������� 2 �����";
	std::cin >> n >> m;
	std::cout << sum(n, m) << "\n";*/

	
	return 0;
}