
#define signal_in A0
#define signal_out 3


void setup()
{
    pinMode(signal_in, INPUT);
    pinMode(signal_out, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int ar = map(analogRead(signal_in), 0, 1024, 0, 255);
    analogWrite(signal_out, ar);
    Serial.println(ar);
}
