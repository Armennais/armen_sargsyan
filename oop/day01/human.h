#include "./date.h"

#ifndef Human_h
#define Human_h

enum Gender { Male, Female};
enum Food { Fagottini, Negrito, Banana, Apple };
enum drink { Coffee, Jaguar, Beer, Tea };
class Human
{
private:
	Date _birth_date;
	Gender _gender;
	int _eye_color;
	int _hair_color;
	Human * _mother;
	Human * _father;
	int _health_level;
	int _fatigue;//Hognatsutyun
	int _spirit;//hamadzakutyun

protected:
	virtual void Work() = 0;
	virtual void Party() = 0;
	virtual void Dance() = 0;

public:
	char * Speak();
	void Walk();
	void Eat(Food);
	void Drink(drink);

};	
#endif //Human_h
