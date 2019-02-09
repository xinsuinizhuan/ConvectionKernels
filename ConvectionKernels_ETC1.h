#include <stdint.h>

namespace cvtt
{
    namespace Tables
    {
        namespace ETC1
        {
            const int16_t g_potentialOffsets4[] =
            {
                57, -64, -58, -54, -52, -48, -46, -44, -42, -40, -38, -36, -34, -32, -30, -28, -26, -24, -22, -20, -18, -16, -14, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 52, 54, 58, 64,
                81, -136, -124, -114, -112, -102, -100, -92, -90, -88, -80, -78, -76, -70, -68, -66, -64, -58, -56, -54, -52, -48, -46, -44, -42, -40, -36, -34, -32, -30, -26, -24, -22, -20, -18, -14, -12, -10, -8, -4, -2, 0, 2, 4, 8, 10, 12, 14, 18, 20, 22, 24, 26, 30, 32, 34, 36, 40, 42, 44, 46, 48, 52, 54, 56, 58, 64, 66, 68, 70, 76, 78, 80, 88, 90, 92, 100, 102, 112, 114, 124, 136,
                81, -232, -212, -194, -192, -174, -172, -156, -154, -152, -136, -134, -132, -118, -116, -114, -112, -98, -96, -94, -92, -80, -78, -76, -74, -72, -60, -58, -56, -54, -42, -40, -38, -36, -34, -22, -20, -18, -16, -4, -2, 0, 2, 4, 16, 18, 20, 22, 34, 36, 38, 40, 42, 54, 56, 58, 60, 72, 74, 76, 78, 80, 92, 94, 96, 98, 112, 114, 116, 118, 132, 134, 136, 152, 154, 156, 172, 174, 192, 194, 212, 232,
                81, -336, -307, -281, -278, -252, -249, -226, -223, -220, -197, -194, -191, -171, -168, -165, -162, -142, -139, -136, -133, -116, -113, -110, -107, -104, -87, -84, -81, -78, -61, -58, -55, -52, -49, -32, -29, -26, -23, -6, -3, 0, 3, 6, 23, 26, 29, 32, 49, 52, 55, 58, 61, 78, 81, 84, 87, 104, 107, 110, 113, 116, 133, 136, 139, 142, 162, 165, 168, 171, 191, 194, 197, 220, 223, 226, 249, 252, 278, 281, 307, 336,
                81, -480, -438, -402, -396, -360, -354, -324, -318, -312, -282, -276, -270, -246, -240, -234, -228, -204, -198, -192, -186, -168, -162, -156, -150, -144, -126, -120, -114, -108, -90, -84, -78, -72, -66, -48, -42, -36, -30, -12, -6, 0, 6, 12, 30, 36, 42, 48, 66, 72, 78, 84, 90, 108, 114, 120, 126, 144, 150, 156, 162, 168, 186, 192, 198, 204, 228, 234, 240, 246, 270, 276, 282, 312, 318, 324, 354, 360, 396, 402, 438, 480,
                81, -640, -584, -536, -528, -480, -472, -432, -424, -416, -376, -368, -360, -328, -320, -312, -304, -272, -264, -256, -248, -224, -216, -208, -200, -192, -168, -160, -152, -144, -120, -112, -104, -96, -88, -64, -56, -48, -40, -16, -8, 0, 8, 16, 40, 48, 56, 64, 88, 96, 104, 112, 120, 144, 152, 160, 168, 192, 200, 208, 216, 224, 248, 256, 264, 272, 304, 312, 320, 328, 360, 368, 376, 416, 424, 432, 472, 480, 528, 536, 584, 640,
                81, -848, -775, -709, -702, -636, -629, -570, -563, -556, -497, -490, -483, -431, -424, -417, -410, -358, -351, -344, -337, -292, -285, -278, -271, -264, -219, -212, -205, -198, -153, -146, -139, -132, -125, -80, -73, -66, -59, -14, -7, 0, 7, 14, 59, 66, 73, 80, 125, 132, 139, 146, 153, 198, 205, 212, 219, 264, 271, 278, 285, 292, 337, 344, 351, 358, 410, 417, 424, 431, 483, 490, 497, 556, 563, 570, 629, 636, 702, 709, 775, 848,
                81, -1464, -1328, -1234, -1192, -1098, -1056, -1004, -962, -920, -868, -826, -784, -774, -732, -690, -648, -638, -596, -554, -544, -512, -502, -460, -418, -408, -376, -366, -324, -314, -282, -272, -230, -188, -178, -146, -136, -94, -84, -52, -42, 0, 42, 52, 84, 94, 136, 146, 178, 188, 230, 272, 282, 314, 324, 366, 376, 408, 418, 460, 502, 512, 544, 554, 596, 638, 648, 690, 732, 774, 784, 826, 868, 920, 962, 1004, 1056, 1098, 1192, 1234, 1328, 1464
            };

            const unsigned int g_maxPotentialOffsets = 81;

            const int16_t g_thModifierTable[8] =
            {
                3, 6, 11, 16, 23, 43, 41, 64
            };
        }
    }
}
