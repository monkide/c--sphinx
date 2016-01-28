/*****************************************************************************
 Sphinx C-- library (C) 2000.
 FILE:        BIOS.H
 DESCRIPTION: Access to bios services.

 LAST MODIFIED:
 ----------------------------------------------------------------------------
 Total  7
 Create 1
 Ready  14.28%

 int bioscom(int cmd,char abyte,int port);

To do create:
 biosdisk
 biosequip
 bioskey
 biosmemory
 biosprint
 biostime

*****************************************************************************/

#ifndef __TLS__

 int bioscom(int cmd,char abyte,int port);
/* diskinfo_t structure for _bios_disk() */

struct diskinfo_t
{
	unsigned drive,head,track,sector,nsectors;
	word buffer[2];
};

/* cmd values for biosdisk() */

#define _DISK_RESET     0   /* controller hard reset */
#define _DISK_STATUS    1   /* status of last operation */
#define _DISK_READ      2   /* read sectors */
#define _DISK_WRITE     3   /* write sectors */
#define _DISK_VERIFY    4   /* verify sectors */
#define _DISK_FORMAT    5   /* format track */

/* cmd values for _bios_keybrd() */

#define _KEYBRD_READ            0       /* read key */
#define _NKEYBRD_READ           0x10    /* read key - enhanced */
#define _KEYBRD_READY           1       /* check key ready */
#define _NKEYBRD_READY          0x11    /* check key ready - enhanced */
#define _KEYBRD_SHIFTSTATUS     2       /* get shift status */
#define _NKEYBRD_SHIFTSTATUS    0x12    /* get shift status - enhanced */

/* cmd values for _bios_printer() */

#define _PRINTER_WRITE  0       /* send a byte to printer */
#define _PRINTER_INIT   1       /* initialize printer */
#define _PRINTER_STATUS 2       /* read printer status */

/* cmd values for bioscom() */

#define _COM_INIT       0       /* set communication parms to a byte */
#define _COM_SEND       1       /* send a byte to port */
#define _COM_RECEIVE    2       /* read character from port */
#define _COM_STATUS     3       /* get status of port */

/* byte values for _COM_INIT cmd of bioscom() */

#define _COM_CHR7       0x02    /* 7 data bits */
#define _COM_CHR8       0x03    /* 8 data bits */
#define _COM_STOP1      0x00    /* 1 stop bit */
#define _COM_STOP2      0x04    /* 2 stop bits */
#define _COM_NOPARITY   0x00    /* no parity */
#define _COM_EVENPARITY 0x18    /* even parity */
#define _COM_ODDPARITY  0x08    /* odd parity */
#define _COM_110        0x00    /* 110 baud */
#define _COM_150        0x20    /* 150 baud */
#define _COM_300        0x40    /* 300 baud */
#define _COM_600        0x60    /* 600 baud */
#define _COM_1200       0x80    /* 1200 baud */
#define _COM_2400       0xa0    /* 2400 baud */
#define _COM_4800       0xc0    /* 4800 baud */
#define _COM_9600       0xe0    /* 9600 baud */

/* cmd values for _bios_timeofday() */

#define _TIME_GETCLOCK  0   /* get clock count */
#define _TIME_SETCLOCK  1   /* set clock count */

/* Constants for biostime() */
#define _BIOS_CLOCKS_PER_SEC 18.2
#define _BIOS_CLK_TCK        _BIOS_CLOCKS_PER_SEC

/* register structure definitions for int86(), int86x() */

#ifndef _REG_DEFS
#define _REG_DEFS

struct WORDREGS
{
    unsigned int    ax, bx, cx, dx, si, di, cflag, flags;
};


struct BYTEREGS
{
    unsigned char   al, ah, bl, bh, cl, ch, dl, dh;
};

union  REGS
{
    struct  WORDREGS x;
    struct  BYTEREGS h;
};

struct  SREGS
{
    unsigned int    es;
    unsigned int    cs;
    unsigned int    ss;
    unsigned int    ds;
};

struct  REGPACK
{
    unsigned    r_ax, r_bx, r_cx, r_dx;
    unsigned    r_bp, r_si, r_di, r_ds, r_es, r_flags;
};

#endif /* _REG_DEFS */

int      _RTLENTRY int86(int __intno,
                         union REGS _FAR *__inregs,
                         union REGS _FAR *__outregs );
int      _RTLENTRY int86x(int __intno,
                          union  REGS  _FAR *__inregs,
                          union  REGS  _FAR *__outregs,
                          struct SREGS _FAR *__segregs );

/*****************************************************************************
 * NAME  : int bioscom(int cmd,char abyte,int port)
 * TITLE : Communications I/O
 * PARAMS:
 *****************************************************************************/
#ifdef __safe_reg_mode__

:int bioscom(int cmd,char abyte,int port)
{
	$push (E)DX
	AH=cmd;
	AL=abyte;
	(E)DX=port;
	$int 0x14
	$pop (E)DX
}

#else

inline int fastcall bioscom(AH,AL,(E)DX)
{
	$int 0x14
}

#endif

/*****************************************************************************
 * NAME  :
 * TITLE :
 * PARAMS:
 *****************************************************************************/
/*fdef __safe_reg_mode__

:int biosdisk(int cmd,drive,head,track,sector,nsects,unsigned int buffer)
{
	*/
