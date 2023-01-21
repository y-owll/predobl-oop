#include <iostream>
//типо шахматы


enum class coordinate { a, b, c, d, e, f, g, h };
enum class color { black, white };
class Figure
{
protected:
	coordinate letter; 
	int number; 
	color cvet; 
public:
	Figure(coordinate x, int y, color z)
	{
		letter = x;
		number = y;
		cvet = z;
	}
};

class rook : public Figure
{
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};

class elephant : public Figure
{
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};


class Queen : public Figure
{
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};

class king : public Figure {
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};

class horse : public Figure {
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};


class pawn : public Figure {
public:
	using Figure::Figure;

	int move(coordinate new_letter, int new_number, color) {
		if (((new_letter == letter) && (new_number != number)) || ((new_letter != letter) && (new_number == number))) {
			letter = new_letter;
			number = new_number;
			return 1;
		}
		else return 0;
	}
};


int main()
{
	Queen q(coordinate::e, 5, color::white);
	q.move(coordinate::h, 8, color::white);
	pawn p(coordinate::b, 2, color::black);
	p.move(coordinate::b, 3, color::black);
};