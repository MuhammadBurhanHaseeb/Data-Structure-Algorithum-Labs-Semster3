#include<iostream.>
#include<cmath>
using namespace std;
class ComplexNumbers
{
	public:
	double realNumber;
	double imaginaryNumber;
public:
	ComplexNumbers()
    {
		realNumber = imaginaryNumber = 0;
    }
    ComplexNumbers(double realNumber, double imaginaryNumber)
    {
		this->realNumber = realNumber;
		this->imaginaryNumber = imaginaryNumber;
    }
    // this is a operator overloading it is better to use 
	// with this function we can not make more functions to add , subtract or any operation on different Complex Numbers 
	ComplexNumbers operator +(ComplexNumbers c)
	{
		ComplexNumbers temp;
		temp.realNumber = this->realNumber + c.realNumber;
		temp.imaginaryNumber = this->imaginaryNumber + c.imaginaryNumber;
		return temp; 
	}
	ComplexNumbers operator -(ComplexNumbers c)
	{
		ComplexNumbers temp;
		temp.realNumber = this->realNumber - c.realNumber;
		temp.imaginaryNumber = this->imaginaryNumber - c.imaginaryNumber;
		return temp; 
	}
	ComplexNumbers operator *(ComplexNumbers c)
	{
		ComplexNumbers temp;
		temp.realNumber = this->realNumber * c.realNumber;
		temp.imaginaryNumber = this->imaginaryNumber * c.imaginaryNumber;
		return temp; 
	}
	ComplexNumbers operator /(ComplexNumbers c)
	{
		ComplexNumbers temp;
		temp.realNumber = this->realNumber / c.realNumber;
		temp.imaginaryNumber = this->imaginaryNumber / c.imaginaryNumber;
		return temp; 
	}
	
	void display()
	{
		cout<<"the complex no is written as "<<this->realNumber<<" + "<<this->imaginaryNumber<<"i"<<endl; 
	}
};

int main()
{
	ComplexNumbers c(7,8);
	ComplexNumbers c1(1,2);
	ComplexNumbers c2(3,4);
	ComplexNumbers c3(5,6);
	ComplexNumbers c4;
	// add the two complex no's with thw help of operator overloading
	//this is for better understanding istead of c.add(c1)
	// if you want to add three complex no with c.add(c1) method then this make it complex code
	//that's why operator overloading is more efficient
	//it know that real no add to real no or imag no add to imag no   
	c4 = c + c1 + c2 + c3 ;
	c4.display();
	// multiply the two complex no's with thw help of operator overloading
	c4 = c * c1 * c2;
	c4.display();
	// subtract the two complex no's with thw help of operator overloading
	c4 =  c2 - c3 ;
	c4.display();
	// divide the two complex no's with thw help of operator overloading
	c4 =  c1 / c2 / c3 ;
	c4.display();


	  
}