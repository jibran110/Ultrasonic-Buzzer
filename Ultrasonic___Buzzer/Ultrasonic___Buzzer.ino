int trigger_pin = 9;
int echo_pin = 10;
int buzzer_pin = 13; 
int time;
int distance; 

void setup ( ) {
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
        pinMode (11, OUTPUT);
        pinMode (8, OUTPUT);
        digitalWrite(11, LOW);
        digitalWrite(8, HIGH);
}
void loop ( ) {
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.02) / 1;
    
    
  if (distance <= 45 ) 
        {
        Serial.println (" Noone ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (500);
        }

  else {
        Serial.println (" Entry ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, LOW);
        delay (500);        
  } 
 }
