
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

int CircutOne;
int CircutTwo;
int CircutThree;
int CircutFour;

int Input0 = A0;
int Input1 = A1;
int Input2 = A2;
int Input3 = A3;

int brightness = 0;
int fadeAmount = 5;
float in, out;
int fadeValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int FirstVolt = analogRead(Input0);
  int SecondVolt = analogRead(Input1);
  int ThirdVolt = analogRead(Input2);
  int FourthVolt = analogRead(Input3);

  Serial.print ("First:") ;
  Serial.println(FirstVolt);
   Serial.print ("Second:") ;
  Serial.println(SecondVolt);
   Serial.print ("Third:") ;
  Serial.println(ThirdVolt);
   Serial.print ("Fourth:") ;
  Serial.println(FourthVolt);

//////First circut

if (FirstVolt < 5 ){
CircutOne = int(random(2,4));

if (CircutOne == 2){
  analogWrite(PURPLE1,brightness);
  analogWrite(PURPLE2,brightness);

  analogWrite(WHITE1,0);
  analogWrite(WHITE2,0);
  analogWrite(WHITE3,0);
  analogWrite(WHITE4,0);
  analogWrite(WHITE5,0);
  analogWrite(WHITE6,0);

  analogWrite(XWHITE1,255);
  analogWrite(XWHITE2,255);
  analogWrite(XWHITE3,255);

brightness = brightness + fadeAmount;
if (brightness <= 0 || brightness >= 150){
 fadeAmount = -fadeAmount;
  }
    delay (80);
 }
 if (CircutOne == 3){
  
  analogWrite(PURPLE1,brightness);
  analogWrite(PURPLE2,brightness);

   analogWrite(WHITE1,0);
   analogWrite(WHITE2,0);
   analogWrite(WHITE3,0);
   analogWrite(WHITE4,0);
   analogWrite(WHITE5,0);
   analogWrite(WHITE6,0);

   analogWrite(XWHITE1,brightness);
   analogWrite(XWHITE2,brightness);
    analogWrite(XWHITE3,brightness);
     brightness = brightness + fadeAmount;
     if (brightness <= 0 || brightness >= 150){
      fadeAmount = -fadeAmount;
     }
     delay (100);
  }

   if (CircutOne == 4){
 for (in = 0; in < 6.283; in = in + 0.0015)
  {
    out = sin(in) * 127.5 + 127.5;
    
    analogWrite(PURPLE1,out);
    analogWrite(PURPLE2,255);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,out);
    analogWrite(XWHITE2,255);
    analogWrite(XWHITE3,out);
  }
 
 }
 
 }

////First Circut Reset

 if (FirstVolt > 5 ){
    analogWrite(PURPLE1,0);
    analogWrite(PURPLE2,0);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,0);
    analogWrite(XWHITE2,0);
    analogWrite(XWHITE3,0);
  
 }

