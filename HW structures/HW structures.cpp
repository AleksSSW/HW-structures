// HW structures.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct movies {
	std::string name = "noname";
	int year = 1959;
	std::string genre = "Comedy";
	unsigned int duration = 120;
	unsigned int price = 50;
	};

void print_movies(movies& mo) {
	std::cout << "Name of the  film: " << mo.name << std::endl;
	std::cout << "Release date of the  film: " << mo.year << std::endl;
	std::cout << "Genre of the film: " << mo.genre << std::endl;
	std::cout << "Duration of the  film: " << mo.duration << std::endl;
	std::cout << "Price of the disk of the  film: " << mo.price << " dollars" << std::endl;
}

 std::string expensive(movies &x, movies &y, movies &z) {
	
	if (x.price > y.price) {
		if (x.price > z.price)
			return x.name;
		else
			return z.name;
	}
	else {
		if (y.price > z.price)
			return y.name;
		else 
			return z.name;
	}
	return "";
}

 void update_info(movies* pmo) {
	 int c;
	 std::cout << "Choose information for change:\n1.Name;\n2.Release date;\n3.Genre;\n4.Duration;\n5.Price.\n";
	 std::cin >> c;
	 
 }

int main()
{
	movies f1{
		"Some like it hot",
		1959,
		"Comedy",
		120,
		50
	};
	print_movies(f1);
	std::cout << "_________________________________________\n";
	movies f2{
		"Die hard",
		1988,
		"Thriller",
		90,
		58
	};
	print_movies(f2);
	std::cout << "_________________________________________\n";
	movies f3{
		"Intouchables",
		2010,
		"Tragedy",
		125,
		80
	};
	print_movies(f3);
	
	std::cout << "The movie with the highest price is " << expensive(f1, f2, f3) << "\tdollars";
	
	
	
	
	
	
	
	return 0;
}

