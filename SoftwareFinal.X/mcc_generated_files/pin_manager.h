/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Led aliases
#define Led_TRIS                 TRISAbits.TRISA0
#define Led_LAT                  LATAbits.LATA0
#define Led_PORT                 PORTAbits.RA0
#define Led_WPU                  WPUAbits.WPUA0
#define Led_OD                   ODCONAbits.ODCA0
#define Led_ANS                  ANSELAbits.ANSA0
#define Led_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Led_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Led_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Led_GetValue()           PORTAbits.RA0
#define Led_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Led_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Led_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Led_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Led_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Led_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Led_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Led_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set AN0 aliases
#define AN0_TRIS                 TRISAbits.TRISA4
#define AN0_LAT                  LATAbits.LATA4
#define AN0_PORT                 PORTAbits.RA4
#define AN0_WPU                  WPUAbits.WPUA4
#define AN0_OD                   ODCONAbits.ODCA4
#define AN0_ANS                  ANSELAbits.ANSA4
#define AN0_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define AN0_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define AN0_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define AN0_GetValue()           PORTAbits.RA4
#define AN0_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define AN0_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define AN0_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define AN0_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define AN0_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define AN0_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define AN0_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define AN0_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/