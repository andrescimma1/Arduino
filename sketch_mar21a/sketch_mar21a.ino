void setup() //Se ejecuta una sola vez
{
  
  pinMode(13, OUTPUT);  //Recibe dos cosas, un pin y un modo

}

void loop() 
{

  digitalWrite(13, HIGH); //Prender el pin 13, el "HIGH" sirve para prender, el "LOW" para apagar.
  delay(1000);  // 1000ms = 1s
  digitalWrite(13, LOW);
  delay(1000);
}
