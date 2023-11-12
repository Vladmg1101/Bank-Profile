include <iostream>
#include <string>

class ContEconomii{
    private:
    float sold;
    float dobanda;
    public:
    ContEconomii(float sold, float dobanda){
        this->sold = sold;
        this->dobanda = dobanda;
        std::cout<<"cont_economii:"<<"\n"<<sold<<"\n"<<dobanda<<"\n";
    }
};

class Card{
    private:
    float sold;
    public:
    Card(float sold){
        this->sold = sold;
        std::cout<<"card_bancar:"<<"\n"<<sold<<"\n";
    }
};

class Profil{
    private:
    std::string nume;
    public:
    Profil(std::string nume){
        this->nume = nume;
        std::cout<<nume<<"\n";
    }
};
    int main(){
        std::string nume;
        float sold, sold2, dobanda, a, k=0;
        int caz;
        std::getline(std::cin, nume);
        std::cin>>sold;
        std::cin>>sold2;
        std::cin>>dobanda;
        std::cin>>caz;
        if(caz == 1){
            Profil p1(nume);
            Card c1(sold);
            ContEconomii e1(sold2, dobanda);
        }
        if(caz == 2){
            std::cin>>a;
            if(a < 0){
                std::cout<<"EROARE: depunere suma negativa";
            }else{
                Card c1(sold+a);
            }
        }
        if(caz == 3){
            std::cin>>a;
            if(a>sold){
                std::cout<<"EROARE: fonduri insuficiente";
            }else{
                Card c1(sold-a);
            }
        }
        if(caz == 4){
            std::cin>>a;
            if(a>sold){
                std::cout<<"EROARE: fonduri insuficiente";
            }else{
                Card(sold-a);
                ContEconomii((sold2+a)*(1+(dobanda/100)), dobanda);
            }
        }
        if(caz== 5){
            std::cin>>a;
            if(a<sold){
                std::cout<<"Eroare";
            }
            else{
                while(a>sold2){
                    sold2 = sold2*(1+(dobanda/100));
                    k++;
                }
            }
            std::cout<<k;
        }
        
        return 0;
    }
