# Prerequisites:
StlinkV2 driver: https://www.st.com/content/st_com/en/products/development-tools/software-development-tools/stm32-software-development-tools/stm32-utilities/stsw-link009.html

in platformio.ini add 
    
    upload_protocol = stlink

see also: https://docs.platformio.org/en/latest/plus/debug-tools/stlink.html

# Documentation

* Bluepill joystick HID demo: https://github.com/dviejo/stm32joystick_demo
* HID bluepill mouse jiggler/typing duck: https://satoshinm.github.io/blog/171227_stm32hid_pill_duck_scriptable_usb_hid_device_using_an_stm32_blue_pill_from_mouse_jigglers_to_rubber_duckies.html
* libopencm3 usb_HID example: https://github.com/libopencm3/libopencm3-examples/tree/master/examples/stm32/f1/other/usb_hid

* USB HID device descriptor tutorial: https://eleccelerator.com/tutorial-about-usb-hid-report-descriptors/
* USB HID page: https://www.usb.org/hid (for HID hut tables and descriptor tool)

* Arduino joystick library: https://github.com/MHeironimus/ArduinoJoystickLibrary
* N64 to gamecube adapter: https://github.com/brownan/Gamecube-N64-Controller
* Arduino Nintendo controller lib: https://github.com/NicoHood/Nintendo
* Wii CC to N64: https://github.com/omgdanieltam/Wii_Classic_to_N64
* SNES to gamecube: https://github.com/tevey/snesToGameCube
* GC controller interface reverse engineering: https://os.mbed.com/users/christopherjwang/code/gamecube_controller/wiki/Homepage#:~:text=Gamecube%20Controller%20Protocol%20The%20Gamecube%20controller%20uses%203.3V,bi-directional%20data%20line%20to%20communicate%20with%20the%20console.
* Wii CC i2c protocol: https://spinalcode.co.uk/2018/08/14/wii-classic-controller-protocol/

# Pinout
Of end of my chinese extension cable, matched to the two pinout diagrams of the controller end.

Red = data
White = NC
Yellow = GND
Black = clock
Green = power




-D USBD_VID=0x0483
	-D USB_MANUFACTURER="Unknown"
	-D USB_PRODUCT="\"BLUEPILL_F103C6\""
	-D HAL_PCD_MODULE_ENABLED


