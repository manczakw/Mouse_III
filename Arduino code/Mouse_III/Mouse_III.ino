//pin2->enable 1
//pin3->enable 2
//pin4->Input1
//pin5->Input2
//pin6->Input3
//pin7->Input4
//pin8->Vss (logic)
//pin0(arduino_RX)<-TXD
void setup() {

Serial.begin(9600);  
//enable 1 always high
pinMode(2,OUTPUT);
digitalWrite(2,HIGH);

//enable 2 always high
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);

//Vss (logic) always high
pinMode(8,OUTPUT);
digitalWrite(8,HIGH);


pinMode(4,OUTPUT);//front right
pinMode(5,OUTPUT);//back right
pinMode(6,OUTPUT);//back left
pinMode(7,OUTPUT);//front left





}
void driveP(int arg) //Right engine
{
  digitalWrite(4,HIGH);
 delay(arg );
 digitalWrite(4,LOW);
 delay(200);

  }
  void driveL(int arg)//left engine
{
  digitalWrite(7,HIGH);
 delay(arg);
 digitalWrite(7,LOW);
 delay(200);
 
  }
 // Since we are dealing with Dc motos, there is no linear corelation betweent time and distance.
 // thats to this part, we can have somewhat good accuracy
 void angle(int dane) 
  {
    if (dane>=0){
  
  
  if(dane<25){driveL((dane*12));}
    if(dane>=25&&dane<30){driveL((dane*7.5));}
       if(dane>=30&&dane<45){driveL((dane*7.5));}
          if(dane>=45&&dane<65){driveL((dane*6.6));}
             if(dane>=65&&dane<85){driveL((dane*5.6));}
                if(dane>=85&&dane<100){driveL((dane*4.66));}
                   if(dane>=100&&dane<120){driveL((dane*4.4));}
                      if(dane>=120&&dane<150){driveL((dane*4.5));}
                         if(dane>=150&&dane<175){driveL((dane*4.4));}
                            if(dane>=175){driveL((dane*4.10));}
 }
 if (dane<0)
 {
  dane=dane*(-1);
  
  if(dane<25){driveP((dane*8));}
    if(dane>=25&&dane<30){driveP((dane*5));}
       if(dane>=30&&dane<45){driveP((dane*5.2));}
          if(dane>=45&&dane<65){driveP((dane*5.33));}
             if(dane>=65&&dane<85){driveP((dane*4.8));}
                if(dane>=85&&dane<100){driveP((dane*4));}
                   if(dane>=100&&dane<120){driveP((dane*4.18));}
                      if(dane>=120&&dane<150){driveP((dane*4.1));}
                         if(dane>=150&&dane<175){driveP((dane*3.9));}
                            if(dane>=175){driveP((dane*3.7));}
 
 }
  
  
  
  }
 
    
    int convertLength(String arg_dane){
  
  arg_dane.remove(arg_dane.indexOf("A"));//Delete A and everything behind it

  arg_dane.remove(arg_dane.indexOf("L"), 1);//delete 1 char from "L"

  return (arg_dane.toInt()*2);
}

int convertAngle(String arg_dane){
  
  arg_dane.remove(0,arg_dane.indexOf("A") + 1);//Deleto from 0 position to "A" position including it
  
  return arg_dane.toInt();
}

String dane;
void loop() {
   if(Serial.available()>0)
  {
  dane=Serial.readString();
  angle(convertAngle(dane));// turn
  delay (400);
  
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  
  delay(convertLength(dane)); //forward
  
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  
  delay (300);

 

 
  }


}
