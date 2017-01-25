class myClass
{
	
 public:
	myClass();
	int getNum();
	void setNum(int x);
	char getChar();
	void setChar(char y);
	~myClass();
	
 private:
	int Num;
	char Char;
	
};

myClass::myClass()
{
	Num = 0;
	Char = ' ';
}

void myClass::setNum(int x)
{
	Num = x;
}

int myClass::getNum()
{
	return Num;
}

void myClass::setChar(char y)
{
	Char = y;
}

char myClass::getChar()
{
	return Char;
}

myClass::~myClass()
{
}
