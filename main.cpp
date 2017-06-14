#include <iostream>
#include <string>
#include <algorithm>
#include "lib.h"
#include <cmath>
#include <array>
#include <vector>
#include <iterator>


bool test_cmp_float(bool fnc_ret, bool expected){

	if(fnc_ret == expected){
		std::cout << "passed" << std::endl;
		return true;
	}else{
			
		std::cout << "failed!!" << std::endl;
		return false;
	}
	

}

float cmp_float(float first, float secnd){


	float i = 0.000001;


	if(std::abs(first - secnd) > i) return false;
       return true;	


}
struct MyType {
	MyType(){};
	MyType( const MyType& rhs){}; 
    	MyType( MyType& rsh){};
};

class nowaKlasa{

	int zmiennaInt;

	double zmiennaDouble;

	public:
	nowaKlasa(){
		zmiennaInt = 0;
		zmiennaDouble = 0;

	};

	nowaKlasa(int nowyInt, double nowyDouble){
		this->zmiennaInt = nowyInt;
		this->zmiennaDouble = nowyDouble;
	
	}
	nowaKlasa( nowaKlasa& obj){
		this->zmiennaInt = obj.zmiennaInt;
		this->zmiennaDouble = obj.zmiennaDouble;


	};

	int getInt(){
		return zmiennaInt;
	}
	double getDouble(){
		return zmiennaDouble;
	}
	void setInt(int nowyInt){
		this->zmiennaInt = nowyInt;
	}

	void setDouble(double nowyDouble){
		this->zmiennaDouble = nowyDouble;
	}
};

//MyType getType() { return MyType{};}

int main(){


	print();
//---------------------------------------------------------------------------------	
	int number = 111;

	std::cout << "liczba w dziesietnym: " << number << std::endl;
	std::cout << "liczba w osemkowym: " << std::oct << number << std::endl;
	std::cout << "liczba w szesnastkowym: " << std::hex <<number << std::endl;

//---------------------------------------------------------------------------------
	test_cmp_float( cmp_float(0.1, 0.1), true);
	
	test_cmp_float( cmp_float(0.1, 0.2), false);
	test_cmp_float( cmp_float(0.000001,0.000001 ), true);
	test_cmp_float( cmp_float(0.12345,0.12345 ), true);
	test_cmp_float( cmp_float(0.12345,12346 ), false);

//---------------------------------------------------------------------------------
// to do: odwracanie utf8
	std::string napis = u8"pepe the frog";
	std::string napis_odwrocony = napis;
	std::reverse(napis_odwrocony.begin(), napis_odwrocony.end());
	std::cout <<"oryginalny napis: " <<  napis << std::endl;
	std::cout <<"odwrocony napis: " <<  napis_odwrocony << std::endl;
//--------------------------------------------------------------------------------
//
// VECTOR
//
	std::vector<int> a = {1,2,3,4};
	std::vector<int> a2 = {4,4,4,4};

	std::vector<int> a_conc, a_conc_rev;
	a_conc.insert(a_conc.end(), a.begin(), a.end());
	a_conc.insert(a_conc.end(), a2.begin(), a2.end());
	
	a_conc_rev = a_conc;
	std::reverse(a_conc_rev.begin(), a_conc_rev.end());

	//ARRAY
	/*
	std::array<int,4> a  = {1,2,3,4};
	std::array<int,4> a2 = {4,4,4,4};

	std::array<int,8> a_conc, a_conc_rev;
	std::merge(a.begin(), a.end(), a2.begin(), a2.end(), a_conc.begin());
*/
	a_conc_rev = a_conc;
	std::reverse(a_conc_rev.begin(), a_conc_rev.end());
	for (auto i = a_conc.begin(); i !=a_conc.end(); ++i)
	    std::cout << *i << ' ';
	std::cout <<std::endl;
	for (auto i = a_conc_rev.begin(); i !=a_conc_rev.end(); ++i)
	    std::cout << *i << ' ';

	std::cout << std::endl;

	int tab1[] = {1,2,3,4};
	int tab2[] = {4,4,4,4};
	//c style concat of arrays
	int *tab3 = (int*) malloc (sizeof(int)*(sizeof(tab1)/sizeof(int)+sizeof(tab2)/sizeof(int)));
	c_style_conc(tab1,sizeof(tab1) , tab2, sizeof(tab2), tab3);
	std::cout<<"c style: " << std::endl;
	for(int i=0; i<8; i++) std::cout << tab3[i] << " " ;
	std::cout << std::endl;	
	c_reverse(tab3, sizeof(tab3));
	
	for(int i=0; i<8; i++) std::cout << tab3[i] << " " ;
	std::cout << std::endl;	
	free(tab3);
//-------------------------------------------------------------------------------------

	
 	MyType b; 
//      	MyType type {b};

 //       MyType c { getType() };




//--------------------------------------------------------------------------------------


	nowaKlasa pepe(15, 13);
	pepe.setInt(16);
	nowaKlasa epep(pepe);
	std::cout << "pepe int: " << std::dec <<pepe.getInt() << std::endl;

	
	std::cout << "epep int: " << epep.getInt() << std::endl;























}
