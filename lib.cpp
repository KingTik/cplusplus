#include <iostream>
#include <string.h>
void print(){


	std::cout << "hi there" << std::endl;


}


int c_style_conc(int *tab1, size_t tab1_s, int *tab2, size_t tab2_s, int *tab3){


	int shift = tab1_s / sizeof(tab1[0]);
	memcpy(tab3, tab1, tab1_s);
	memcpy(tab3+shift, tab2, tab2_s);
	return 0;
}


int c_reverse(int *tab, int len){

	int tmp;
	


	for(int i = 0; i< len/2; i++){
	
		tmp = tab[i];
	       	tab[i] = tab[len-i-1];
		tab[len-i-1] = tmp;	
	
	}




}
