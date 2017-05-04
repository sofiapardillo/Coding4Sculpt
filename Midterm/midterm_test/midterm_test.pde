import processing.serial.*;

import processing.video.*;

float firstVal;
float secondVal;
float thirdVal;

boolean firstContact = false;

Movie movie1;
Movie movie2;
Serial myPort;
int[] values = new int[3]; 
//int serialCount = 0;   

void setup(){
  size(640,360);
  movie1 = new Movie(this, "midterm_test.mov");
  movie1.loop();
  movie2 = new Movie(this, "water.mov");
  movie2.loop();
  
  //println(Serial.list());
  
  //String portName = Serial.list()[1];
 myPort = new Serial(this, Serial.list()[1], 9600);
 myPort.bufferUntil('\n');
}

void movieEvent(Movie m) {
  m.read();
}

void draw(){
  
  //println(secondVal);
  //NADA
  if (firstVal == 0){
    image(movie1, 0, 0, width, height);
}
  else {
    image(movie2, 0, 0, width, height);
  }
  
    if (secondVal == 0){
  movie1.speed(4.0);
  movie2.speed(4.0);
}
  else {
  movie1.speed(1.0);
  movie2.speed(1.0);
  }
  
    if (thirdVal == 0){
   tint(random(255),random(255),random(255));
}
  else {
    noTint();
  } 
}

void serialEvent(Serial myPort) {
   String inString = myPort.readStringUntil('\n');
    if (inString != null) {
    inString = trim(inString);
    float[] values = float(split(inString, ","));
   
   if (values.length >= 3){
     firstVal= values[0];
     secondVal = values[1];
     thirdVal = values[2];

//myPort.write('A');
//serialCount = 0;
   }
}
  }
  
  /*  int inRead = myPort.read();
  println(firstVal);
  if (firstContact == false) {
    if (inRead == 'A') {
      myPort.clear();   // clear the serial port buffer
      firstContact = true;  // you've had first contact from the microcontroller
      myPort.write('A');  // ask for more
 }
  }
  else{
   serialInArray[serialCount] = inRead;
   serialCount++; 
   */