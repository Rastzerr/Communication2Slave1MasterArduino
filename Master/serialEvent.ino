void serialEvent1() {  //read slave 1
  while (Serial1.available()){
    char inChar = (char)Serial1.read();
    inString1 += inChar;
    if(inChar == '\n'){
      comComp1 = true;
    }
  }
}

void serialEvent2() { //read slave 2
  while (Serial2.available()){
    char inChar = (char)Serial2.read();
    inString2 += inChar;
    if(inChar == '\n'){
      comComp2 = true;
    }
  }
}
