bool on = false;

int dl = 5;
int ldb = 0;
int last = LOW;
int state;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  
  // To set pull-up resistor:
  // pinMode(2, INPUT_PULLUP);
}

void loop() {
  
  // Read switch value (3)
  int rd = digitalRead(2);
  
  // Debounce (4)
  if( rd != last ) ldb=millis();
  
  if( (millis()-ldb) > dl ){
    
    if( rd != state ){
      state = rd;
      if( state == HIGH ) on=!on;
    }
  }
  
  // Light up (2)
  if( on ) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);
  
  last = rd;
}
