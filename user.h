#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

//Samuel Parker, 10/2019
//Personal Project

//constants
const char SIZE= 21;

//this is a new type for the definition of the fdt in the user class
typedef void (*functype)(void);

//this object contains a user's name and coordinates
class user
{
	public: 
	user();
	user(char *);
	void listen();
	//~user();

	private: 
	//functions for coordinate alteration
	void up(void);
	void down(void);
	void left(void);
	void right(void);
	static functype fdt[]= {&user::up, &user::down, &user::left, &user::right};

	//user status/info
	char * id;
	int x;
	int y;
	
};
