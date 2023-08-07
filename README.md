# Arduino Pro Micro HID
Using an Arduino Pro Micro as a Windows Input device (Keyboard, Mouse or Joystick).

## Arduino Micro as Keyboard
You can easily use an Arduino Pro Micro as a custom input device for Windows.
To emulate a Keyboard, you need to import the Keyboard library: [https://www.arduino.cc/reference/en/language/functions/usb/keyboard/](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/)
In this example, I'm triggering a 'c' keypress when PIN 8 is connected to ground/LOW, and 'v' keypress when PIN 9 is connected to ground/LOW.
Then triggers a keyrelease event accordingly when the state changes back to HIGH. 
Take a look at the sample [arduino_micro_keypress.ino](https://github.com/cvasquez-github/ArduinoProMicroHID/blob/main/arduino_micro_keypress.ino) file.

I'm currently using this for adding additional 2 buttons to my Arcade (Insert Coin 1, and Insert Coin 2).

![alt text](https://raw.githubusercontent.com/cvasquez-github/ArduinoProMicroHID/main/pro-micro-coin-diagram.png)

| Micro Pro       | Connected to              |
| :-------------: | :-------------:           |
| 8               | Button 1 A                |
| 9               | Button 2 A                |
| GND             | Button 1 B and Button 2 B |
| MICRO USB       | Windows PC USB            |

I guess this may work with other operating systems as well but haven't tried it yet.

## SparkFun Tutorial
There is a very good article about this from SparkFun Electronics: [https://www.sparkfun.com/tutorials/337](https://www.sparkfun.com/tutorials/337).

## Arduino Micro as Mouse
For emulating a Mouse, I´ve used 2 options:
- the traditional Mouse library, for button press and relative coordinates.
- the AbsMouse library for absolute coordinates: [https://github.com/todd-herbert/absolute-mouse](https://github.com/todd-herbert/absolute-mouse)

I would recommend the latter:
```
#include "AbsMouse.h"
```

Initialize the Mouse, passing initial coordinates:
```
AbsMouse.init(res_x, res_y); 
```

Move the mouse to a specific absolute coordinate:
```
AbsMouse.move((res_x / 2), (res_y / 2)); 
```

To press a mouse button:
```
AbsMouse.press(MOUSE_LEFT);
```

## Arduino Micro as Joystick
You can emulate a Joystick as well, using the following library:
[https://github.com/MHeironimus/ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary)

In this example, an Electronic Drump Kit is used as a Joystick in Windows: https://github.com/cvasquez-github/Whack-A-Micro
