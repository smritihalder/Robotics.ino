int Red =9;
int Green = 10;
 
int val;
 
void setup () {
  
  pinMode (9, OUTPUT); 
  pinMode (10, OUTPUT); 
}
void loop () {
   
   for (val = 255; val> 0; val--)
      {
      analogWrite (10, val);
      analogWrite (9, 255-val);
      delay(15);
   }
   
   for (val = 0; val <255; val++)
      {
      analogWrite (10, val);
      analogWrite (9, 255-val);
      delay (15);
   }
}
