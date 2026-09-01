# Hexapod/spider robot 2.0

<p align="center">
</p>

**Hexapod Robot** is a 6-legged walking robot featuring:

- 13cm × 18cm × 5.6cm body chassis
- Arduino UNO Q or Raspberry Pi 3,4,5
- 18× DS3240 servo motors for leg actuation
- 2× PCA9685 16-channel PWM driver boards
- 2x 300W 20A DC-DC buck converter
- 11.1V or 7.4V LiPo battery for autonomous operation (atleast 2200mah)
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
- **Total Footprint**: ~90cm × 120cm _(estimated with legs extended)_

## CAD

All CAD files are designed in FreeCAD and can be found in the `[STL/]` directory:

- **Corex- Hip joint (coxa segment)
- **Femur - Upper leg segment
- **Tibita - Lower leg segment with foot
- **Body - body chassis

View the CAD designs with panels removed:

<img width="1098" height="542" alt="Screenshot 2026-08-16 165026" src="https://github.com/user-attachments/assets/089cf413-1c95-4d9e-be20-a02b45681800" />
<img width="1104" height="544" alt="Screenshot 2026-08-16 170226" src="https://github.com/user-attachments/assets/801a11f8-84e4-4f30-808f-39416028e524" />
<img width="1104" height="544" alt="Screenshot 2026-08-16 170250" src="https://github.com/user-attachments/assets/e12d1501-b66c-4451-b689-18d5b1af08bc" />
<img width="1104" height="542" alt="Screenshot 2026-08-16 170310" src="https://github.com/user-attachments/assets/6c281067-8f48-4f00-b311-b034fe546126" />
<img width="1100" height="540" alt="Screenshot 2026-08-16 170324" src="https://github.com/user-attachments/assets/790f68db-cbe2-4512-8511-ed076cf0e1a4" />


#COMPLETE ASSEMBLY WILL LOOK LIKE THIS ( THIS SHOWS ONLY 1 LEG AS IT'S SAME FOR ALL 6 LEGS )
<img width="1919" height="1021" alt="Screenshot 2026-09-01 222856" src="https://github.com/user-attachments/assets/48aaf24f-6a2a-42d3-a279-2ca550e0cfe1" />




## Assembly

### Phase 1: Chassis Assembly
1. Assemble 3D printed chassis components (use 3m screws)
2. Mount Arduino UNO Q or Raspberry Pi 3,4,5 on upper chassis
3. Install 2x PCA9685 PWM driver boards in lower chassis 
4. Connect 2x DC-DC buck converter input to battery and output to 2x pca9685 boards and Arduino Jack or Raspberry Pi power input.
5. Test power.

### Phase 2: Leg Assembly 
1. 3D print all leg components
2. Clean and assemble printed parts using M3 screws
3. Mount DS3240 servos to leg joints using M3 screws
4. Connect servos to PCA9685 boards
5. Calibrate servo angles
6. Use M2 screws to connect servo horns to chassis
7. Attach legs to chassis using M3 screws
8. NO PCB REQUIRED UNTIL YOU WANT MRE FEATURES THEN NORMAL WALKING (ALL THE ELECTRONICS COMPONENTS LISTED WILL DO THE WORK WITHOUT A PCB)

