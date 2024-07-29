const int trigPin = 32; //4:ConnectorA 9:ConnectorB
const int echoPin = 33; //5:ConnectorA 8:ConnectorB
const int ledPin = 25; 

float measureDist(){
  float Duration = 0; //Received Interval
  float Calc_Dist = 0; //Calculation results from Duration

  digitalWrite(trigPin, LOW);//一回sh津力を止める
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //Ultrasonic output 超音波を一瞬dasu 

  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  Duration = pulseIn(echoPin, HIGH); //Input from sensor
  Duration = Duration/2; //Half the round trip time  往復なので2で割る
  Calc_Dist = Duration*340*100/1000000; //Set sonic speed to 340 m/s
  return Calc_Dist;
}

void setup() {
  Serial.begin(115200);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(ledPin, OUTPUT);//led
}

void loop() {
  if (measureDist()<10){
    digitalWrite(ledPin, HIGH); //ON
    delay(300);// 0.3秒押すと。。。
  } else {
    digitalWrite(ledPin, LOW); //OFF
    delay(300);
  }
}
