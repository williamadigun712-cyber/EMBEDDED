
//Define led pins 
const int redled = 11;
const int yellowled = 10;
const int greenled = 9;

void setup() {
// set all led pins as outputs
pinMode(redled,  OUTPUT);
pinMode(yellowled, OUTPUT);
pinMode(greenled, OUTPUT);
}

void loop() {
  //green light for 5 seconds
digitalWrite(greenled, HIGH);  
delay(5000); //wait for 5 second
digitalWrite (greenled, LOW);  
//yelow lihgt for 2 seconds
digitalWrite(yellowled, HIGH);
delay(2000);
digitalWrite(yellowled, LOW);

//red lihgt for 5 seconds
digitalWrite(redled, HIGH);
delay(5000);
digitalWrite(redled, LOW);
}