### Phase 3: Programming & Testing
1. Load servo control firmware to your microcontroller [allatninewwy.ino](https://github.com/vedaprotoshredhq/A-HEXAPOD-SPIDER-ROBOT-2.O/blob/main/allatninwty.ino)
2. Test each leg individually 
3. Implement hexapod gait algorithm [firmware_hexapod2.ino](https://github.com/vedaprotoshredhq/A-HEXAPOD-SPIDER-ROBOT-2.O/blob/main/firmware/firmware_hexapod2.ino)
4. Validate walking motion
5. Fine-tune movement parameters 


# BOM

## HARDWARE & ELECTRONICS BOM

| Item | Specification / Notes | Indian Retailers | Quantity | Unit Price (INR) | Unit Price (USD) | Total Price (INR) | Total Price (USD) |
|------|------------------------|-----------|----------|------------------|------------------|-------------------|-------------------|
| ARDUINO UNO Q or RASBERRY PI 3,4,5 | advanced calculations , smart control , AI | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹7750 | $80.95 | ₹7750 | $80.95 |
| MPU6050 Sensor | 6‑axis gyro + accelerometer | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹200 | $2.1 | ₹200 | $2.1 |
| CD74HC4067 | 16-CHANNEL ANALOG/DIGITAL MULTIPLEXER/DEMULTIPLEXER BREAKOUT BOARD | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 | ₹70 | $0.75| ₹140 | $1.5 |
| PCA9685 Driver | 16‑channel servo driver | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 | ₹300 | $3.15 | ₹600 | $6.30 |
| DS3240 Servo | 180° digital high‑torque servo | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 20 | ₹1,300 | $13.60 | ₹26,000 | $272.00 |
| LiPo Battery | 2S 7.4V 2200mAh | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹1,600 | $16.75 | ₹1,600 | $16.75 |
| LiPo Charger | 1S–4S balance charger | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 1 | ₹2,500 | $26.15 | ₹2,500 | $26.15 |
| Buck Converter | 300 W / 20 A DC‑DC | Zbotic, Robu.in, Robocraze, QuartzComponents, FlyRobo | 2 | ₹495 | $5.20 | ₹990 | $10.40 |
| Screws (M2 + M3) | **M2:** 8mm×168, 12mm×12 <br> **M3:** 8mm×24, 12mm×84, 16mm×12 | OnlyScrews | Combined set | ₹1,000 | $10.50 | ₹1,000 | $10.50 |
---

## 3D PRINTED PARTS BOM 

| **No.** | **[Item](ca://s?q=Explain_item_names_in_BOM)** | **[Specification](ca://s?q=Explain_specifications_in_BOM)** | **[Quantity](ca://s?q=Explain_quantity_in_BOM)** | **[Unit Price ₹](ca://s?q=Explain_unit_price_in_Rupees)** | **[Unit Price $](ca://s?q=Explain_unit_price_in_USD)** | **[Total ₹](ca://s?q=Explain_total_in_Rupees)** | **[Total $](ca://s?q=Explain_total_in_USD)** |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | bodytocoxa-BodyFillet 005.stl | to connect body to coxa motor | 6 | 266.40 | 3.21 | 1,598.40 | 19.25 |
| 2 | coxatofemurlower-BodyFillet 001.stl | for coxa motor ball bearing | 6 | 94.11 | 1.13 | 564.66 | 6.80 |
| 3 | femurtocoxahorncover-Body.htl | for coxa motor horn | 6 | 47.38 | 0.57 | 284.28 | 3.42 |
| 4 | femur-BodyFillet004.stl | – | 6 | 516.25 | 6.22 | 3,097.50 | 37.30 |
| 5 | femurbottom-BodyFillet003.shtl | – | 6 | 105.00 | 1.27 | 630.00 | 7.59 |
| 6 | coxatofemurtibiaballbearing-BodyFillet002.stl | – | 6 | 95.54 | 1.15 | 573.24 | 6.91 |
| 7 | Tibia Horn Part | – | 6 | 293.45 | 3.54 | 1,760.70 | 21.21 |
| 8 | Tibia Tip Body Fillet 001.htl | – | 6 | 69.75 | 0.84 | 418.50 | 5.04 |
| 9 | Tibia Tip R Body Fillet 001.htl | – | 6 | 96.76 | 1.17 | 580.56 | 6.99 |
| 10 | Cover Body Fillet.stl | – | 12 | 40.48 | 0.49 | 485.76 | 5.86 |
| 11 | Ground Shock Bottom Body Fillet 001.htl | – | 6 | 217.41 | 2.62 | 1,304.46 | 15.72 |
| 12 | Ground Shock Middle Body Fillet 001.htl | – | **12** | 74.63 | 0.90 | 895.56 | 10.79 |
| 13 | TheEnd2-Body Pad 001.htl | – | 6 | 54.97 | 0.66 | 329.82 | 3.97 |
| 14 | 1 mm Half Spring Body Pocket 005.htl | – | 12 | 42.27 | 0.51 | 507.24 | 6.11 |
| 15 | 1 mm Spring Body Fillet 001.htl | – | 12 | 58.51 | 0.70 | 702.12 | 8.46 |
| 16 | TPU 2.5 mm Half Spring Body Pocket.htl | – | 12 | 48.71 | 0.59 | 584.52 | 7.04 |
| 17 | TPU 2.5 mm Spring Body Fillet 001.htl | – | 12 | 66.30 | 0.80 | 795.60 | 9.58 |
| 18 | **2.0 v1 MG996R High Torque Body – Body Mirrored 001.stl** | - | 1 | 1,513.53 | 18.24 | 1,513.53 | 18.24 |
---


## Totals (ONLY 3D PRINTED PARTS )

Total in ₹ (Indian Rupees): ₹17,706.65

Total in $ (US Dollars): $213.30



## Totals ( ONLY HARDWARE AND ELECTRONICS )
- Servos subtotal (DS3218): (₹26,000 → $272.00)
- All hardware and electronics (₹40,780 → $426.65)
- **Overall BOM:** ₹17,706.65 + ₹40,780 → $213.30 + $426.65 = ₹58,486.65 → $639.95

---

### Screw Inventory Summary
- M2 screws total: 180 pieces  
- M3 screws total: 120 pieces  
- **Grand total screws:** 300 pieces



## Credits

- Arduino and Rasberry pi community for microcontroller guidance.
- PCA9685 PWM board reference designs.
- Hexapod robotics open-source community for gait algorithms and kinematics.

## Thank you's

- ProtoshredHQ team for design and assembly.
- FreeCAD community for excellent CAD tools.
- 3D printing community for printing tips and optimization.

## License

Hexapod Robot is open-source. More details can be found at [LICENSE.md](https://github.com/vedaprotoshredhq/A-HEXAPOD-SPIDER-ROBOT-2.O/blob/main/LICENSE).

---
# NOTES FOR THE REVIEWER: -
## HEXAPOD IS NOT COMPLETELY BULD YET 
Complete build requires: - 

The body chassis

THE 6 legs chassis

All hardware (3d printed parts and screws and all electronic components)

Electronic components (microcontrollers and drivers and power supply and battery and servos)

All hardware and electronics list in BOM above 

Firmware is not conformed yet, the firmware given above can work but, right now I don't have any microcontroller or any electronics or chassis or servos. The correct firmware needs Inverse Kinematics which can be done after everything is assembled (all chassis and servos and electronics and hardware).


 
---
