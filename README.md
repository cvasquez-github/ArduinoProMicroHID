# Arduino Pro Micro HID
Using an Arduino Pro Micro as a Windows Input device.

## Triggering Key Press and Release:
You can easily use an Arduino Pro Micro as a custom input device for Windows.
In this example, I'm triggering a 'c' keypress when PIN 8 is connected to ground/LOW, and 'v' keypress when PIN 9 is connected to ground/LOW.
Then triggers a keyrelease event when the state changes back to HIGH. (Take a look at arduino_micro_keypress.ino)

I'm currently using this board for adding additional 2 buttons to my Arcade (Insert Coin 1, and Insert Coin 2)

![alt text](https://raw.githubusercontent.com/cvasquez-github/ArduinoProMicroHID/main/pro-micro-coin-diagram.png)

| Micro Pro       | Connected to              |
| :-------------: | :-------------:           |
| 8               | Button 1 A                |
| 9               | Button 2 A                |
| GND             | Button 1 B and Button 2 B |
| MICRO USB       | Windows PC USB            |

I guess this may work with other operating systems as well but haven't tried it yet.
