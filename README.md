# Hexapod/spider robot 2.0

<p align="center">
 https://files.catbox.moe/ab1s6f.mp4
</p>

**Hexapod Robot** is a 6-legged walking robot featuring:

- 14cm × 19cm × 5.3cm body chassis
- Arduino R4 Minima microcontroller
- 18× MG90S servo motors for leg actuation
- 2× PCA9685 16-channel PWM driver boards
- 300W 20A DC-DC buck converter
- 11.1V or 7.4V LiPo battery for autonomous operation
- 3D printed chassis and leg components
- Modular hexapod kinematics for six-legged locomotion

## Dimensions

### Travel area

- **Body Width**: 14 cm
- **Body Length**: 19 cm
- **Body Height**: 5.3 cm

### Body Specifications

- **Chassis Weight**: 100-140g _(body only excluding leg parts)_
- **Battery Runtime**: 13-30 minutes _(depending on activity)_
- **Total Footprint**: ~25cm × 30cm _(estimated with legs extended)_

## CAD

All CAD files are designed in FreeCAD and can be found in the `CAD/` directory:

- **Corex2.0.FCStd** - Hip joint (coxa segment)
- **Femur2.0.FCStd** - Upper leg segment
- **Tibita2.1.FCStd** - Lower leg segment with foot
- **bodyhornsupport.FCStd** - Femur and Tibia Servo horn mounting bracket
- **extra part 2.0.FCStd** - Coxa Servo horn mounting bracket
- **lowerrectangularbodyy.FCStd** - Lower body chassis panel
- **rectangularbodytop.FCStd** - Upper body chassis panel/cover

View the CAD designs with panels removed:

<img width="1600" height="722" alt="image" src="https://github.com/user-attachments/assets/45657123-1a51-4ba2-a1d9-1b3e3921278d" />
<img width="720" height="791" alt="image" src="https://github.com/user-attachments/assets/7ea5ba53-bd65-4208-95b9-099d813e98ae" />


## Assembly

### Phase 1: Chassis Assembly (Completed)
1. Assemble 3D printed chassis components (use 2m screws)
2. Mount Arduino R4 Minima on upper chassis
3. Install PCA9685 PWM driver boards in lower chassis 
4. Connect DC-DC buck converter input to battery and output to 2x pca9685 boards and Arduino Jack 
6. Test power.

### Phase 2: Leg Assembly (In Progress)
1. 3D print all leg components with recommended settings
2. Clean and assemble printed parts
3. Mount MG90S servos to leg joints
4. Connect servos to PCA9685 boards
5. Calibrate servo angles
6. Attach legs to chassis using 2mm screws

### Phase 3: Programming & Testing
1. Load servo control firmware to Arduino
2. Test each leg individually 
3. Implement hexapod gait algorithm
4. Validate walking motion
5. Fine-tune movement parameters

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

![Hexapod Robot]<img width="1200" height="900" alt="image" src="https://github.com/user-attachments/assets/7bf05057-6b16-4d8a-b74a-0f88ae8e2a18" />
<img width="900" height="900" alt="image" src="https://github.com/user-attachments/assets/754366f5-e4ec-4b4b-aab1-ff246f03f4a3" />




https://github.com/user-attachments/assets/e71662ce-a957-4413-9a77-1a443444ea11

