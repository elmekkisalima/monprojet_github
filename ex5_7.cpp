#include <iostream>

//EXERCICE5
/*
int main() {
	int x=20;
	int*p=&x;
	int &y=x;
	
	cout<<"la valeur de : "<<x<<endl;
	cout<<"l'adresse de x :  "<<&x<<endl;
	cout<<"la valeur de p: "<<*p<<endl;
	cout<<"l'adresse de p: "<<p<<endl;
	cout<<"la valeur de y : "<<b<<endl;
	cout<<"l'adresse de y : "<<&y<<endl;
	
	return 0;
}
*/
//exercice7
/*
int main(){
	int i,j,aid;
	int T[50];
	for(i=0;i<50;i++){
		cout<<"saisir l'element du tableau "<<i+1<<endl;
		cin>>T[i];
}
		
	for (i=0;i<50;i++){
		cout<<"T["<<i<<"]=";
		cout<<T[i]<<endl;
	}	
		
	cout<<endl;
	int c=0;
	for(i=0;i<50;i++){
		for(j=1;j>50-i-1;j++){
			if (T[j]>T[j+1])
			aid=T[j];
			T[j]=T[j+1];
			T[j+1]=aid;
			c++;
		}
	}	
		
	
	cout<<"le tableau triee est : "<<endl;
	for(i=0;i<50;i++){
		cout<<"T["<<i<<"]=";
		cout<<T[i]<<endl;
	}
	cout<<"le nombre d'echange efectuee est : ";
	cout<<c<<endl;
	return 0;
	*/
}
