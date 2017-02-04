#include <SPI.h>
#include <Ethernet2.h>
// The IP address will be dependent on your local network:
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192,168,1,79);
EthernetServer server(80);

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; }
  Ethernet.begin(mac, ip);
  server.begin();
  Serial.print("server is at ");
  Serial.println(Ethernet.localIP());
}
void loop() {
  EthernetClient client = server.available();
  if (client) {
    Serial.println("new client");
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        if (c == '\n' && currentLineIsBlank) {
         client.println("HTTP/1.1 200 OK");
            client.println("Content-Type: text/html");
            client.println();
 
            //Página web en formato HTML
            client.println("<html>");                 
            client.println("<head><title>Naylamp Mechatronics</title>");
            client.println("</head>");
            client.println("<body>");
            client.println("<div style='text-align:center;'>");
            client.println("<h1>NAYLAMP MECHATRONICS</h1>");
            client.println("<h2>Entradas Analogicas</h2>");
            client.print("AN0="); client.println(analogRead(0));
            client.print("<br />AN1=");client.println(analogRead(1)); 
            client.println("<h2>Entradas Digitales</h2>");
            client.print("D4=");client.println(digitalRead(4));
            client.println("<br />D5=");client.print(digitalRead(5));
            client.println("<br /><br />");
            client.println("<a href='http://192.168.1.74'>Actualizar entradas</a>");
            client.println("<h2>Salidas Digitales </h2>");        
            client.println("Estado del LED 1 = ");client.print("uyuy");            
            client.println("<br />");            
            client.print("<button onClick=location.href='./?Data=1'>ON</button>");           
            client.print("<button onClick=location.href='./?Data=2'>OFF</button>");
            client.println("<br /><br />");
            client.println("Estado del LED 2 = ");client.print("onnn");            
            client.println("<br />");            
            client.print("<button onClick=location.href='./?Data=3'>ON</button>");           
            client.print("<button onClick=location.href='./?Data=4'>OFF</button>");
            client.println("<br /><br />");
            client.println("<a href='http://www.naylampmechatronics.com/'>www.naylampmechatronics.com</a>");
            client.println("<br /><br />");             
            client.println("</b></body>");
            client.println("</html>");
            break;
 }
        if (c == '\n') {
          // you're starting a new line
          currentLineIsBlank = true;
        }
        else if (c != '\r') {
          // you've gotten a character on the current line
          currentLineIsBlank = false;
        }
      }
    }
    delay(1);
    client.stop();
    Serial.println("client disconnected");
  }
}

