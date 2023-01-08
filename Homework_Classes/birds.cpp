#include "birds.h"

birds::birds(int flight_speed, const std::string& color, int flapping_wings) {
	_flight_speed = flight_speed;
	_color = color;
	_flapping_wings = flapping_wings;
}

birds::birds()  {
	_flight_speed = 39;
	_color = "Brown";
	_flapping_wings = 13;
}

int birds::get_flight_speed() {
	return _flight_speed;
}
void birds::set_flight_speed(int flight_speed) {
	_flight_speed = flight_speed;
}

std::string& birds::get_color() {
	return _color;
}

void birds::set_color(const std::string& color) {
	_color = color;
}

int birds::get_flapping_wings() {
	return _flapping_wings;
}

void birds::set_flapping_wings(int flapping_wings) {
	_flapping_wings = flapping_wings;
}


parrots::parrots(int flight_speed, const std::string& color, int flapping_wings, const std::string& beak, const std::string& cere):birds(flight_speed, color, flapping_wings) {
	_beak = beak;
	_cere = cere;
}

parrots::parrots(std::string& beak, std::string& cere) :_beak(beak), _cere(cere) {}

std::string& parrots::get_Beak() {
	return _beak;
}

void parrots::set_Beak(const std::string& beak) {
	_beak = beak;
}

std::string& parrots::get_cere() {
	return _cere;
}

void parrots::set_cere(const std::string& cere) {
	_cere = cere;
}

budgerigar::budgerigar(int flight_speed, const std::string& color, int flapping_wings, const std::string& beak, const std::string& cere, int weight, int length):parrots(flight_speed, color, flapping_wings, beak, cere) {
	_length = length;
	_weight = weight;
}

int budgerigar::get_weigth() {
	return _weight;
}

void budgerigar::set_weigth(int weigth) {
	_weight = weigth;
}

int budgerigar::get_length() {
	return _length;
}

void budgerigar::set_length(int length) {
	_length = length;
}