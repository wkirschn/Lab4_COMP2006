/*
*   Project: COMP2006 - Lab 4
*   Name:    Wyatt Kirscner
*   Date:    October 13th
*   Notes:   Wasn't able to have the program line up the right side of the rectangle. Created my own methods as required.
*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangle.h"

using namespace std;

string Rectangle::to_str() const
{
	// create horizontal line for width
	string w = "";
	for (int i = 0; i < width; ++i)
	{
		w += "* ";
	}
	w += '\n';
	// create horizontal line for height
	string h = "";
	for (int i = 0; i < width; ++i)
	{
		if (i == 0 || i == width - 1)
		{
			h += "* ";
		}
		else
		{
			h += " ";
		}
	}
	h += '\n';
	// create complete string
	string s = "";
	s += w;
	for (int i = 0; i < height - 2; ++i)
	{
		s += h;
	}
	s += w;
	return s;
}

Rectangle::Rectangle(int h, int w) {
	this->height = h;
	this->width = w;
}

int Rectangle::get_area() const {
	int area = width * height;
	return area;
}

int Rectangle::get_perimeter() const {
	int para = 2 * (width + height);
	return para;
}

Rectangle::~Rectangle() {
	width = 0;
	height = 0;
}

void Rectangle::set_height(int h) {
	this->height = h;
}

int Rectangle::get_height() const {
	return height;
}

void Rectangle::set_width(int w) {
	this->width = w;
}

int Rectangle::get_width() const {
	return width;
}
