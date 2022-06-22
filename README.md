# Communication2Slave1MasterArduino
communication betwen 2 slave and 1 master arduino using serial communication

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
