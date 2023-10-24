#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */int i =0;
//exercice1
 /*void appel() {
	i++;
	cout<<"appel numero : "<<i<<"\n";
}
int main() {
	appel();
	return 0;
}
*/
//exercice2
/*
int multiple_2(int n ){
	
	return n%2==0;
	
}

int multiple_3(int n){
	
	return n%3==0;
}



int main(){
	int n;
	cout<<"entrer un nombre entier \n";
	cin>>n;
	 if (multiple_2 (n))
	cout<<"ce nombre est pair \n" ;
	 if (multiple_3 (n))
	cout<<"ce nombre est multiple de 3 \n ";
	 if (multiple_2(n) && multiple_3(n))
	cout <<"il est divisible par 6 \n ";
	
	return 0;
	
}
*/
//exercice3
//premier programme
/*
int main(){

	int T[20], i , min=T[0] , max =T[0];
	 for(i=0 ; i<20 ; i++){
	 	cout<<"entrer l'element du taleau : \n"<<i+1;
	 	cin>>T[i]
		 }
	for(i=0 ; i<20 ; i++){
		if (T[i] > max)
		 T[i]=max;
	}
		 cout<<"le plus grand element du tableau est : "<<max<<"\n";
		 
		for(i=0 ; i<20 ; i++){
			if (T[i] < min )
			T[i] = min;
		}
		cout <<"le plus petit element du tableau est : "<<min<<"\n";
		
	return 0;	
	
}
*/
/*
//deuxiem programme

int main (){
	int T[20],*p,*pmax=T ,*pmin =T , i;
	p= & T[0];
	
	for (i=0 ; i<20 ; i++)
		pmax = p+i;
			if (* (p+i) > *pmax
		cout << "le maximum est : "<<*pmax <<endl;
		
		for (i=0 ; i<20 ; i++)
		 if (* (p+i)< *pmin)
		   pmin =p+i;
		   cout<<"le minimum du tableau est : "<<*pmin<<endl;
		   return 0;
}

		*/
