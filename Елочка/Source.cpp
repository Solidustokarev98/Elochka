#include<iostream>
using namespace std;
#define offset "\t\t\t\t\t\t"


#define ELOCHKA
void main() {
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//если определено ELOCHKA, то нижеследующий код, до директивы #endif будет виден компилятору,
	cout<<offset<<"В лесу родилась елочка,\n";
	cout<<offset<<"В лесу она росла,\n";
	cout<<offset<<"Зимой и летом стройная,\n";
	cout<<offset<<"Зеленая была.\n\n";

	cout<<offset<<"Метель ей пела песенку:\n";
	cout<<offset<<"«Спи, ёлочка, бай-бай!»\n";
	cout<<offset<<"Мороз снежком укутывал:\n";
	cout<<offset<<"«Смотри, не замерзай!»\n\n";

	cout<<offset<<"Трусишка зайка серенький\n";
	cout<<offset<<"Под ёлочкой скакал.\n";
	cout<<offset<<"Порою волк, сердитый волк,\n";
	cout<<offset<<"Рысцою пробегал.\n\n";

	cout<<offset<<"Чуть снег по лесу частому\n";
	cout<<offset<<"Под полозом скрипит.\n";
	cout<<offset<<"Лошадка мохноногая\n";
	cout<<offset<<"Торопится, бежит.\n\n";

	cout<<offset<<"Везёт лошадка дровеньки,\n";
	cout<<offset<<"На дровнях мужичок.\n";
	cout<<offset<<"Срубил он нашу ёлочку\n";
	cout<<offset<<"Под самый корешок.\n\n";

	cout<<offset<<"Теперь ты здесь, нарядная,\n";
	cout<<offset<<"На праздник к нам пришла\n";
	cout<<offset<<"И много, много радости\n";
	cout<<offset<<"Детишкам принесла.\n\n";
#endif
}