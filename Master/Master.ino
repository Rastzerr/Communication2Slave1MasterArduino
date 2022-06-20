String inString1 = "", inString2 = "";
bool comComp1 = false, comComp2 = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent() {
  while (Serial.available()){
    char inChar = (char)Serial.read();
    inString1 += inChar;
    if(inChar == '\n'){
      comComp1 = true;
    }
  }
}

void serialEvent1() {
  while (Serial1.available()){
    char inChar = (char)Serial1.read();
    inString2 += inChar;
    if(inChar == '\n'){
      comComp2 = true;
    }
  }
}
