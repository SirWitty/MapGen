#include <iostream>

class Map{
    unsigned int seed;
    int width, height;
    float waterLevel;
   public:
    Map(){ //default map used only for testing
        seed = 843890120;
        width = 900;
        height = 900;
        waterLevel = .50;
    }
    Map(int seed, float waterLevel){
        this->seed = seed;
        width = 900;
        height = 900;
        this->waterLevel = waterLevel;
    }
    unsigned int getSeed(){
        return seed;
    }
   private:
    void generatePerlin(unsigned int);
    void generateVoronoi(unsigned int);
    void generateTopography(unsigned int);
    void generateBiomes(unsigned int);
};
int main(){
    Map map;
    std::cout << map.getSeed() << std::endl; 
}
