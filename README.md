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
- **Total Footprint**: ~30cm × 35cm _(estimated with legs extended)_

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

### Phase 1: Chassis Assembly (Completed)
1. Assemble 3D printed chassis components (use 3m screws)
2. Mount Arduino R4 Minima or any microcolntoller on upper chassis
3. Install 2x PCA9685 PWM driver boards in lower chassis 
4. Connect 2x DC-DC buck converter input to battery and output to 2x pca9685 boards and Arduino Jack 
6. Test power.

### Phase 2: Leg Assembly (In Progress)
1. 3D print all leg components
2. Clean and assemble printed parts
3. Mount MG996R servos to leg joints
4. Connect servos to PCA9685 boards
5. Calibrate servo angles
6. Attach legs to chassis using 2mm screws

### Phase 3: Programming & Testing
1. Load servo control firmware to your microcontroller
2. Test each leg individually 
3. Implement hexapod gait algorithm
4. Validate walking motion
5. Fine-tune movement parameters

https://github.com/vedaprotoshredhq/A-HEXAPOD-SPIDER-ROBOT-2.O/blob/main/BOM

## Credits

- Arduino community for microcontroller guidance.
- PCA9685 PWM board reference designs.
- Hexapod robotics open-source community for gait algorithms and kinematics.

## Thank you's

- Protoshred HQ team for design and assembly.
- FreeCAD community for excellent CAD tools.
- 3D printing community for printing tips and optimization.

## License

Hexapod Robot is open-source. More details can be found at [LICENSE.md](LICENSE.md).
