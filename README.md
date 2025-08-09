RFID-Based Attendance System with Database Integration
------------------------------------


This project is an RFID-based attendance system built around the LPC2148 ARM7 microcontroller.
It reads RFID cards, displays messages on an LCD, and communicates with a Linux application
over UART to log attendance data into a CSV database.


Why I built this:
-----------------
The idea was to make a simple but reliable attendance tracking system that could:
- Automatically log IN and OUT times for users
- Keep data safe in a CSV file on a PC
- Let an Admin easily add, edit, or remove users
- Run on a microcontroller with minimal hardware

How it works (in short):
------------------------
1. Power on → LCD shows project name.
2. System waits for an RFID card to be scanned.
3. If it's the Admin card → the PC program shows an admin menu:
   - Add new user
   - Delete user
   - Edit user details
   - Exit
4. If it's a User card → the system logs IN/OUT times and updates working hours in the CSV file.
5. Data is stored in EEPROM on the microcontroller and in a CSV on the Linux machine.
6. UART0 handles communication with the PC, UART1 reads from the RFID reader.
7. There’s an interrupt feature to change the Admin card or edit the RTC time from the keypad.


Hardware Used:
--------------
- LPC2148 ARM7 Microcontroller
- RFID Reader + RFID Cards
- 16x2 LCD Display
- 4x4 Keypad
- AT25LC512 EEPROM
- MAX232 IC
- USB-to-UART Converter
- Push Switches

Software Used:
--------------
- Embedded C
- Keil µVision (compile firmware)
- Flash Magic (program MCU)
- Linux + GCC (PC side application)
- CSV file for storing attendance records

Linux App Features:
-------------------
- Stores user data and attendance logs in a CSV file
- Tracks IN/OUT times and calculates working hours
- Menu for Admin:
  1. Add User
  2. Delete User
  3. Edit User
  4. Print user
  5. Exit
- Responds to the MCU with acknowledgement messages


Example CSV:
------------
S.No, User ID, User Name, Date, Working Hours, Status, IN Time, OUT Time
1, 12345678, Tarun, 2025-08-07, 08:15, IN, 09:00, 17:15
2, 12347778, Simbaa, 2025-08-07, 08:15, IN, 09:00, 17:15


How to Run:
-----------
1. Flash the MCU firmware onto the LPC2148 using Flash Magic.
2. Connect RFID reader, LCD, keypad, and other peripherals.
3. Compile and run the Linux application.
4. Scan RFID cards to log attendance or manage users.


Possible Improvements:
----------------------
- Web-based dashboard
- Cloud database integration
- SMS/Email notifications
- Biometric authentication support



Created by: Venkata Naga Durga Tarun.Chinta
