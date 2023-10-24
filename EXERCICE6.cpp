#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//exercice6

int incrementer(int a) {
	
	return a +1;
}
	int permuter ( int *a , int *b ){
		int aid;
		aid = *a;
		*a = *b ;
		*b = aid;
		return 0;
	}

int main() {
	int n,a,b;
	

	cout << "donnez une valeur de n\n ";
	cin >>n;
	incrementer( n);
	cout << "saisir a  \n ";
	cin>>a;
	cout <<"saisir b \n ";
	cin >>b;
	permuter (&a ,&b);
	cout <<"a = 1
	"<< a <<" \t b = "<< b ;
	return 0;
}
