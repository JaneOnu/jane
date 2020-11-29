int led = 13;  
void setup()  
{  
    Serial.begin(9600); //Baud Rate  
    pinMode(led, OUTPUT);  
}  
void loop()  
{  
    char data = Serial.read();  
    switch (data) 
    {  
        case 'ON':  
            digitalWrite(led, HIGH); // Sets the led ON  
            break;  
        case 'OFF':  
            digitalWrite(led, LOW); //Sets the led OFF  
            break;  
    }  
}  
