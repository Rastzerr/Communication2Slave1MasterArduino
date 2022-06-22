String inString1 = "", inString2 = "", strData1 = "", strData2 = "";
String pembagiTegangan = "", arus = "", frek = "", lastString1 = "", lastString2 = "";
bool comComp1 = false, comComp2 = false;
float volt, ampere,hz;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pharsing();
  volt = pembagiTegangan.toFloat();
  ampere = arus.toFloat();
  hz = frek.toFloat();
}
