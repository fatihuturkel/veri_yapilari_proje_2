#include "sistem.h"


Sistem::Sistem()
{
    
}

// vectorleri iceren vectoru sistemlere yarýrýr. orginalvecktor 2600 elemanlýdýr. 2600/100 =26 sistem olusur. her sistem 100 organ icerir.
vector<vector<IkiliAramaAgaci::Node*>> Sistem::splitIntoVectors(vector<IkiliAramaAgaci::Node*> originalVector) {
    vector<vector<IkiliAramaAgaci::Node*>> sistemler;
    for (int i = 0; i < originalVector.size();) {
        vector<IkiliAramaAgaci::Node*> newVector;
        for (int j = 0; j < 100 && i < originalVector.size(); j++, i++) {
            newVector.push_back(originalVector[i]);
        }
        sistemler.push_back(newVector);
    }
    return sistemler;
}

