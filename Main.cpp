/*
Logan Dawson
Date: January 19, 2026
DogClassWorking.cpp
This program will use set and get functions to st a dog's
name, age, and breed and then call a bark function.

Things that I used to help me on this project: I used the slides from the chapter notes to help me format my code and
then the built in AI code helped complete parts of the code. I will provided additonal commits were it helped me.
*/

#include <iostream>
#include <string>

using namespace std;

class dog   /* Class */
{
private:                  /* Private Var */
	string name;
	string breed;
	int age;
public:                        /* Pulic Var */

	void setName(string);
	void setBreed(string);
	void setAge(int);
	string getName();
	string getBreed();
	int getAge();
	void bark();
};


void dog::setName(string dogName)            /* Setter functions */
{
	name = dogName;
}

void dog::setBreed(string dogBreed)
{
	breed = dogBreed;
}

void dog::setAge(int dogAge)
{
	age = dogAge;
}

string dog::getName()              /* Getter functions */
{
	return name;
}

string dog::getBreed()
{
	return breed;
}

int dog::getAge()
{
	return age;
}

void dog::bark()                          /* Bark function */
{
	cout << "Woof Woof!" << endl;
}

int main()
{
	dog mydog;
	string dogName, dogBreed;
	int dogAge;

	cout << "Please enter your dog's name: " << endl;             /* User input for dog's info */
	cin >> dogName;

	cout << "Please enter your dog's breed: " << endl;
	cin >> dogBreed;

	cout << "Please enter your dog's age: " << endl;
	cin >> dogAge;

	mydog.setName(dogName);                                  /* Built in AI mode helped me set this one up too */
	mydog.setBreed(dogBreed);
	mydog.setAge(dogAge);

	cout << "Here's your dog;s information: " << endl;                    /* Output of your dog's info */
	cout << "Name: " << mydog.getName() << endl;
	cout << "Breed: " << mydog.getBreed() << endl;
	cout << "Age: " << mydog.getAge() << endl;

	mydog.setAge(dogAge + 1);                        /* Setter fucntion to change yur dog's age to what it'll be next year got help with this using built in AI mode*/
	cout << "Next year your dog's age will be: " << mydog.getAge() << endl;

	mydog.bark();

	return 0;
}