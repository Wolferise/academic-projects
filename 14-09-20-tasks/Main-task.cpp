#include <iostream>
/*
 
 #include <fstream>
 
*/
using namespace std;

class image {
    int width;
    int height;
    int pixelColorValues[100000];
    
public:
    image(int initWidth, int initHeight) {
        width = initWidth;
        height = initHeight;
        int pixelQuantity = width * height;
        for (int pixelPosition = 0; pixelPosition < pixelQuantity; pixelPosition++) {
            pixelColorValues[pixelPosition] = 0;
        }
        
        /*  Отладочная печать
         
        cout << "class image variable initialised" << endl;
         
         */
    }
    
    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }
    
    void show() {
        int pixelsPrintedInString = 0,
        pixelQuantity = width * height;
        
        for (int pixelPosition = 0; pixelPosition < pixelQuantity; pixelPosition++) {
            cout << pixelColorValues[pixelPosition];
            pixelsPrintedInString++;
            if (pixelsPrintedInString == width) {
                cout << endl;
                pixelsPrintedInString = 0;
            } else {
                cout << " ";
            }
        }
    }
    
    int getPixelColor(int pixelXcoord, int pixelYcoord) {
        int pixelColor,
        pixelPosition;
        
        pixelPosition = width * (pixelYcoord - 1) + (pixelXcoord - 1);
        pixelColor = pixelColorValues[pixelPosition];
        return pixelColor;
    }
    
    void setPixelColor(int pixelXcoord, int pixelYcoord, int pixelColor) {
        int pixelPosition;
        
        pixelPosition = (width * (pixelYcoord - 1)) + (pixelXcoord - 1);
        pixelColorValues[pixelPosition] = pixelColor;
    }
    
    void drawVerticalLine(int lineXcoord) {
        int pixelQuantity = width * height;
        
        for (int pixelPosition = lineXcoord - 1; pixelPosition < pixelQuantity; pixelPosition += width) {
            pixelColorValues[pixelPosition] = 1;
        }
    }
};

int main() {
    int testImageWidth = 10,
    testImageHeight = 10,
    verticalLineXcoord = 3;
    image testImage = image(testImageWidth, testImageHeight);
    
    /*
     
     ifstream imageFile;
    
    imageFile.open("/Users/ilya/Desktop/Программирование/testImage.pbm");
    if (imageFile.is_open()) {
        cout << "File opened successfully." << endl;
    } else {
        cout << "File hasn't been opened." << endl;
    }
     
    */
    
    testImage.drawVerticalLine(verticalLineXcoord);
    testImage.show();
    return 0;
}


