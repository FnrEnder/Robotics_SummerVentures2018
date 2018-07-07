const int button=2;
const int led = 3;
void setup(){
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
 boolean buttonpress=digitalRead(button);
 if (buttonpress){
  Serial.println("Button Pressed");
  digitalWrite(led,HIGH);
 }
  else
  {Serial.println("Button Not Pressed");
  digitalWrite(led,LOW);
}
}
