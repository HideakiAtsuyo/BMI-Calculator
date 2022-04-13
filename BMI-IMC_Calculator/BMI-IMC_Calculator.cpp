//You are not supposed to be dumb so I will not waste my time on handling stupid typo mistakes for questions

//Includes
#include <iostream>
#include <math.h>
#include <format>

//Variables
std::string name;
int age;
double height, weight, heighResult, imc;

std::string getResult(double imc);
double fix(double x);

//Main Function
int main()
{
	//Questions
	std::cout << "Welcome on BMI Calculator !\n";
	std::cout << "Please enter your name: ";
	std::cin >> name;
	std::cout << "Please enter your age: ";
	std::cin >> age;
	std::cout << "Please enter your height: ";
	std::cin >> height;
	std::cout << "Please enter your weight: ";
	std::cin >> weight;

	//Calculation
	heighResult = height * height;
	imc = fix(weight / (pow(height, 2) / 10000));

	std::cout << std::format("Your BMI is {}{}", imc, getResult(imc)) << std::endl;
	system("pause");
}

double fix(double x) {
	std::string imcFixed = std::to_string(x);
	imcFixed.erase(imcFixed.begin() + 5, imcFixed.end());
	return std::stod(imcFixed);
}

std::string getResult(double imc)
{
	if (imc <= 18)
		return " and you are underweight";
	else if (imc > 18 && imc <= 25)
		return " and you are normal weight";
	else if (imc > 25 && imc <= 30)
		return " and you are overweight";
	else if (imc > 30 && imc <= 35)
		return " and you are obese";
	else if (imc > 35 && imc <= 40)
		return " and you are very obese";
	else if (imc > 40)
		return " and you are morbidly obese";
	else
		return " and you are not a human";
}
