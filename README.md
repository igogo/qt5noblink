Disable cursor blinking in Qt5 apps
===
Qt5 (at least before 5.3) ignores all blinking rate settings in Linux. This project helps to turn blinking off in any Qt5 app without need of any recompilation

# How to use
1. `make`.
2. Copy `qt5noblink.so` whenever you want.
3. Run Qt5 app, e.g. qtcreator, via

  ```$ LD_PRELOAD=/full/path/to/qt5noblink.so qtcreator```
4. Voila.

