int hallPin1=12;
int hallPin2=8;
int hallPin3=7;

int firstVal = 0;
int secondVal = 0;
int thirdVal = 0;

int hallPin;

void setup()
{
pinMode(12,INPUT);
pinMode(8,INPUT);
pinMode(7,INPUT);

Serial.begin(9600);

//establishContact();
}


void loop()
{
firstVal = (digitalRead(hallPin1));
secondVal = (digitalRead(hallPin2));
thirdVal = (digitalRead(hallPin3));

 Serial.print(firstVal);
 Serial.print(",");
 Serial.print(secondVal);
 Serial.print(",");
 Serial.println(thirdVal);

}
/*void establishContact(){
  while(Serial.available() <= 0) {
    Serial.print('A');
 delay(300);
 }
  }*/


