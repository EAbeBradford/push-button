#define PUSH_PIN 2
#define LED_PIN 12


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PUSH_PIN, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:


  //digiralRead read wither the push pin is pressed
  //0 or LOW means not pressed
  //1 or HIGH means pressed
  if(digitalRead(PUSH_PIN)==0){
    Serial.println("Button not pressed");
  } else{
    Serial.println("Button pressed");
  }
  delay(1000); //wait 1 second
}
