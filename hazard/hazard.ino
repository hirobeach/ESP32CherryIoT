const int touchPin = 32;
const int ledPin = 25;

//4:ConnectorA 9:ConnectorB 10:Builtin

void setup() {
  pinMode(touchPin, INPUT);
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  }

void loop() {
  
   if (digitalRead(touchPin) == HIGH) {//digitalRead(touchPin) == HIGH←1 このコードで1
     Serial.println("Touch!");
        digitalWrite(ledPin, HIGH); //ON
        //  for(int i = 0; i < 3 ; i++){
    digitalWrite(ledPin, HIGH); //ON
    delay(300); //0.5msec
    digitalWrite(ledPin, LOW); //OFF
    delay(300); //0.5msec
        
   } else { 
        digitalWrite(ledPin, LOW); //OFF
    delay(300); //0.5msec
    Serial.println("...");
  
    }
  
  // delay(500);
  }
    