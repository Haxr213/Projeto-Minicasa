#include <string>
using namespace std;

class PPMImage {
public:
    ~PPMImage() {
        delete threeChan;
    }
    friend std::istream& operator >>(std::ifstream& inputStream, PPMImage& img);
    friend std::ostream& operator <<(std::ofstream& outputStream, const PPMImage& img);
    void aplicaTomCinza();
    void aplicaSepia();
    void aplicaTomRoxo();
    

private:
    string magicNumber; 
    int width; 
    int height; 
    int maxColorVal; 
    char* threeChan; 
};
