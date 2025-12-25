/*****************************************************************************
 *  SPI Low Level Module Header
 *
 *
 ****************************************************************************/

#ifndef __SPI_H__
#define __SPI_H__


// Public Prototypes
extern void spiInit(void);
extern UINT8 spiRead(void);
extern void spiWrite(UINT8 yByte);
extern void spiChipSelect(void);
extern void spiChipDeselect(void);

extern void Delay2us(void);

// I/O Port and Pins definitions
#define PIN_SCLK    LATAbits.LATA5                   // SCLK: PortA Bit 5
#define PIN_SDOUT   LATAbits.LATA4                   // SDIO: PortA Bit 4 output
#define PIN_SDIN    PORTAbits.RA4                     // SDIO: PortA Bit 4 input
#define TRIS_SDIO   TRISAbits.TRISA4                  // TRIS bit for data I/O
#define PIN_CE      LATAbits.LATA3                   // Chip Enable: PortA Bit 3


#endif /* __SPI_H__ */
