boolean encontrado;
void setup(){
Serial.begin(9600);
}
void loop(){
encontrado=Serial.find("hola");
if (encontrado == true){
Serial.println("Encontrado");
}
}
