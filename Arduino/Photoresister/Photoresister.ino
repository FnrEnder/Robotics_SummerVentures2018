int light;
float light2;
const int pwm = 3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
light = analogRead(A0);
light2=5.0/1023*light;
//Serial.println(light2);
//int i=0;
/*for(i;i<255;i++){
  analogWrite(pwm,i);
  delay(10);
}
for(i=-255;i<=0;i++){
  analogWrite(pwm,-i);
  delay(10);
}*/
int dc=my_map(light2,2.5,4.2,0,255);
Serial.println(dc);
analogWrite(pwm,dc);
}
int my_map(float value, float lower_voltage, float upper_voltage, int lower_dc, int upper_dc)
{
 int y;
 float m;
 float b;
 float x;
 m=255/(upper_voltage - lower_voltage);
 b=225-m*(upper_voltage);
 x=value;
 y=m*x+b;
 if (y>upper_dc){
  y=upper_dc;
 }
 if (y<lower_dc){
  y=lower_dc;
 }
 return(y);
}




