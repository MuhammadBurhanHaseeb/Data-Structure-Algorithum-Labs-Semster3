#include<iostream.>
#include<cmath>
using namespace std;
class ComplexNumbers
{
	private:
	double realNumber;
	double imaginaryNumber;
	char symbol;
public:
	ComplexNumbers()
    {
		realNumber = imaginaryNumber = 0;
    }
    ComplexNumbers(double realNumber)
    {
		this->realNumber = realNumber;
		imaginaryNumber = 0;
    }
    ComplexNumbers(double realNumber, double imaginaryNumber)
    {
		this->realNumber = realNumber;
		this->imaginaryNumber = imaginaryNumber;
    }
	ComplexNumbers(double realNumber, char symbol, double imaginaryNumber)
    {
		this->realNumber = realNumber;
		this->symbol = symbol;
		this->imaginaryNumber = imaginaryNumber;
    }
	ComplexNumbers(const ComplexNumbers & obj)
	{
		realNumber = obj.realNumber;
		imaginaryNumber = obj.imaginaryNumber;
	}
	void add(double realNumber, double imaginaryNumber)
	{
		this->realNumber = this->realNumber + realNumber;
		this->imaginaryNumber = this->imaginaryNumber + imaginaryNumber;
	}
	void subtract(double realNumber, double imaginaryNumber)
	{
		this->realNumber = this->realNumber - realNumber;
		this->imaginaryNumber = this->imaginaryNumber - imaginaryNumber;
	}
	void divide(double realNumber, double imaginaryNumber)
	{
		this->realNumber = this->realNumber / realNumber;
		this->imaginaryNumber = this->imaginaryNumber / imaginaryNumber;
	}
	void multiply(double realNumber, double imaginaryNumber)
	{
		this->realNumber = this->realNumber * realNumber;
		this->imaginaryNumber = this->imaginaryNumber * imaginaryNumber;
	}
	void conjugate()
	{
		if (this-> symbol == '+')
		{
			this->symbol = '-';
		}
		else if (this->symbol == '-' )
		{
			this->symbol = '+';
		}	
	}
	void display()
	{
		cout<<"the complex no is written as "<<this->realNumber<<" + "<<this->imaginaryNumber<<"i"<<endl; 
	}
	int getReal()
	{
		return this->realNumber;
	}
	int getImag()
	{
		return this->imaginaryNumber;
	}
	void setReal(int realNumber)
	{
		this->realNumber = realNumber;
	}
	void setImag(int imaginaryNumber)
	{
		this->imaginaryNumber = imaginaryNumber;
	}
	char getSymbol()
	{
		return this->symbol;
	}
};

int main()
{
	ComplexNumbers c(7,8);
	c.add(7,2);
	cout<<"tha add function result are  ";
    cout<<" real no is  "<<c.getReal();
	cout<<"  imaginary no is  "<< c.getImag()<<endl;

	ComplexNumbers b(7,8);
	b.subtract(2,2);
	cout<<"tha subtract function result are  ";
    cout<<" real no is  "<<b.getReal();
	cout<<"  imaginary no is  "<< b.getImag()<<endl;

	ComplexNumbers d(6,8);
	d.divide(2,2);
	cout<<"tha divide function result are  ";
    cout<<" real no is  "<<d.getReal();
	cout<<"  imaginary no is  "<< d.getImag()<<endl;

	ComplexNumbers e(6,8);
	e.multiply(2,2);
	cout<<"tha multiply function result are  ";
    cout<<" real no is  "<<e.getReal();
	cout<<"  imaginary no is  "<< e.getImag()<<endl;

    ComplexNumbers o(6,8);
    ComplexNumbers p(o);
	p.display();

	cout<<"print real no from the getter " << o.getReal() <<" print imaginary no from the getter  "<< o.getImag()<<endl;
	int t , y ;
	cout<<"enter new real no "<<endl;
    cin >> t;
	cout<<"enter new imaginary no "<<endl;
    cin >> y;
    cout<<" first set real no from the setter instead of 6 ";
    o.setReal(t);
    cout<<"  first set imaginary no from the setter  ";
    o.setImag(y);
	cout<<endl;
	cout<<"after set real no from the setter  " << o.getReal() <<"  after set imaginary no from the setter  "<< o.getImag()<<endl;

	ComplexNumbers conj(2,'+',3);
	conj.conjugate();
	cout<<"after taking conjugate of the complex no " << "  the no is " <<conj.getReal() << conj.getSymbol() <<conj.getImag() << "i"<<endl;  
}


