const gpioNum = 2;

void setup()
{
    // Ustawiamy GPIO 2 jako wejście podciągnięte do plusa
    Serial.begin(115200);   
    pinMode(gpioNum, INPUT_PULLUP);
}

void loop()
{
    /* Pooling */
    static bool lastValue = 1;
    bool currnetValue = digitalRead(gpioNum);
    if (currnetValue == 0 && lastValue == 1)
    {
        /* Wystąpił warunek przerwania */
        Serial.println("Warunek spełniony");
    }
    lastValue = currnetValue;
}
