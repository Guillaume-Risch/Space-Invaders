Projet: SpaceInvader_AC.o Projet.o
	g++ SpaceInvader_AC.o Projet.o -o Projet

SpaceInvader_AC.o: Correc_prof/SpaceInvader_AC.cpp Correc_prof/SpaceInvader_AC.h Correc_prof/MyType_AC.h Correc_prof/MyVar_AC.h
	g++ -I Correc_prof -c Correc_prof/SpaceInvader_AC.cpp

Projet.o: Projet.cpp
	g++ -c Projet.cpp

clean : 
	rm *.o Projet



