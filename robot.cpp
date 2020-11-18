#include "Bludiste.h"
#include "Prohledavac.h"
#include "Robot.h"
#include <string>
#include <cstdlib>


robot::robot (){};

void robot::krok(Bludiste & map){

int nahodne;
nahodne = rand() % 4 + 1;;

if (nahodne == 1) {
	return nahoru();}
else if (nahodne == 2) {
	return dolu();}
else if
(nahodne == 3) {
	return vpravo();}
else 
(nahodne == 4) {
	return vlevo();}  

};

std::string robot::jmeno(){
 return "random robot";
};


void robot::krok(BludisteOdkryte & map){

int nahodne;
nahodne = rand() % 4 + 1;;

if (nahodne == 1) {
	return nahoru();}
else if (nahodne == 2) {
	return dolu();}
else if
(nahodne == 3) {
	return vpravo();}
else 
(nahodne == 4) {
	return vlevo();}  

};

robot::~robot() {};
