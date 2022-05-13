
#define signal_in A0
#define signal_out A2

void setup()
{
    pinMode(signal_in, INPUT);
    pinMode(signal_out, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int ar = analogRead(signal_in);
    analogWrite(signal_out, ar);
    Serial.println(ar);
}
