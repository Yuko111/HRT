#include "HRT.h"

HRT::HRT(std::string name, std::string surname, int gun, int ay, int yil)
{
	HRT::setname(name);
	HRT::setsurname(surname);
	HRT::setgun(gun);
	HRT::setay(ay);
	HRT::setyil(yil);

}

void HRT::setname(std::string ad)
{
	if (ad <= "z" && ad >= "a") {

		HRT::name = ad;
	}
	else {

		HRT::name = "bilinmiyor";
	}

}

void HRT::setsurname(std::string soyad)
{

	HRT::surname = soyad;

}

void HRT::setay(int a)
{
	
	HRT::ay = a;

}

void HRT::setgun(int g)
{

	HRT::gun = g;

}

void HRT::setyil(int y)
{
	HRT::yil = y;

}

std::string HRT::getname() const 
{

	return HRT::name;

}

std::string HRT::getsurname() const
{

	return HRT::surname;
}

int HRT::getgun() const
{

	return HRT::gun;

}

int HRT::getay() const
{

	return HRT::ay;

}

int HRT::getyil() const {

	return HRT::yil;

}

int HRT::getAge() const
{

	return 2021 - HRT::yil;

}

int HRT::getMaximumHeartRate() const
{

	return 220 - HRT::getAge();

}

float HRT::getTargetHeartRate() const
{

	return HRT::getMaximumHeartRate() * 0.8;

} 

void HRT::showInfos() const
{

	std::cout << "Merhaba" << "  " << HRT::name <<"  "<< HRT::surname <<  std::endl;
	std::cout << "Dogun Tarihiniz:" << HRT::gun << "." << HRT::ay << "." << HRT::yil << "   " << "yasiniz:" << HRT::getAge() <<std::endl;
	std::cout << "Maximum Kalp Atis Hiziniz:" << HRT::getMaximumHeartRate() << std::endl;
	std::cout << "Hedeflenen Nabiz Oraniniz:" << HRT::getTargetHeartRate() << std::endl;



}
