int redpin=10;
int greenpin=11;
int bluepin=9;


void setup() {
  

pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
 
colour(255,0,0);//red
delay(1000);
colour(0,255,0);//green
delay(1000);
colour(0,0,255);//blue
delay(1000);
colour(255,255,225);//white
delay(1000);
colour(170,0,255);
delay(1000);
colour(150,0,255);
delay(1000);
colour(200, 255,255);
delay(1000);
colour(200,0,0);
delay(1000);
colour(255,0,255);//magenta
delay(1000);
colour(255,255,0);//yellow
delay(1000);
colour(0,255,255);//cyan
delay(1000);
colour(255,255,125);//raspberry
delay(1000);
}
void colour(int redvalue,int greenvalue,int bluevalue)
{
  analogWrite(redpin,redvalue);
  analogWrite(greenpin,greenvalue);
  analogWrite(bluepin,bluevalue);
}
