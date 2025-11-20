# Gadget

Testing out embedded programming with an ESP32 and SPI OLED display. To upload LittleFS filesystem with images:

``` shell
pio run --target buildfs
pio run --target uploadfs
```

To build, upload and run code:

``` shell
pio run --target upload
```
