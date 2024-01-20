/*Name: MUHAMMAD ADAM BIN RAZALI
PARTNER: MUHAMMAD SYAHMI FARIS BIN RUSLI
MATRICS NUMBER(ADAM): A23CS0116
MATRICS NUMBER(SYAHMI): A23CS0138
SUBMISSION DATE: 23 NOVEMBER 2023*/

#include<iostream>
#include<iomanip>
using namespace std;
float malebmr(int, int, int);
float femalebmr(int, int, int);

int main(){
	
	
	int age, height, weight;
	float metabolic;
	char gender, clarification;
	cout << "BASAL METABOLIC RATE (BMR) CALCULATOR\n" << endl;
	
	do{
		
		do
	{
		cout << "AGE  [15 - 80] : ";
		cin >> age;
		
	}while(age < 15 || age > 80);
	
	
	do
	{
		cout << "GENDER [f @ m] : ";
		cin >> gender;
		gender = tolower(gender);
		
	}while(gender != 'f' && gender != 'm');
	
	do
	{
		cout << "HEIGHT (cm) : ";
		cin >> height;
		
	}while(height <= 0);
	
	do
	{
		cout << "WEIGHT (kg) : ";
		cin >> weight;
		
	}while(weight <= 0);
	
	if(gender == 'm')
	metabolic = malebmr(age, height, weight);
	else
	metabolic = femalebmr(age, height, weight);
	
	int sedentary = metabolic * 1.2, exercise1 = metabolic * 1.375, exercise2 = metabolic * 1.55, exercise3 = metabolic * 1.725, exercise4 = metabolic * 1.9, exercise5 = metabolic * 2.0;
	cout << endl;
	cout << "BMR = " << fixed << setprecision(2) << metabolic << " Calories/ day (using Mifflin-St Jeor Equation)\n " << endl;
	
	cout << "ACTIVITY LEVEL \t\t\t\t\t\tCALORIE" << endl;
	cout << "Sedentary: little or no exercise :\t\t\t "  << sedentary << endl;
	cout << "Exercise 1-3 times/week : \t\t\t\t "  << exercise1<< endl;
	cout << "Exercise 4-5 times/week : \t\t\t\t " << exercise2 << endl;
	cout << "Daily exercise or intense exercise 3-4 times/week : \t "<< exercise3 << endl;
	cout << "Intense exercise 6-7 times/week : \t\t\t " << exercise4 << endl;
	cout << "Very intense exercise daily, or physical job : \t\t " << exercise5 << "\n" << endl;
	
	cout << "Exercise: 15-30 minutes of elevated heart rate activity." << endl;
	cout << "Intense exercise: 45-120 minutes of elevated heart rate activity." << endl;
	cout << "Very intense exercise: 2+ hours of elevated heart rate activity.\n" << endl;
	
	cout << "Do you want to enter other data? [Y @ N]: ";
	cin  >> clarification;
	clarification = toupper(clarification);
	cout << "\n";
	
	}while(clarification == 'Y');
	

	return 0;
}



float malebmr(int age, int height, int weight){
	
	float metabolic = (10 * weight) + (6.25 * height) - (5 * age) + 5;
	return metabolic;
	
}

float femalebmr(int age, int height, int weight){
	
	float metabolic = (10 * weight) + (6.25 * height) - (5 * age) - 161;
	return metabolic;
	
}
