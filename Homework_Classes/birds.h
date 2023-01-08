#pragma once
#include <iostream>
#include <string>

class birds
{
public:
	birds(int flight_speed, const std::string& color, int flapping_wings);

	birds();

	int get_flight_speed();
	void set_flight_speed(int flight_speed);

	std::string& get_color();
	void set_color(const std::string& color);

	int get_flapping_wings();
	void set_flapping_wings(int flapping_wings);

private:
	int _flight_speed;
	std::string _color;
	int _flapping_wings;
};


class parrots : public birds
{
public:
	parrots(int flight_speed, const std::string& color, int flapping_wings, const std::string& beak, const std::string& _cere);
	parrots(std::string& beak, std::string& _cere);

	std::string& get_Beak();
	void set_Beak(const std::string& beak);

	std::string& get_cere();
	void set_cere(const std::string& cere);


private:
	std::string _beak;
	std::string _cere;
};

class budgerigar : public parrots
{
public:
	budgerigar(int flight_speed, const std::string& color, int flapping_wings, const std::string& beak, const std::string& cere,int weight, int length);
	budgerigar();

	int get_weigth();
	void set_weigth(int weigth);

	int get_length();
	void set_length(int length);

private:
	int _weight;
	int _length;
};

