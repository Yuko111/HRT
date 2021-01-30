#ifndef HRT_H_
#define HRT_H_

#include <iostream>
#include <string>


class HRT {

	std::string name, surname;
	int gun, ay, yil;

public:

	explicit HRT(std::string, std::string, int, int, int);

	void setname(std::string);
	void setsurname(std::string);
	void setgun(int);
	void setay(int);
	void setyil(int);
	//////////////////////////////////////////////////////////
	std::string getname()const;
	std::string getsurname()const;
	int getgun()const;
	int getay()const;
	int getyil()const;
	int getAge()const;
	int getMaximumHeartRate()const;
	float getTargetHeartRate()const;
	void showInfos() const;

};

