#include<iostream>
#include<string.h>
#include <Windows.h>
#include <unistd.h>
#include"h_finale.h"
 int joueur::p=0; //intialiser le nombre de jpueur a 0//static
 void joueur::set_cordonne(int c)
                                {
                                	cordonne=c;
                                } 
 string joueur::get_nomJoueur()
                             {
							 return nom;
 						     }							
 string joueur::get_prenomJoueur(){
                                    return prenom; 
								  }
 int joueur::get_cordonne(){
                            return cordonne;
							} 							      
 int joueur::get_num(){
                        return num;
					   }
 string joueur::get_signe(){
                         return signe;
						 }  					   						
 int joueur::get_color(){
                          return coleur;                   	
     					 }
 void joueur::saisie(string c,int coleur_autre_joueur){p++;//c :presente le signe de joueur pr�c�dent
	                    num=p;
 	                    cout<<"\n        *******      JOUEUR NUMERO ["<<get_num()<<"]:      ******* \n\n";
	cout<<"        =================================================== \n\n";
	cout<<"  DONNER VOTRE NOM!:---------------------------------: ";cin>>nom;cout<<endl;
	cout<<"  DONNER VOTRE PRENOM!:------------------------------:";cin>>prenom;cout<<endl;
	if(num==2){goto stop;}
	
	cout<<"  VOULEZ VOUS JOUER AVEC QUELLE SIGNE----------------"<<endl;
	cout<<"      <. JOUER AVEC X--------------------------------"<<endl;
	cout<<"      <. JOUER AVEC O--------------------------------"<<endl;
    cout<<"  IL FAUT TAPER OBLIGATOITREMENT UN SEUL CARACTERE-";  
	do
	{ 
	      cin>>signe;
	      cout<<endl;
	    if(signe!="O" && signe!="X")
	   {  
	    cout<<"  OPS VOUS DEVEZ CHOISSIR ENTRE CE DEUX--------------"<<endl;
	    cout<<"      <. JOUER AVEC X--------------------------------"<<endl;
	    cout<<"      <. JOUER AVEC O--------------------------------"<<endl;
	   }
	}while(signe!="O" && signe!="X");
	       stop: if(num==2 && c=="O"){signe="X";cout<<"VOUS AUREZ JOUER AVEC LE X"<<endl;}
	             else if(num==2 && c=="X"){signe="O";cout<<"VOUS AUREZ JOUER AVEC LE O"<<endl;} 
	 cout<<"  CHOISIR UN COLEUR POUR JOUER-----------------------"<<endl;
	 cout<<"      1<. JOUER AVEC LE BLUE-------------------------"<<endl; 
	 cout<<"      2<. JOUER AVEC LE VERT------------------------"<<endl; 
	 cout<<"      3<. JOUER AVEC LE CYAN-------------------------"<<endl; 
	 cout<<"      4<. JOUER AVEC LE ROUGE--------------------------"<<endl; 
	 cout<<"      5<. JOUER AVEC LE VIOLET-----------------------"<<endl; 
	 cout<<"      6<. JOUER AVEC JAUNE(FONCE)-------------------"<<endl; 
	 cout<<"      7<. JOUER AVEC LE DEFAULT----------------------"<<endl; 
	 cout<<"      8<. JOUER AVEC LE BLEU BRILLANT------------------"<<endl; 
	 cout<<"      9<. JOUER AVEC LE VERT BRILLIANT----------------"<<endl; 
	 cout<<"      10<. JOUER AVEC LE CYAN LUMINEUX-----------------"<<endl; 
	 cout<<"      11<. JOUER AVEC LE ROUGE BRILLANT------------------"<<endl; 
	 cout<<"      12<. JOUER AVEC LE ROSE/MAGENTA----------------"<<endl; 
	 cout<<"      13<. JOUER AVEC LE JAUNE----------------------"<<endl; 
	 cout<<"      14<. JOUER AVEC LE BLANC LUMINEUX----------------"<<endl; 
    do{
           cin>>coleur;	
           if(coleur>7){
		                 coleur=coleur+1;
					   }
           if ((coleur>15 )||(coleur<1 ))
	       {
	         cout<<"   OPS!COLEUR NON DISPONIBLE.RESSEYER----------------"<<endl ; 	
           }
           else if (coleur==coleur_autre_joueur)
	      {
	     cout<<"      CHOISIR UN AUTRE COLEUR DIFFERENT !!!----------"<<endl;
	     cin>>coleur;
	     coleur++;
		  }                        
	 }while(coleur>15 || coleur<1 || coleur==coleur_autre_joueur ) ;
	 
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	 cout<<"\n\n";
     cout<<"        ======================================================== \n\n";

	    
	     SetConsoleTextAttribute(h,128+coleur);cout<<"          MAGNIFIQUE!JOUEUR ["<<num<<"]: "<<nom<<" "<<prenom<<" VOUS ETES PRET POUR COMMENCER "<<endl<<endl;
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
		 cout<<"        ======================================================== \n\n"; sleep(4);
		
		}
                        					
string* grille::get_adresseTab()
                           {
                           string* t;
		                    t=tab;
	  	                    return t;   
                           }
