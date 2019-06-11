#include <iostream>
#include <list>
#include <ctime>

using namespace std;

//функция проверки на нечетность
bool isOdd(const int& value) { return value % 2 != 0; }

int main()
{
	srand(time(0));

	list<int> mylist;

	//заполнение списка
	for (int i = 0; i < rand() % 9 + 2; i++)
	{
		mylist.push_back(rand() % 30);
		cout << mylist.back() << "\t";
	}

	//указатель на первый элемент
	int* p1 = &mylist.front();
	cout << "\nList first element pointer: " << p1;

	//удаление нечетных элементов
	mylist.remove_if(isOdd);

	//вывод указателя на первый элемент, если список не пуст
	if (!mylist.empty())
	{
		p1 = &mylist.front();
		cout << "\nUpdated list first element pointer: " << p1;
	}
	else
	{
		cout << "\nUpdated list is empty";
	}
}