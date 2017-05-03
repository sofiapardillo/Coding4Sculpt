

const int XWHITE3 = 13;
const int PURPLE2 = 12;
const int WHITE5 = 11;
const int PURPLE1 = 10;
const int XWHITE2 = 9;
const int XWHITE1 = 8;
const int WHITE4 = 7;
const int WHITE3 = 6;
const int WHITE2 = 5;
const int WHITE1 = 4;
const int WHITE6 = 3;

float in, out;
  int fadeValue;
  

void setup() {
 
  Serial.begin(9600);

}

void loop() {


      for (in = 0; in < 6.283; in = in + 0.0015)
  {
    out = sin(in) * 127.5 + 127.5;
    
    analogWrite(PURPLE1,out);
    analogWrite(PURPLE2,out);
 
    analogWrite(WHITE1,out);
    analogWrite(WHITE2,out);
    analogWrite(WHITE3,out);
    analogWrite(WHITE4,out);
    analogWrite(WHITE5,out);
    analogWrite(WHITE6,out);
    
    analogWrite(XWHITE1,out);
    analogWrite(XWHITE2,out);
    analogWrite(XWHITE3,out);


 

  }}
