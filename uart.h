//uart.h

#include"types.h"
void Init_UART0(void);
void Init_UART1(void);
void U0_TXByte(u8 byte);
void U0_TXStr (s8 *ch);
void U0_TXU32 (u32 num);
void U0_TXS32(s32 n);
void U0_TXF32(f32 fNum,u8 nDP );
u8 U0_RxByte(void);
s8 * U0_ReadStr(void);	 
s8 *read_rfid_polling(void);

