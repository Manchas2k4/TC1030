/*************************************************************
* File: item.cpp
* Author: Pedro Perez
* Description: This file contains the implementation of Item
*							 class.
*
* Copyright (c) 2021 by Tecnologico de Monterrey.
* All Rights Reserved. May be reproduced for any non-commercial
* purpose.
*************************************************************/
#include "item.h"

Item::Item()
	: type(NONE), id(0), title("noname"), year(0), borrowed(false) {
}

Item::Item(ItemType it, uint i, std::string n, int y, bool b)
	: type(it), id(i), title(n), year(y), borrowed(b) {
}

Item::Item(const Item &item)
	: type(item.type), id(item.id), title(item.title),
		year(item.year), borrowed(item.borrowed) {
}

ItemType Item::getType() const {
	return type;
}

uint Item::getId() const {
	return id;
}

std::string Item::getTitle() const {
	return title;
}

int Item::getYear() const {
	return year;
}

bool Item::isBorrowed() const {
	return borrowed;
}

void Item::setType(ItemType t) {
	type = t;
}

void Item::setId(uint i) {
	id = i;
}

void Item::setTitle(std::string t) {
	title = t;
}

void Item::setYear(int y) {
	year = y;
}

void Item::setBorrowed(bool b) {
	borrowed = b;
}

std::string Item::toString() const {
	std::stringstream aux;

	aux << type << "," << id << "," << title << "," << year
			<< "," << borrowed;
	return aux.str();
}
