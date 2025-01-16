#include "functions.h";
//œ‘ æƒ⁄»›
void showBoxValue(box s) {
	cout << "maker: " << s.marker << endl;
	cout << "height: " << s.height << endl;
	cout << "width: " << s.width << endl;
	cout << "length: " << s.length << endl;
	cout << "volume: " << s.volume << endl;
}

void calculateVolume(box* s) {
	s->volume = s->height * s->length * s->width;
	
}

//main

//int main()
//{
//    box RealBox{
//        "Triangle",
//        10,
//        20,
//        30
//    };
//
//    showBoxValue(RealBox);
//    calculateVolume(&RealBox);
//    cout << "volume: " << RealBox.volume << endl;
//
//}