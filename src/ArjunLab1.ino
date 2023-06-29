SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{

    pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D7, OUTPUT);
    pinMode(D8, OUTPUT);

}

void loop()
{

    digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, HIGH);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, HIGH);
    digitalWrite(D8, LOW);
    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, HIGH);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, HIGH);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, HIGH);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, LOW);
    digitalWrite(D1, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(100);
    digitalWrite(D0, HIGH);
    digitalWrite(D1, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);

    delay(1);
}