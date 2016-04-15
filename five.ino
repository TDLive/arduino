int order[4] = { 11, 13, 12, 10 };

void setup() {
  
  for( int i=0; i<4; i++ ){
    pinMode(order[i], OUTPUT);
  }

}

void on(int pin){
  digitalWrite(pin, HIGH); 
}

void off(int pin){
  digitalWrite(pin, LOW); 
}

void loop() {
  for( int i=0; i<4; i++ ){
    on(order[i]);
    delay(50);
    off(order[i]); 
  }
  
  for( int i=4; i>-1; i-- ){
    on(order[i]);
    delay(50);
    off(order[i]);
  }
  
  for( int i=0; i<255; i++ ){
    analogWrite(9, i);
    delay(5);
  }
  
  for( int i=250; i>0; i-- ){
    analogWrite(9, i);
    delay(5);
  }
  
                       
}
