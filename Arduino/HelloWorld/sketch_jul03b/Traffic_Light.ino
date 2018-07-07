const int NSR = 2;
const int NSY = 3;
const int NSG = 4;
const int EWR = 5;
const int EWY = 6;
const int EWG = 7;
int state=1;

void setup(){
pinMode(NSR,OUTPUT);
pinMode(NSY,OUTPUT);
pinMode(NSG,OUTPUT);
pinMode(EWR,OUTPUT);
pinMode(EWY,OUTPUT);
pinMode(EWG,OUTPUT);  
}

void loop(){
  if (state==1){
digitalWrite(NSR,0);    
digitalWrite(NSY,0);
digitalWrite(NSG,1);
digitalWrite(EWR,1);
digitalWrite(EWY,0);
digitalWrite(EWG,0);
delay(2000);
state=2;
  }
if (state==2){
digitalWrite(NSR,0);    
digitalWrite(NSY,1);
digitalWrite(NSG,0);
digitalWrite(EWR,1);
digitalWrite(EWY,0);
digitalWrite(EWG,0);
delay(1000);
state=3;
  }
  if (state==3){
digitalWrite(NSR,1);    
digitalWrite(NSY,0);
digitalWrite(NSG,0);
digitalWrite(EWR,0);
digitalWrite(EWY,0);
digitalWrite(EWG,1);
delay(2000);
state=4;
  }
  if (state==4){
digitalWrite(NSR,1);    
digitalWrite(NSY,0);
digitalWrite(NSG,0);
digitalWrite(EWR,0);
digitalWrite(EWY,1);
digitalWrite(EWG,0);
delay(1000);
state=1;
  }
}
