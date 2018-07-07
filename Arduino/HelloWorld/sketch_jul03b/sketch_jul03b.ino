const int button=2;
const int led = 3;
boolean flag=false;
void setup(){
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  
}
void loop(){
  flag=!flag;
 boolean buttonpress=digitalRead(button);
 if (buttonpress){
  Serial.println("Button Pressed");
   digitalWrite(led,flag);
   delay(20);
  }
  else
  {Serial.println("Button Not Pressed");
  digitalWrite(led,LOW);
}
}