int*  grille::get_adresse_T_coleurJeux()
            {
	                                     int*t;
	                                     t=coleur_Jeux;
	                                     return t;
             }		                             
void grille::set_tour_coleur(int case_aJouer ,int coleur_de_Joueur)
              {
              	coleur_Jeux[case_aJouer]=coleur_de_Joueur;
			  }
void grille::set_coleur_Jeux()
           {
		   coleur_Jeux[0]=139;
		   coleur_Jeux[1]=139;
		   coleur_Jeux[2]=139;
		   coleur_Jeux[3]=139;
		   coleur_Jeux[4]=139;
		   coleur_Jeux[5]=139;
		   coleur_Jeux[6]=139;
		   coleur_Jeux[7]=139;
		   coleur_Jeux[8]=139;
		   coleur_Jeux[9]=139;
		   }		  
void grille:: set_tour(int k,string c)	
  { 
   tab[k]=c;					  
  }	
 void grille::set_tab()
  {
	tab[0]="0";
	tab[1]="1";
	tab[2]="2";
	tab[3]="3";
	tab[4]="4";
	tab[5]="5";
	tab[6]="6";
	tab[7]="7";
	tab[8]="8";
	tab[9]="9";
  }
								  
void grille::construire(joueur joueur1,joueur joueur2)
 {
int colorJoueur1,colorJoueur2; 	
  	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
    cout<<"\n\n\t\t\t\t\t                                                                TIC TAC TOE\n\n";
    colorJoueur1=joueur1.get_color();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<<"                                                                               ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+colorJoueur1);cout<<"JOUEUR "<<joueur1.get_num()<<"  [ "<<joueur1.get_signe()<<" ]:"<<joueur1.get_nomJoueur()<<" "<<joueur1.get_prenomJoueur();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<<"       ___       ";
	colorJoueur2=joueur2.get_color();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colorJoueur2+128);
	cout<<"JOUEUR "<<joueur2.get_num()<<"  [ "<<joueur2.get_signe()<<" ]:"<<joueur2.get_nomJoueur()<<" "<<joueur2.get_prenomJoueur();cout<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout << "                                                                                 _________________ _________________ _________________" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |        " ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[1]);cout<< tab[1];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<<"        |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[2]);cout<< tab[2] ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);	
	cout<<"        |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[3]);cout<<tab[3] ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<<"        |" <<endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
   cout << "                                                                                |_________________|_________________|_________________|" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout << "                                                                                |        " ; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[4]);cout<< tab[4] ;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<< "        |        ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[5]);cout<< tab[5] ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<< "        |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[6]);cout<< tab[6] ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<<"        |" <<endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout << "                                                                                |_________________|_________________|_________________|" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout << "                                                                                |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[7]);cout<< tab[7] ;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<< "        |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[8]);cout<< tab[8];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	cout<< "        |        " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),coleur_Jeux[9]);cout<< tab[9] ;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
	
	cout<<"        |" <<endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
    cout <<"                                                                                |                 |                 |                 |" << endl;
   cout << "                                                                                |_________________|_________________|_________________|" << endl;

}

int grille:: verif_gann(joueur j1,joueur j2){
	                     string* t;
                         t=get_adresseTab();
						  if((t[1]==t[2])&&(t[2]==t[3])&&(t[2]==j1.get_signe())){return j1.get_num();}
						  
						  else if(t[4]==t[5] && t[4]==t[6] && t[4]==j1.get_signe()){return j1.get_num();}
						  else if(t[7]==t[8] && t[7]==t[9] && t[7]==j1.get_signe()){return j1.get_num();}
						  else if(t[7]==t[4] && t[7]==t[1] && t[1]==j1.get_signe()){return j1.get_num();}
						  else if(t[8]==t[5] && t[5]==t[2] && t[2]==j1.get_signe()){return j1.get_num();}
						  else if(t[9]==t[6] && t[9]==t[3] && t[3]==j1.get_signe()){return j1.get_num();}
						  else if(t[1]==t[2] && t[2]==t[3] && t[2]==j1.get_signe()){return j1.get_num();}
						  else if(t[4]==t[5] && t[4]==t[6] && t[4]==j2.get_signe()){return j2.get_num();}
						  else if(t[7]==t[8] && t[7]==t[9] && t[7]==j2.get_signe()){return j2.get_num();}
						  else if(t[7]==t[4] && t[7]==t[1] && t[1]==j2.get_signe()){return j2.get_num();}
						  else if(t[8]==t[5] && t[5]==t[2] && t[2]==j2.get_signe()){return j2.get_num();}
						  else if(t[9]==t[6] && t[9]==t[3] && t[3]==j2.get_signe()){return j2.get_num();}
						  else if(t[9]==t[5] && t[5]==t[1] && t[1]==j2.get_signe()){return j2.get_num();}
						  else if(t[7]==t[5] && t[5]==t[3] && t[3]==j2.get_signe()){return j2.get_num();}
						  else if(t[9]==t[5] && t[5]==t[1] && t[1]==j1.get_signe()){return j1.get_num();}
						  else if(t[7]==t[5] && t[5]==t[3] && t[3]==j1.get_signe()){return j1.get_num();}
						  else return -1;
                         }


