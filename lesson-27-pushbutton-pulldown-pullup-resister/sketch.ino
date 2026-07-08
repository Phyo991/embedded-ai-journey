// C++ code
//
int LEDPin = 8;
int buzzerPin = 12;
int buzzerRead;

void setup()
{
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzerPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
	buzzerRead = digitalRead(buzzerPin);
  	Serial.println(buzzerRead);
	if(buzzerRead == 0){
      digitalWrite(LEDPin, HIGH);
    }else{
      digitalWrite(LEDPin, LOW);
    }
  	
}