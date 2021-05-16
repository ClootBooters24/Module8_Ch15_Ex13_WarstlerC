class Square
{
public:
	Square();
	void setSide(double);
	double getSide();
	double calcArea();

private:
	double side;
};

Square::Square()
{
	side = 0.0;
}

void Square::setSide(double sideValue)
{
	if (sideValue > 0.0)
		side = sideValue;
	else
		side = 0.0;
}

double Square::getSide()
{
	return side;
}

double Square::calcArea()
{
	return side * side;
}