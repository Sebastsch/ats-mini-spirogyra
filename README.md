# Project Customization

Welcome! This repository contains my personalized version of Max Arnold's project.

# About

This is my first experience using GitHub. I’ve made a few minimal changes to the original project to better reflect my personal preferences and needs.

Please note: I am not a professional developer. If you notice any issues or have suggestions for improvement, feel free to open an issue or submit a pull request. Your feedback is appreciated!

# ATS Mini

![](https://raw.githubusercontent.com/Sebastsch/ats-mini-spirogyra/refs/heads/main/docs/source/_static/My%20Mini%20Station.png)

This firmware is for use on the SI4732 (ESP32-S3) Mini/Pocket Receiver

Changes :

* Added Winamp theme
* Changed font for Band and MHz text 
* Added circular stereo/mono logo https://github.com/m2608/ats_mini
* Adjusted FM frequency limit for Europe
* Adjusted RDS Station and On RDS message / New Fonts
* RDS message now spans two lines with hyphenation (typographic improvement)
* Removed voltage display (battery icon alone indicates status)
* Moved EEPROM logo to bottom-right corner
* New S-meter (test version)

### 9/04/25
* Added Modern theme
* In the Settings menu : added a proper sleep function leveraging Deep Sleep mode (Allows scheduling from 60 to 180 minutes.). In this code, the behavior of the two settings, “Sleep” and “Ecomode,” is inverted compared to what their labels suggest in the interface.



# Releases

Check out the [Releases](https://github.com/Sebastsch/ats-mini-spirogyra/releases/tag/V1.08.01) page.

# Documentation

The hardware, software and flashing documentation is available at <https://esp32-si4732.github.io/ats-mini/>
