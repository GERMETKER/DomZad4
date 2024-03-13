#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string chek = "";
	int koofpiz;
	float skid1;
	float skid2;
	int allpiz = 0;
	int ch1 = 0;
	int ch2 = 0;
	float kolvodrink = 0.0;
	float kolvopizz = 0.0;
	float sum = 0.0;
	int drink = 0;
	int pizz = 0;
	int choise = 0;
	float sumdrink = 0.0;
	float sumpizz = 0.0;
	int pep = 0;
	int grech = 0;
	int barb = 0;
	int che4 = 0;
	int coke = 0;
	int cokesum;
	int liptgr = 0;
	int liptbl = 0;
	std::cout << "Добро пожаловать в нашу пиццерию!\n";
	std::cout << "Желаете сделать заказ?(1 - да, 2 - нет)\n";
	std::cin >> choise;
	if (choise == 1)
	{
		std::cout << "Отлично\n";

		do
		{
			std::cout << "Выбрите пиццу!(1 - пепперони(6,64 доллара), 2 - греческая(6,68 доллара), 3 - барбекю(6,6 доллара), 4 - четыре сыра(6,67 доллара), 5 - пицца не нужна)\n";
			std::cin >> pizz;
			std::cout << "Выберите количество пиццы!\n";
			std::cin >> kolvopizz;
			if (pizz == 1)
			{
				pep++;
				sumpizz = sumpizz + 6.64 * kolvopizz;
				if (kolvopizz > 5)
				{
					koofpiz = kolvopizz / 5;
					sumpizz = sumpizz - 6.64 * koofpiz;
				}
			}
			else if (pizz == 2)
			{
				grech++;
				sumpizz = sumpizz + 6.66 * kolvopizz;
				if (kolvopizz > 5)
				{
					koofpiz = kolvopizz / 5;
					sumpizz = sumpizz - 6.66 * koofpiz;
				}
			}
			else if (pizz == 3)
			{
				barb++;
				sumpizz = sumpizz + 6.6 * kolvopizz;
				if (kolvopizz > 5)
				{
					koofpiz = kolvopizz / 5;
					sumpizz = sumpizz - 6.6 * koofpiz;
				}
			}
			else if (pizz == 4)
			{
				che4++;
				sumpizz = sumpizz + 6.7 * kolvopizz;
				if (kolvopizz > 5)
				{
					koofpiz = kolvopizz / 5;
					sumpizz = sumpizz - 6.7 * koofpiz;
				}
			}
			std::cout << koofpiz << "\n";
			std::cout << "Если вы выбрали всю нужную пиццу, нажмите - 1, если нужно ещё - нажмите 2\n";
			std::cin >> ch1;
		} while (ch1 != 1);
		do
		{
			std::cout << "Выберите напиток! Цена за 0,5 литра (1 - Добрый кола(2 доллара), 2 - Липтон зелёный(0,27 доллара), 3 - Липтон чёрный(0.27 доллара), 4 - напиток не нужен)\n";
			std::cin >> drink;
			std::cout << "Выберите количество напитков!\n";
			std::cin >> kolvodrink;
			if (drink == 1)
			{
				coke++;
				std::cout << "Хорошо!\n";
				sumdrink = sumdrink + 2 * kolvodrink;
			}
			else if (drink == 3)
			{
				liptgr++;
				std::cout << "Хорошо!\n";
				sumdrink = sumdrink + 0.27 * kolvodrink;
			}
			else if (drink == 4)
			{
				liptbl++;
				std::cout << "Хорошо!\n";
				sumdrink = sumdrink + 0.27 * kolvodrink;
			}
			else
			{
				std::cout << "Хорошо!\n";
			}
			std::cout << "Если вы выбрали всю нужные напитки, нажмите - 1, если нужно ещё - нажмите 2\n";
			std::cin >> ch2;
		} while (ch2 != 1);
		sum = sumdrink + sumpizz;
		if (sum > 50)
		{
			skid1 = sum * 0.2;
		}
		if (coke > 3)
		{
			cokesum = cokesum * 0.15;
		}
		sum = sum - skid1 - cokesum;
		if (pep > 0)
		{
			std::cout << "Пеппперони - " << pep << " шт - " << 6.64 * pep << " долларов\n"
		}


	}
	else
	{
		std::cout << "На нет суда нет\n";
	}
	return 0;
}