const int NSR = 2;
const int NSY = 3;
const int NSG = 4;
const int EWR = 5;
const int EWY = 6;
const int EWG = 7;
const int emergencyButton = 8;
const int nightButton = 9;
int state=1;
int flip=1;


void setup(){
  Serial.begin(9600);
pinMode(NSR,OUTPUT);
pinMode(NSY,OUTPUT);
pinMode(NSG,OUTPUT);
pinMode(EWR,OUTPUT);
pinMode(EWY,OUTPUT);
pinMode(EWG,OUTPUT);
pinMode(emergencyButton,INPUT);
pinMode(nightButton,INPUT);
}

void loop(){
  boolean emergency=digitalRead(emergencyButton);
  boolean nightMode=digitalRead(nightButton);
  Serial.println(emergency);
if (state==1 and nightMode==1 and emergency==0){
  flip=!flip;
  digitalWrite(NSR,0);
  digitalWrite(NSY,flip);
  digitalWrite(NSG,0);
  digitalWrite(EWR,!flip);
  digitalWrite(EWY,0);
  digitalWrite(EWG,0);
  delay(250);
  state=1;
}
 else if (state==1){
digitalWrite(NSR,emergency);
digitalWrite(NSY,0);
digitalWrite(NSG,!emergency);
digitalWrite(EWR,1);
digitalWrite(EWY,0);
digitalWrite(EWG,0);
delay(2000);
state=2;
}
 else if (state==2){
digitalWrite(NSR,emergency);
digitalWrite(NSY,!emergency);
digitalWrite(NSG,0);
digitalWrite(EWR,1);
digitalWrite(EWY,0);
digitalWrite(EWG,0);
delay(1000);
state=3;
  }
 else if (state==3){
digitalWrite(NSR,1);    
digitalWrite(NSY,0);
digitalWrite(NSG,0);
digitalWrite(EWR,emergency);
digitalWrite(EWY,0);
digitalWrite(EWG,!emergency);
delay(2000);
state=4;
  }
 else if (state==4){
digitalWrite(NSR,1);    
digitalWrite(NSY,0);
digitalWrite(NSG,0);
digitalWrite(EWR,emergency);
digitalWrite(EWY,!emergency);
digitalWrite(EWG,0);
delay(1000);
state=1;
  }
}
