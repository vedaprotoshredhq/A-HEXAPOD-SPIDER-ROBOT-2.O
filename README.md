# Hexapod/spider robot 2.0

<p align="center">
</p>

**Hexapod Robot** is a 6-legged walking robot featuring:

- 15cm × 18cm × 5.6cm body chassis
- Arduino R4 Minima or any other microcontroller
- 18× MG996R servo motors for leg actuation
- 2× PCA9685 16-channel PWM driver boards
- 2x 300W 20A DC-DC buck converter
- 11.1V or 7.4V LiPo battery for autonomous operation
- 3D printed chassis and leg components
- Modular hexapod kinematics for six-legged locomotion

## Dimensions

### Travel area

- **Body Width**: 13 cm
- **Body Length**: 18 cm
- **Body Height**: 5.6 cm

### Body Specifications

- **Chassis Weight**: 150-200g _(body only excluding leg parts)_
- **Battery Runtime**: 13-30 minutes _(depending on activity)_
- **Total Footprint**: ~73cm × 78cm _(estimated with legs extended)_

## CAD

All CAD files are designed in FreeCAD and can be found in the `CAD/` directory:

- **Corex- Hip joint (coxa segment)
- **Femur - Upper leg segment
- **Tibita - Lower leg segment with foot
  body - body chassis

View the CAD designs with panels removed:

<img width="1098" height="542" alt="Screenshot 2026-08-16 165026" src="https://github.com/user-attachments/assets/089cf413-1c95-4d9e-be20-a02b45681800" />
<img width="1104" height="544" alt="Screenshot 2026-08-16 170226" src="https://github.com/user-attachments/assets/801a11f8-84e4-4f30-808f-39416028e524" />
<img width="1104" height="544" alt="Screenshot 2026-08-16 170250" src="https://github.com/user-attachments/assets/e12d1501-b66c-4451-b689-18d5b1af08bc" />
<img width="1104" height="542" alt="Screenshot 2026-08-16 170310" src="https://github.com/user-attachments/assets/6c281067-8f48-4f00-b311-b034fe546126" />
<img width="1100" height="540" alt="Screenshot 2026-08-16 170324" src="https://github.com/user-attachments/assets/790f68db-cbe2-4512-8511-ed076cf0e1a4" />


## Assembly

### Phase 1: Chassis Assembly
1. Assemble 3D printed chassis components (use 3m screws)
2. Mount Arduino R4 Minima or any microcolntoller on upper chassis
3. Install 2x PCA9685 PWM driver boards in lower chassis 
4. Connect 2x DC-DC buck converter input to battery and output to 2x pca9685 boards and Arduino Jack 
6. Test power.

### Phase 2: Leg Assembly 
1. 3D print all leg components
2. Clean and assemble printed parts
3. Mount MG996R servos to leg joints
4. Connect servos to PCA9685 boards
5. Calibrate servo angles
6. Attach legs to chassis using 3mm screws
7. NO PCB REQUIRED UNTIL YOU WANT MRE FEATURES THEN NORMAL WALKING (ALL THE ELECTRONICS COMPONENTS LISTED WILL DO THE WORK WITHOUT A PCB)

### Phase 3: Programming & Testing
1. Load servo control firmware to your microcontroller [allatninewwy.ino](https://github.com/vedaprotoshredhq/A-HEXAPOD-SPIDER-ROBOT-2.O/blob/main/allatninwty.ino)
2. Test each leg individually 
3. Implement hexapod gait algorithm  firmware_hexapod2.ino)
4. Validate walking motion
5. Fine-tune movement parameters 

# Bill of Materials (BOM)

| Item | Specification / Notes | Indian Retailers | Quantity | Unit Price (INR) | Unit Price (USD) | Total Price (INR) | Total Price (USD) |
|------|------------------------|-----------|----------|------------------|------------------|-------------------|-------------------|
| ARDUINO UNO Q or RASBERRY PI 3,4,5 | advanced calculations , smart control , AI | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹7750 | $80.93 | ₹7750 | $80.93 |
| MPU6050 Sensor | 6‑axis gyro + accelerometer | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹200 | $2.09 | ₹200 | $2.09 |
| PCA9685 Driver | 16‑channel servo driver | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 | ₹300 | $3.14 | ₹600 | $6.28 |
| DS3218 Servo | 180° digital high‑torque servo | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 20 | ₹1,300 | $13.60 | ₹26,000 | $272.00 |
| LiPo Battery | 2S 7.4V 2200mAh | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹1,600 | $16.74 | ₹1,600 | $16.74 |
| LiPo Charger | 1S–4S balance charger | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹2,500 | $26.15 | ₹2,500 | $26.15 |
| Buck Converter | 300 W / 20 A DC‑DC | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 | ₹495 | $5.18 | ₹990 | $10.36 |
| Screws (M2 + M3) | **M2:** 8mm×168, 12mm×12 <br> **M3:** 8mm×24, 12mm×84, 16mm×12 | OnlyScrews, Robocraze, Robu.in | Combined set | ₹1,000 | $10.46 | ₹1,000 | $10.46 |
| 3D Printer | Bambu Lab A1 | Zbotic, Robu.in, Robocraze | 1 | ₹32,500 | $339.95 | ₹32,500 | $339.95 |
| Filament | PLA 1.75mm | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 rolls | ₹1,500 | $15.70 | ₹3,000 | $31.40 |

---

## Totals
- Servos subtotal (DS3218): (₹26,000 → $272.00)
- Buck converters subtotal: (₹990 → $10.36)
- All hardware and electronics (₹40,640 → $425.01) + 3D Printer and filament (₹35,500 → $371.35)
- **Overall BOM:** ₹76,140 → $796.36

---

### Screw Inventory Summary
- M2 screws total: 120 pieces  
- M3 screws total: 240 pieces  
- **Grand total screws:** 360 pieces



## Credits

- Arduino and Rasberry pi community for microcontroller guidance.
- PCA9685 PWM board reference designs.
- Hexapod robotics open-source community for gait algorithms and kinematics.

## Thank you's

- Protoshred HQ team for design and assembly.
- FreeCAD community for excellent CAD tools.
- 3D printing community for printing tips and optimization.

## License

Hexapod Robot is open-source. More details can be found at [LICENSE.md](LICENSE.md).

---
## NOTES FOR THE REVIEWER: -
## IT'S NOT COMPLETELY BULD YET 
Complete build requires:- 

The body  

THE 6 legs 

All hardware (3d printed parts and screws and all)

Electronic components (microcontrollers and drivers and power supply and battery and servos)

All hardware and electronics list in BOM above 

Firmware is not conformed yet as right now I don't have any microcontroller or any electronics or chassis or servos. The correct firmware needs INVERSE KYNAMATICS WHICH can be done after everything is assembled.


 
---
