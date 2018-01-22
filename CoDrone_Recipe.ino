#include <CoDrone.h>

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

/* This lets the board make a connection to the drone
 * CoDrone.begin(115200);
 * 
 * This connects to a random nearby drone
 * CoDrone.AutoConnect(NearbyDrone);
 * 
 * This connects to the last connected drone
 * CoDrone.AutoConnect(ConnectedDrone);
 * 
 * This sends your currently connected drone's address to the serial monitor!
 * PrintDroneAddress()
 * 
 * This connects to a specific drone, using a drone address
 * CoDrone.AutoConnect(AddressInputDrone, droneAddress);
 * 
 * This orders the drone to use a pre-programmed movement
 * CoDrone.FlightEvent(event);
 *    TakeOff
 *    Landing
 * 
 * This tells the computer to wait for the specified number of milliseconds
 * delay(milliseconds)
 * 
 * These VARIABLES can be used to tell it exactly how to move
 * THROTTLE: For moving up and down
 * PITCH: For moving forward and backward
 * ROLL: For moving left and right
 * YAW: For turning left and right
 * 
 * This tells the computer to send the current values of the VARIABLES to the drone
 * CoDrone.Control();
 * 
 * This tells the drone to make a sound. Higher number for tone means higher pitch noise
 * Lower number for length means a longer sound.
 * CoDrone.Buzz(Tone, Length);
 * 
 * This changes the lights on your drone
 * LedColor(mode, color, interval);
 *    mode: Tells the computer which lights to change, and what style of light it will be
 *    color: Sets the color to a specific preset color
 *    interval: speed of blinking, if your mode is a blinking mode. 0-255, lower is faster
 *    
 * Like above, except color is done by RGB value
 * LedColor(mode, R, G, B, interval);
 * 
 * Here's a list of modes:
 *    EyeNone
 *    EyeHold
 *    EyeMix
 *    EyeFlicker
 *    EyeFlickerDouble
 *    EyeDimming
 *    ArmNone
 *    ArmHold
 *    ArmMix
 *    ArmFlicker
 *    ArmFlickerDouble
 *    ArmDimming
 *    ArmFlow
 *    ArmFlowReverse
 *    
 * Here's a list of preset color options:
 *    AliceBlue, AntiqueWhite, Aqua,  Aquamarine, Azure, Beige,  Bisque, Black
 *    BlanchedAlmond,  Blue, BlueViolet, Brown,BurlyWood, CadetBlue, Chartreuse
 *    Chocolate, Coral, CornflowerBlue,  Cornsilk, Crimson, Cyan, DarkBlue, DarkCyan
 *    DarkGoldenRod,  DarkGray, DarkGreen, DarkKhaki,  DarkMagenta, DarkOliveGreen
 *    DarkOrange, DarkOrchid, DarkRed,DarkSalmon,  DarkSeaGreen, DarkSlateBlue
 *    Darkslategray, darkturquois to, darkviolet, deepp Link, deepskyblu to,dimgray
 *    DodgerBlue,FireBrick, FloralWhite, ForestGreen,  Fuchsia, Gainsboro, GhostWhite
 *    Gold, GoldenRod, Gray, Green,GreenYellow, HoneyDew,  HotPink, IndianRed, Indigo
 *    Ivory, Khaki, Lavender,  LavenderBlush, LawnGreen, LemonChiffon,LightBlue
 *    LightCoral, LightCyan, LightGoldenRodYellow, LightGray, LightGreen,  LightPink
 *    LightSalmon, LightSeaGreen,LightSkyBlue, LightSlateGray, LightSteelBlue, LightYellow
 *    Lime, LimeGreen, Linen, Magenta, Maroon, MediumAquaMarine,MediumBlue
 *    MediumOrchid, MediumPurple, MediumSeaGreen, MediumSlateBlue,MediumSpringGreen
 *    MediumTurquoise,MediumVioletRed,  MidnightBlue, MintCream,MistyRose, Moccasin
 *    NavajoWhite, Navy, OldLace, Olive, OliveDrab, Orange,OrangeRed,Orchid,PaleGoldenRod
 *    PaleGreen, PaleTurquoise, PaleVioletRed, PapayaWhip, PeachPuff,Peru, Pink, Plum
 *    PowderBlue, Purple, RebeccaPurple,Red, RosyBrown, RoyalBlue,SaddleBrown, Salmon
 *    SandyBrown, SeaGreen, SeaShell,Sienna, Silver, SkyBlue,SlateBlue, SlateGray,Snow
 *    SpringGreen, SteelBlue, Tan, Teal, Thistle, Tomato, Turquoise, Violet,Wheat, White
 *    WhiteSmoke, Yellow, YellowGreen
 */
