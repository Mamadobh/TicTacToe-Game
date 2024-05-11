//-------->NB:IL faut agrandir la console avant l'exécution
#include<iostream>
using namespace std;

class joueur{
	string nom;//nom_joueur
	string prenom;//prenom_joueur
	static int  p;//nombre totale de joueur
	int num;//numero_joueur
	string signe;//Signe de joueur soit "X" soit "O"
	int  coleur;//Couleur de Joueur Dans le jeux 
	int cordonne;//Numero de case choisie par le joeur
	public:
	 void set_cordonne(int);//Mise a jour du choix du joueur 
	 int get_num();//retourner le numero de joueur
	 string get_signe();//retourner le signe d'un joueur (soit "X" soit "o")
	 int get_color();//retourner le couleur de joueur
	 int get_cordonne();//retourner la case choisie par le joueur
	 string get_nomJoueur();//retourner le nom de joueur
	 string get_prenomJoueur();//retourner le prenom de joueur
	 void saisie(string,int);//Saisir les coordonnées de joueur (nom,prenom,signe...........) 
};

class grille
{
  string  tab[10];//les cases du grille 
  int   coleur_Jeux[10];//couleur de chaque case dans la grille 
  
  public:
  	int* get_adresse_T_coleurJeux();//retourner l 'adresse de tableau de coleur (coleur_Jeux[])
    void set_coleur_Jeux();//Initialiser le tableu de coleur avec le coleur d'arriere plan (coleur_Jeux[])
  	void set_tour_coleur(int,int);//mise a jour de coleur de chaque case dans la grille 
  	void set_tour(int,string);//mise a jour de la case de grille 
  	void construire(joueur,joueur);// construction de la grille
    string* get_adresseTab();//retourner l' adresse de tableau ou on stocke le contenue de grille 
	int verif_gann(joueur,joueur);//retourner le resultat de jeux 
	void set_tab();//Initialiser le case de grille (1,2,3,4..)

};
