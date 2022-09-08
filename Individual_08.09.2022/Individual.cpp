#include<iostream>

//создать ф-ю возвращающую сумм 2-х переданных ей чисел

int sum(int num1, int num2) {
	return num1+num2;
}
//создать ф-ю выводящую несколько сообщений в консоль
void  hi() {
	std::cout << "hello world\n";
	std::cout << "bye world\n";

}
//создать функцию выводящую переданный массив в консоль
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
	std::cout << "Массив:\n";
	show_arr(arr, size);
	/*hi();
	hi();
	hi();*/

	//sum
	/*std::cout << sum(10, 6) << "\n";
	std::cout << "введите 2 числа";
	std::cin >> n >> m;
	std::cout << sum(n, m) << "\n";*/

	
	return 0;
}