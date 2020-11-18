
#include "Bludiste.h"
#include "Prohledavac.h"

#include <string>



class robot : public Prohledavac {
public:
	robot() {};
	 ~robot() {};
     bool start(Bludiste & map){};
     bool start(BludisteOdkryte & map){};
     bool stop(){};
     void krok(Bludiste & map){};
     void krok(BludisteOdkryte & map){};
     std::string jmeno(){};
};
