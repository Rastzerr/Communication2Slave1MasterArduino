/*
 * List protokol komunikasi :
 * 
 * untuk Slave1 arduino mega gunakan -> $vt&nilai$acs&nilai
 * example :  
 * Serial.print("$vt&");
 * Serial.print(volt);
 * Serial.print("$acs&");
 * Serial.print(arus);
 * Serial.println();
 * 
 * untuk Slave2 arduino nano gunakan -> $frek&nilai
 * example :
 * Serial.print("$frek&");
 * Serial.print(frekuensi);
 * Serial.println();
 * 
 * komunikasi slave menggunakan serial, slave1 terhubung dengan serial 1 master, slave2 terhubung dengan serial 2 master
 */

String inString1 = "", inString2 = "", strData1 = "", strData2 = "";
String pembagiTegangan = "", arus = "", frek = "", lastString1 = "", lastString2 = "";
bool comComp1 = false, comComp2 = false, phars1 = false, phars2 = false;
String volt, ampere, hz;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pharsing();
  if (phars1 == true) {
    volt = pembagiTegangan.toFloat();
    ampere = arus.toFloat();
    inString1 = "";
    phars1 = false;
  }
  else {
    pembagiTegangan = "";
    arus = "";
  }

  if (phars2 == true){
   hz = frek.toFloat(); 
   inString2 = "";
   phars2 = false;
  }
  else {
    frek = "";
  }

  Serial.println(volt);
  Serial.println(ampere);
  Serial.println(hz);
  delay(100);
}
