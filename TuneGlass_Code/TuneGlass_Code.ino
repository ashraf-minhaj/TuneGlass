/*
 * Making music using Eye
 * by: Ashraf Minhaj
 * mail: ashraf_minhaj@yahoo.com
 * blog: ashrafminhajfb.blogspot.com
 * Copyright Ashraf Minhaj under GPLv3
 */

//connect sensors on
int sen1 = A0;  //A0
int sen2 = A1;  //A1

//Connect speakers (Not acutally buzzers)
int buz1 = 8;  //on digital pin 8
int buz2 = 9;  //digital 9


void setup()  // put your setup code here, to run once:
{
  pinMode(buz1, OUTPUT); //set pins as output
  pinMode(buz2, OUTPUT);

  Serial.begin(9600); //initialize serial com to see values

}

void loop() 
{
  // put your main code here, to run repeatedly:

  int val1 = analogRead(sen1);
  int val2 = analogRead(sen2);

  //print what's been read by the sensors
  //Serial.println(val1);


  if(val1 < 750 && val2 < 750) // if closed eye detected (both eyes)
  {
    tone(buz1, 1000, 10);  //(speaker name, frequency, delay)
  }

  else if(val1 < 750)  //one eye
  {
  tone(buz1, 2000, 100);
  }

  else if(val2 < 750)  //another eye
  {
    tone(buz1, 1500, 100);
  }

  
  //Serial.println(val2);

  //make sound
  
  

}
