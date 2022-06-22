void pharsing(){
  if(comComp1 == true){ //vt&{nilai pembagi tegangan}$acs&{nilai arus}$
    for (int i = 0; i < inString1.length(); i++){
      if(inString1[i] == '&'){
        lastString1 = strData1;
        strData1 = "";
      }
      else if(inString1[i] == '$'){
        lastString1 = "";
      }
      else{
        if(lastString1 == ""){
         strData1 += inString1[i]; 
        }
        if(lastString1 == "vt"){
        pembagiTegangan += inString1[i]; 
        }
        if(lastString1 == "acs"){
          arus += inString1[i];
        }
      }
    }
  }

  if(comComp2 == true){ //frek&{nilai frekuensi}$
    for (int j = 0; j < inString2.length(); j++){
      if(inString2[j] == '&'){
        lastString2 = strData2;
        strData2 = "";
      }
      else if (inString2[j] == '$'){
        lastString2 = "";
      }
      else {
        if(lastString2 == ""){
          strData2 += inString2[j];
        }
        if(lastString2 == "frek"){
          frek += inString2[j];
        }
      }
    }
  }
}
