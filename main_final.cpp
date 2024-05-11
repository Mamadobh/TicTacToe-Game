#include <iostream>
#include<windows.h>
#include"methode_final.cpp"
using namespace std ;
int main()
{ system("color 8B");
	joueur joueur1;
	joueur joueur2;
	joueur1.saisie("E",0);//--->pourquoi "E": saisie(Signe_de_joueurPrecedent,Coleur_de_JoueurPrécédent) et comme joueur1 est le premier joueur (il n ya pas de joueur précédents )
	                                         //donc on lui donne par defaut "E"  
	                     //---->pourquoi 0:saisie(Signe_de_joueurPrecedent,Coleur_de_JoueurPrécédent) et comme joueur1 est le premier joueur (il n ya pas de coleur précédents )
	                      //donc on lui donne par defaut 0  
	            
	string c;
	
	c=joueur1.get_signe();
	system("cls");
    system("color 8B");
	joueur2.saisie(c,joueur1.get_color());
	
	system("cls");
	system("color 8B");
	grille boread;
	 boread.set_tab();
	 boread.set_coleur_Jeux();
	 boread.construire(joueur1,joueur2);
             
			 string ch="";
			 string ch1="";
			 string ch2="";
			 string ch3="";
	          int Longeur_nom_prenom_Joueur1;
	          int Longeur_nom_prenom_Joueur2; 
                  Longeur_nom_prenom_Joueur1=(joueur1.get_nomJoueur()).length()+(joueur1.get_prenomJoueur()).length()+1;
	             Longeur_nom_prenom_Joueur2=(joueur2.get_nomJoueur()).length()+(joueur2.get_prenomJoueur()).length()+1;
	               for(int q=0;q<31-Longeur_nom_prenom_Joueur1;q++)
	                 {
	                 	ch=ch+" ";
					 }
				   for(int q=0;q<27-Longeur_nom_prenom_Joueur2;q++)
	                 {
	                 	ch1=ch1+" ";
					 }
	                for(int q=0;q<31-Longeur_nom_prenom_Joueur2;q++)
	                 {
	                 	ch2=ch2+" ";
					 }
				   for(int q=0;q<27-Longeur_nom_prenom_Joueur1;q++)
	                 {
	                 	ch3=ch3+" ";
					 }
			  	  		  	  
			  	 
            string*t=boread.get_adresseTab();
                                        int n,i=0;//n est le numéro de case dans la grille 
                                        do{
										   i++;
                                           if(i%2!=0){
										                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),joueur1.get_color()+128);
										                 cout<<joueur1.get_nomJoueur()<<" "<<joueur1.get_prenomJoueur()<<" C'EST VOTRE TOUR"<<endl;
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),joueur1.get_color()+128); cout<<"VEUILLEZ VOUS CHOISSIEZ UN CARACTERE"<<endl;
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),joueur1.get_color()+128);
														 cin>>n;
														 cout<<endl<<endl;

													
													  }
										   else{
										        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),joueur2.get_color()+128);
										        cout<<joueur2.get_nomJoueur()<<" "<<joueur2.get_prenomJoueur()<<" C 'EST VOTRE TOUR"<<endl;
										        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color()); cout<<"VEUILLEZ VOUS CHOISSIEZ UN CARACTERE"<<endl;
                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color());
												cin>>n;
												cout<<endl<<endl;
                                               
											   }
										do{
										   
										   if(n<1 || n>9 || t[n].compare("X")==0 || t[n].compare("O")==0)
										    {
										    cout<<"OPS! CHOIX INVALIDE : RECHOISSIR!"<<endl;
											if(i%2!=0){
							
                                                         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),joueur1.get_color()+128);
														 cin>>n;
														 cout<<endl<<endl;
														 
													  }
										   else{
										    
                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color());
												cin>>n;
												cout<<endl<<endl;
                                               	
											   }
											}
											 }while((n<1 || n>9) || t[n].compare("X")==0 || t[n].compare("O")==0);
										 if(i%2!=0)
										  {
										    boread.set_tour(n,joueur1.get_signe());
										    boread.set_tour_coleur(n,128+joueur1.get_color());
										  }
										 else
										  {
										   boread.set_tour(n,joueur2.get_signe());
										   boread.set_tour_coleur(n,128+joueur2.get_color()); 
										  }
										 
										  system("cls");
										  boread.construire(joueur1,joueur2);
									    }while((boread.verif_gann(joueur1,joueur2)==-1) && (i<9));
									   if(i==9){
									   	         system("cls");
										       	                                                             
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                                                                            "<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)187<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<" "<<(char)188<<"RESULTAT:                                           "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
 
  cout<<"                                                                            "<<(char)178<<"            "<<(char)254<<" DOMAGE POUR VOUS!                       "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                    "<<(char)207<<" LE MATCH EST NUL... "<<(char)207<<"           "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                      "<<(char)178<<endl;
  cout<<"                                                                            ";
  cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),136); 
 
											   }
									else if(boread.verif_gann(joueur1,joueur2)==1)
									                           {	
									                            system("cls"); 
                                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                                                                            "<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)187<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"  "<<(char)188<<"RESULTAT:                                                     "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"        ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur1.get_color());
  cout<<(char)208<<(char)208<<(char)208<<" F"<<(char)144<<"L"<<(char)144<<"ICITAION "<<(char)208<<(char)208<<(char)208<<"                                     ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"            ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur1.get_color());
  cout<<(char)167<<(char)167<<" "<<joueur1.get_nomJoueur()<<" "<<joueur1.get_prenomJoueur()<<" VOUS AVEZ GAGNE"<<" "<<(char)167<<(char)167<<ch;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                 ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color());
  cout<<(char)207<<" "<<joueur2.get_nomJoueur()<<" "<<joueur2.get_prenomJoueur()<<" DOMAGE POUR VOUS "<<(char)207<<ch1;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
 
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            ";
  cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),136); 
 
   }
									else{									                            system("cls"); 
                                                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);
  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  cout<<"                                                                            "<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)187<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"  "<<(char)188<<"RESULTAT:                                                     "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"        ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color());
  cout<<(char)208<<(char)208<<(char)208<<" F"<<(char)144<<"L"<<(char)144<<"ICITAION "<<(char)208<<(char)208<<(char)208<<"                                     ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"            ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur2.get_color());
  cout<<(char)167<<(char)167<<" "<<joueur2.get_nomJoueur()<<" "<<joueur2.get_prenomJoueur()<<" VOUS AVEZ GAGNE"<<" "<<(char)167<<(char)167<<ch2;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                 ";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128+joueur1.get_color());
  cout<<(char)207<<" "<<joueur1.get_nomJoueur()<<" "<<joueur1.get_prenomJoueur()<<" DOMAGE POUR VOUS "<<(char)207<<ch3;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),139);cout<<(char)178<<endl;
 
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            "<<(char)178<<"                                                                 "<<(char)178<<endl;
  cout<<"                                                                            ";
  cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
  cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),136); 
 
									   	}
	return 0;

}

