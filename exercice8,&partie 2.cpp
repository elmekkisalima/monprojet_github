
//exercice8


/*
class Complexe{

	public:
double imaginaire;
double reel;

Complexe (double r, double i):

	reel(r),imaginaire(i){}
	


};
//addition
Complexe addition (const Complexe&autre){
	double reel_v = reel + autre.reel ;
     double	imaginaire_v = imaginaire + autre.imaginaire;
		return Complexe (reel_v , imaginaire_v);
}

//soustraction
Complexe soustraction (const Complexe & autre ){
	double	reel_v = reel - autre.reel ;
	 double imaginaire_v = imaginaire - autre.imaginaire;
		return Complexe (reel_v , imaginaire_v);
}
		
			

//multiplaction
Complexe multiplaction (const Complexe &autre){
	double	reel_v = reel * autre.reel ;
	  double imaginaire_v = imaginaire * autre.imaginaire;
		return Complexe (reel_v , imaginaire_v);
}

//division
Complexe division (const Complexe & autre ){
	double denominateur = autre reel * autre reel +autre imaginaire * autre iamginaire;
	double reel_v = (reel * autre.reel + imaginaire * autre.imaginaire)/denominateur;
	double imaginaire_v =(imaginaire * autre.reel - reel*  autre.imaginaire)/denominateur;
	return Complexe (reel_v,imaginaire_v);	
}

//affichage
void afficher(){
	cout <<reel<<"+"<<"i"<<imaginaire <<"\n";
}

int main(){

Complexe nombre1(0,0);
Complexe nombre2(0,0);

	int c;
	cout <<"entrez la partie reelle du premier nombre complexe : ";
	cin>>nombre1.reel;
	cout <<"entrez la partie imaginaire de premier nombre complexe : ";
	cin>>nombre1.imaginaire;
	cout <<"entrer la partie reelle de deuxieme nombre complexe : ";
	cin>>nombre2.reel;
	cout <<"entre la partie imaginaire de deuxieme nombre complexe : ";
	cin>>nombre2.imaginaire;
	
	//menu
	cout<<"operations disponibles \n";
	cout<<"1-addition \n";
	cout<<"2-soustraction\n";
	cout<<"3-multiplication \n";
	cout<<"4-division \n";
	cout<<"choisissez un nombre pour l'operation \n";
	cin>>c;
	
	Complexe resultat(0,0);
	
	 switch(c){
	 	case 1 :
	 		resultat=nombre1.addition(nombre2);
	 		break;
	 	case 2 :
	 		resultat=nombre1.soustraction(nombre2);
	 		break;
	 	case 3 :
	 		resultat=nombre1.multiplication(nombre2);
	 		break;
	 	case 4:
	 		resultat=nombre1.division(nombre2);
	 		break;
	 	default :
	 		cout<<"operation introuvable \n";
	 		
	 	}
	 		
	 cout <<"reultat de choix de menu :\n";
	 resultat.afficher();


	 return 0;
	 
}
*/
//exercice9
/*
#include <string>

class Animal{
	protected:
		string nom ;
		int age;
	public:
		void set_value(const string &N, int A){
			
			nom = N;
		    age = A;
		}
};
		//sous classe zebra
		class Zebra : public Animal{
			public:
				
			void set_value(const string &N , int A , const string &origine   ){
				nom=N;
				age = A;
				cout<<"Zebre"<<nom<<"age"<<age<<"origine"<<origine<<endl;
			}
	};
		
		//sous class Dolphine
		class Dolphine : public Animal{
			public:
		void set_value(const string &N ,int A , const string &origine )	{
			nom = N;
			age = A;
			cout<<" Dolphine "<<nom<<" age "<<age<<" origine "<<origine<<endl;
		}	
	};
		int main(){
			Zebra zebra;
			Dolphine dolphine;
			zebra.set_value (" Zebra " ,30, " Africa " );
			dolphine.set_value("Daulphine", 50 , "oceaon");
			return 0;
		};
*/		

		
//exercice10
/*
class Personne {
	protected:
		string nom;
		string prenom;
		string date_de_naissance;
		public:
			Personne(string N , string P , string DN ) : 
				nom = N ,prenom = P,date_de_naissance = DN {}
				
			public:	void afficher () {
				
					cout<< "le nom : "<<nom <<endl;
					cout<< "le prenom "<<prenom<<endl;
					cout<<"date de naissance "<<date_de_naissance<<endl;
			}
		//sous class employee
		
		class Employee : public Personne {
			protected : 
			 double salaire;
			public :
				Employee (const string & N ,const string & P , const string & DN , const double & sal):
					Personne(N,P,DN),salaire(sal){}	
						
		void afficher(){
			Personne :: afficher();
			cout<<"le salaire de l'employee est : "<<salaire<<endl;
		}
	};
	    //sous class chef
	    class Chef : public Employee{
	    	protected :
	    		string service ;
	        public :
	        	chef(string N , string P ,string DN , double sal , string ser ) :
	        		Employee (N,P,ND,sal),service(ser){}
	        		
	    void afficher (){
	    	Employee :: afficher();
	    	cout<<"le service de chef est :  "<<service<<endl;
		}
	};
		//SOUS CLASS DIRECTEUR
		class Directeur : public Chef{
			protected :
				string societe;
			public :
				Directeur(string N, string P, string DN ,double sal ,string ser , string S): Chef(N,P,DN,sal,ser),societe(S){}
				
				
	    void afficher()	{
	    	Chef :: afficher();
	    	cout<<"la societe de directeur est : "<<societe<<endl;
		}				
	};
		    int main (){
		    	string n,p,d,ser,soc;
		    	double sal;
		    	Personne personne (n,p,d);
		    	cout<<"le nom : "<<endl;
		    	cin>>n.nom;
		    	cout<<"prenom : "<<endl;
		    	cin>>p.prenom;
		    	cout<<"date de naissance : "<<endl;
		    	cin>>d.date_de_naissance;
		    	
		    	
		    	Personne.afficher();
		    	
		    	
		   Employee employee(n,p,d,sal);
		
		    	cout<<"le nom : "<<endl;
		    	cin>>n.nom;
		    	cout<<"prenom : "<<endl;
		    	cin>>p.prenom;
		    	cout<<"date de naissance : "<<endl;
		    	cin>>d.date_de_naissance;
		    	cout<<"salaire : "<<endl;
		    	cin>>sal.salaire;
		    	
		    	Employee.afficher();
		    	
		    Chef chef(n,p,d,sal,ser);	
		    	
		    	cout<<"le nom : "<<endl;
		    	cin>>n.nom;
		    	cout<<"prenom : "<<endl;
		    	cin>>p.prenom;
		    	cout<<"date de naissance : "<<endl;
		    	cin>>d.date_de_naissance;
		    	cout<<"salaire : "<<endl;
		    	cin>>sal.salaire;
		    	cout<<"le service : "<<endl;
		    	cin>>ser.service;
		    	
		    	Chef.afficher();
		    	
		    	
		    Directeur directeur(n,p,d,sal,ser,soc);
					cout<<"le nom : "<<endl;
		    	cin>>n.nom;
		    	cout<<"prenom : "<<endl;
		    	cin>>p.prenom;
		    	cout<<"date de naissance : "<<endl;
		    	cin>>d.date_de_naissance;
		    	cout<<"salaire : "<<endl;
		    	cin>>sal.salaire;
		    	cout<<"le service : "<<endl;
		    	cin>>ser.service;
		    	cout<<"la societe : "<<endl;
		    	cin>>soc.societe;
		    	
		    	
		    	Directeur.afficher();	
	
};
*/
//EXERCICE12
/*
class Test {
	public :
		static int counteur;
		void call (){
			counteur++;
		}
};
		
		int Test::counteur = 0;	
		int main(){
		
		Test a;
			a.call();
			cout<<"le nombre d'appels de la fonction call est : "<<Test::counteur<<endl;
		return 0 ;
};
*/
/*
#include<"point.h">
#include<iostream>
using namespace std;

//exercice13
class Point {
	private :
		flaot x;
		flaot y;
	public:
		Point (flaot x_c,falot y_c );
		void deplace(flaot dx,flaot dy);
		void affiche();
};

Point::Point(falot x_c,flaot y_c) : x(x_c),y(y_c){}


void Point::deplace(flaot dx ,falot dy){
	x+=dx;
	y+=dy;
}

void Point :: affiche(){
	cout<<"les coordonnees du point sont : "<<x<<" , "<<y<<endl;
}

int main(){
	Point point ;

	cout<<"saisir le premier coordonne: "<<endl;
	cin>>point.x
	cout<<"saisir le deuxiem coordonne : "<<endl;
	cin>>point.y;
	
	point.affiche();
	point.deplace(3.0,3.0) ;
	point.affiche() ;
	
return 0;	
}

*/
//exercice11
/*
class vecteur3d {
	private:
		flaot X;
		faot Y;
		flaot Z;
	public:
		vecteur3d(flaot x=0.0 ,flaot y=0.0 ,flaotz=0.0):x(X),y(Y),z(Z){}	
		void afficher(){
			cout<<"("<<x<<", "<<y<<" , "<<z<<")"<<endl;
		}
		flaot somme(const vecteur3d&autre){
			return(x+autre.x , y+autre.y ,z+autre.z);
			
		}
		flaot produitscalaire(const vecteur3d&autre){
			return(x*autre.x+y*autre.y+z*autre.z);	
	}
	bool coincide(const vecteur3d&autre){
		return(x==autre.x,y==autre.y,z==autre.z);
		
	}
	flaot norme (){
		return sqrt(x*x+y*y+z*z);
	}
	void normax(const vecteur3d&autre){
		if (norme()<autre.norme())
		cout<<"la deuxieme vecteur a la plus grand norme "<<endl;
		else
		cout<<"la premiere vecteur a la plus grande norme "<<endl;
	}
	
	int main(){
		flaot x,y,z;
		bool resultat;
		cout<<"saisir les coordonnes  des vecteurs \n";
		cout<<"saisie le premier composant de premier vecteur "<<endl;
		cin>>x;
		cout<<"saisir le deuxiem compsant de premier vecteur "<<endl;
		cin>>y;
		cout<<"saisir le troisiem composant de premier vecteur "<<endl;
		cin>>z;
		vecteur3d vect1(x,y,z);
		vect1.afficher();
		cout<<"saisie le premier composant de deuxieme vecteur "<<endl;
		cin>>x;
		cout<<"saisir le deuxiem compsant de deuxieme vecteur "<<endl;
		cin>>y;
		cout<<"saisir le troisiem composant de deuxieme vecteur "<<endl;
		cin>>z;
		vecteur3d vect2(x,y,z);
		vect2.afficher() ;
		vecteur3d vect3;
		vect3=vect1.somme(vect2);
		vect3.afficher() ;
		vect3=vect1.produitscalaire(vect2);
		vect3.afficher() ;
		resultat=vect1.coincide(vect2);
		cout<<resultat;
		cout<<vect1.norme ();
		cout<<vect2.norme();
		return 0;
	};
	*/
	
	//exercice15
	/*
	#include<iostream>
	#include<cstdlib>
	using namespace std;
	
	class Fichier{
		private :
			char*p;
			size_t l;
			
			public :
				//constructeur
				Fichier (size_t taille){ 
					l=taille;
					p= new char[l];
				}
				//destructeur
				
				Fichier(){
					delete [] p;
				}
		void creation (size_t l){
			p= new char[l];
		}
		void remplit (){
			for(size_t i=0;i<l;i++){
			
			 p[i]='S';
		}
	}
	    void affiche (){
	    for(size_t i=0;i<l;i++){	
	    	cout<<p[i];
	    	cout<<endl;
		}
	}; 
	
	int main(){
		
		Fichier newfichier(size-t n);
		
		cout<<"saisir la taille de fichier :"<<endl;
		cin>>n.l;
		
		newfichier.creation(n);
		newfichier.remplit();
		newfichier.affiche();
		
		return 0;
	}
*/	
	
	
	
	
