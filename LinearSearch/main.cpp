
#include <iostream>

//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";


}

template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int search_last_index(T arr[], const int length, T value) {   // не праильный вариант, программа так не работает int begin = length -1) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Линейный посик элементов в массиве
	/*const int size = 10;
	int arr[size]{ 10,  17, 8, -1, 90, 17, 11, 10, 0, 50 };
	//              0    1  2   3   4   5   6   7  8   9

	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	int index;
	
	// Ленейный поиск ПЕРВОГО ВХОЖДЕНИЯ  в массив
	//index = search_index(arr, size, n, 3);
	//if (index != -1)
	//	std::cout << "Индекс числа " << n << ": " << index << '\n';
	//else
	//	std::cout << "Числа нет в массиве.\n ";

	// Линейный поиск ПОСЛЕДНЕГО ВХОЖДЕНИЯ  в массив
		index = search_last_index(arr, size, n, 5);
	if (index != -1)
		std::cout << "Позиция последнего вхождения числа в массив: " << index << '\n';
	else
		std::cout << "Числа нет в массиве.\n ";*/



	return 0;

}