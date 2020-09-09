#include <iostream>
#include <string>

int main() {
	char selection = ' ';
	char finished = ' ';
	bool yes;
	int shirts = 0;
	int suits = 0;
	int pants = 0;
	int totalCost;
	do {
		std::cout << "What do you require washed?\n";
		std::cout << "1: Shirts - 150 NOK\n";
		std::cout << "2: Suits - 100 NOK\n";
		std::cout << "3: Pants - 200 NOK\n";
		std::cout << "Note: 25% tax\n";
		yes = true;
		std::cin >> selection;

		switch (selection) {
		case '1' :
			std::cout << "How many shirts?\n";
			std::cin >> shirts;
			break;
		case '2':
			std::cout << "How many suits?\n";
			std::cin >> suits;
			break;
		case '3':
			std::cout << "How many pants?\n";
			std::cin >> pants;
			break;
		default:
			std::cout << "Error\n";
			break;
		}
		std::cout << "Do you require anything else washed? (Y/N)\n";
		std::cin >> finished;
		switch (finished) {
		case 'Y': case 'y':
			std::cout << "Returning to menu...\n";
			break;

		case 'N': case 'n':
			std::cout << "Proceeding to bill...\n";
			yes = false;
			break;
		}
	} while (yes == true);

	std::cout << "Total: " << (shirts * 150 + suits * 100 + pants * 200) * 1.25 << "\n";
}

//int main() {
//	for (int i=0; i <= 20; i++ ) { //i++ = i+1
//		if (i % 2 == 0) {
//			std::cout << " " << i;
//		}
//	}
//	return 0;
//}

//bool loop;
//
//int main()
//{
//    char option = ' ';
//    do {
//        std::cout << "Pick A, B or C.\n";
//        std::cin >> option;
//
//        switch (option) {
//        case 'A': case 'a':
//            std::cout << "A for Awesome!\n";
//            break;
//        case 'B': case 'b':
//            std::cout << "B for Badass!\n";
//            break;
//        case 'C': case 'c':
//            std::cout << "C for Cool!\n";
//            break;
//
//        case 'Q': case 'q':
//            loop = false;
//            break;
//
//        default:
//            std::cout << "Oy! Wrong input!\n";
//            break;
//        }
//    } while (loop == true);
//}