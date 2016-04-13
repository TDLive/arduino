bool on = false;

int dl = 5;
int ldb = 0;
int last = LOW;
int state;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  //pinMode(2, INPUT_PULLUP);
}

void loop() {
  
  int rd = digitalRead(2);
  
  if( rd != last ) ldb=millis();
  
  if( (millis()-ldb) > dl ){
    
    //int state = digitalRead(2);
    if( rd != state ){
      state = rd;
      if( state == HIGH ) on=!on;
    }
  }
  
  if( on ) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);
  
  last = rd;
}