/////Second Circut

 if (SecondVolt < 5){
  CircutTwo = int(random(2,5));

  if (CircutTwo == 2){
    analogWrite(PURPLE1,255);
    analogWrite(PURPLE2,255);
 
    analogWrite(WHITE1,brightness);
    analogWrite(WHITE2,brightness);
    analogWrite(WHITE3,brightness);
    analogWrite(WHITE4,brightness);
    analogWrite(WHITE5,brightness);
    analogWrite(WHITE6,brightness);
    
    analogWrite(XWHITE1,255);
    analogWrite(XWHITE2,255);
    analogWrite(XWHITE3,255);

    brightness = brightness + fadeAmount;
     if (brightness <= 0 || brightness >= 100){
      fadeAmount = -fadeAmount;
     }
     delay (100);
  }
 
  if (CircutTwo == 3){
    analogWrite(PURPLE1,200);
    analogWrite(PURPLE2,200);
 
    analogWrite(WHITE1,brightness);
    analogWrite(WHITE2,brightness);
    analogWrite(WHITE3,brightness);
    analogWrite(WHITE4,brightness);
    analogWrite(WHITE5,brightness);
    analogWrite(WHITE6,brightness);
    
    analogWrite(XWHITE1,255);
    analogWrite(XWHITE2,255);
    analogWrite(XWHITE3,255);

    brightness = brightness + fadeAmount;
     if (brightness <= 0 || brightness >= 255){
      fadeAmount = -fadeAmount;
     }
     delay (500);
  }

   if (CircutTwo == 4){
    analogWrite(PURPLE1,0);
    analogWrite(PURPLE2,0);
 
    analogWrite(WHITE1,brightness);
    analogWrite(WHITE2,brightness);
    analogWrite(WHITE3,brightness);
    analogWrite(WHITE4,brightness);
    analogWrite(WHITE5,brightness);
    analogWrite(WHITE6,brightness);
    
    analogWrite(XWHITE1,200);
    analogWrite(XWHITE2,200);
    analogWrite(XWHITE3,200);

    brightness = brightness + fadeAmount;
     if (brightness <= 0 || brightness >= 200){
      fadeAmount = -fadeAmount;
     }
     delay (300);
  }

   if (CircutTwo == 5){
    analogWrite(PURPLE1,200);
    analogWrite(PURPLE2,200);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,random(0,255));
    analogWrite(XWHITE2,random(0,255));
    analogWrite(XWHITE3,random(0,255));
  }
  delay (500);
 }


 ////Second Circut Reset

  if (SecondVolt > 5){
    analogWrite(PURPLE1,0);
    analogWrite(PURPLE2,0);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,0);
    analogWrite(XWHITE2,0);
    analogWrite(XWHITE3,0);
  
 }

 //Third Circut

 if (ThirdVolt < 10){

  for (in = 0; in < 6.283; in = in + 0.0015)
  {
    out = sin(in) * 127.5 + 127.5;

    analogWrite(PURPLE1,random(0,255));
    analogWrite(PURPLE2,out);
 
    analogWrite(WHITE1,random(0,255));
    analogWrite(WHITE2,out);
    analogWrite(WHITE3,random(0,255));
    analogWrite(WHITE4,out);
    analogWrite(WHITE5,random(0,255));
    analogWrite(WHITE6,out);
    
    analogWrite(XWHITE1,random(0,255));
    analogWrite(XWHITE2,out);
    analogWrite(XWHITE3,random(0,255));
  }
 }

////Third Circut Reset

 if (ThirdVolt > 10 ){
    analogWrite(PURPLE1,0);
    analogWrite(PURPLE2,0);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,0);
    analogWrite(XWHITE2,0);
    analogWrite(XWHITE3,0);
  
 }

 ///Fourth Circut

 if (FourthVolt < 10){
  CircutFour = int(random(2,3));

  if (CircutFour == 2){

    for (in = 0; in < 6.283; in = in + 0.0015)
  {
    out = sin(in) * 127.5 + 127.5;

    analogWrite(PURPLE1,out);
    analogWrite(PURPLE2,out);
 
    analogWrite(WHITE1,200);
    analogWrite(WHITE2,200);
    analogWrite(WHITE3,200);
    analogWrite(WHITE4,200);
    analogWrite(WHITE5,200);
    analogWrite(WHITE6,200);
    
    analogWrite(XWHITE1,255);
    analogWrite(XWHITE2,255);
    analogWrite(XWHITE3,255);
    
   
  }
  delay (150);
 
  }
 
  if (CircutFour == 3){

       for (in = 0; in < 6.283; in = in + 0.0015)
  {
    out = sin(in) * 127.5 + 127.5;
    
    analogWrite(PURPLE1,out);
    analogWrite(PURPLE2,255);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,255);
    analogWrite(WHITE3,out);
    analogWrite(WHITE4,255);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,out);
    
    analogWrite(XWHITE1,0);
    analogWrite(XWHITE2,0);
    analogWrite(XWHITE3,0);
  }}

 }

 ///Fourth Circut Reset

  if (FourthVolt > 10 ){
    analogWrite(PURPLE1,0);
    analogWrite(PURPLE2,0);
 
    analogWrite(WHITE1,0);
    analogWrite(WHITE2,0);
    analogWrite(WHITE3,0);
    analogWrite(WHITE4,0);
    analogWrite(WHITE5,0);
    analogWrite(WHITE6,0);
    
    analogWrite(XWHITE1,0);
    analogWrite(XWHITE2,0);
    analogWrite(XWHITE3,0);
  
 }
}
