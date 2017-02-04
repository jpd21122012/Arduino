int led=7;

void setup(){
 pinMode(led,OUTPUT);
}

void loop(){

  for(int brillo=0;brillo<=255;brillo=brillo+10){
    analogWrite(led,brillo);
  delay(50);
  }
    
  
  
  for(int brillo=255;brillo>=0;brillo=brillo-10){
    analogWrite(led,brillo);
  delay(50);
  }
  


}

