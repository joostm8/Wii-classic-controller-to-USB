// C:\Users\Joost\Downloads\dt2_4\MSDEV\Projects\test\two_thumbstick_gamepad.h


char ReportDescriptor[78] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x05,                    // USAGE (Game Pad)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x05, 0x01,                    //   USAGE_PAGE (Generic Desktop)
    0x09, 0x05,                    //   USAGE (Game Pad)
    0xa1, 0x00,                    //   COLLECTION (Physical)
    0x05, 0x09,                    //     USAGE_PAGE (Button)
    0x19, 0x01,                    //     USAGE_MINIMUM (Button 1)
    0x29, 0x08,                    //     USAGE_MAXIMUM (Button 8)
    0x25, 0x01,                    //     LOGICAL_MAXIMUM (1)
    0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
    0x59, 0x08,                    //     DESIGNATOR_MAXIMUM (8)
    0x75, 0x01,                    //     REPORT_SIZE (1)
    0x95, 0x08,                    //     REPORT_COUNT (8)
    0x81, 0x02,                    //     INPUT (Data,Var,Abs)
    0x05, 0x01,                    //     USAGE_PAGE (Generic Desktop)
    0x09, 0x01,                    //     USAGE (Pointer)
    0x16, 0x00, 0x80,              //     LOGICAL_MINIMUM (-32768)
    0x27, 0x00, 0x80, 0x00, 0x00,  //     LOGICAL_MAXIMUM (32768)
    0x75, 0x10,                    //     REPORT_SIZE (16)
    0x95, 0x04,                    //     REPORT_COUNT (4)
    0xa1, 0x00,                    //     COLLECTION (Physical)
    0x09, 0x30,                    //       USAGE (X)
    0x09, 0x31,                    //       USAGE (Y)
    0x09, 0x32,                    //       USAGE (Z)
    0x09, 0x33,                    //       USAGE (Rx)
    0xc0,                          //               END_COLLECTION
    0x05, 0x01,                    //     USAGE_PAGE (Generic Desktop)
    0x09, 0x39,                    //     USAGE (Hat switch)
    0x15, 0x00,                    //     LOGICAL_MINIMUM (0)
    0x25, 0x07,                    //     LOGICAL_MAXIMUM (7)
    0x35, 0x00,                    //     PHYSICAL_MINIMUM (0)
    0x46, 0x3b, 0x01,              //     PHYSICAL_MAXIMUM (315)
    0x75, 0x07,                    //     REPORT_SIZE (7)
    0x95, 0x01,                    //     REPORT_COUNT (1)
    0x81, 0x02,                    //     INPUT (Data,Var,Abs)
    0xc0,                          //               END_COLLECTION
    0xc0                           // END_COLLECTION
};

