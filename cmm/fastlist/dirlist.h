/* ��� 䠩� ᣥ���஢�� �ணࠬ��� 'FASTLIST.EXE' */

short ofsdir[27]={
	0x0000,0x000F,	//D a
	0xFFFF,0x0045,	//b c
	0x0072,0x0090,	//d e
	0x009F,0xFFFF,	//f g
	0xFFFF,0x00BA,	//h i
	0x0100,0xFFFF,	//j k
	0xFFFF,0x010E,	//l m
	0xFFFF,0xFFFF,	//n o
	0x0128,0xFFFF,	//p q
	0x0155,0x017A,	//r s
	0xFFFF,0x01EC,	//t u
	0xFFFF,0x0259,	//v w
	0xFFFF,0xFFFF,	//x y
	0xFFFF};	//z 

unsigned char dirlist[]={
	0x19,0x00,0x4F,0x53,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0,	// DOSrequired
	0xFF,0xFF,	// end char 'D'
	0x14,0x00,0x6C,0x69,0x67,0x6E,0,	// align
	0x32,0x00,0x6C,0x69,0x67,0x6E,0x63,0x6F,0x64,0x65,0,	// aligncode
	0x15,0x00,0x6C,0x69,0x67,0x6E,0x65,0x72,0,	// aligner
	0x16,0x00,0x6C,0x69,0x67,0x6E,0x77,0x6F,0x72,0x64,0,	// alignword
	0x03,0x00,0x72,0x67,0x63,0,	// argc
	0x0B,0x00,0x74,0x65,0x78,0x69,0x74,0,	// atexit
	0xFF,0xFF,	// end char 'a'
	0x30,0x00,0x6F,0x64,0x65,0x33,0x32,0,	// code32
	0x17,0x00,0x6F,0x64,0x65,0x73,0x69,0x7A,0x65,0,	// codesize
	0x35,0x00,0x6F,0x6D,0x70,0x69,0x6C,0x65,0x72,0x76,0x65,0x72,0x73,0x69,0x6F,0x6E,0,	// compilerversion
	0x00,0x00,0x74,0x72,0x6C,0x5F,0x63,0,	// ctrl_c
	0xFF,0xFF,	// end char 'c'
	0x0C,0x00,0x61,0x74,0x61,0x73,0x65,0x67,0,	// dataseg
	0x18,0x00,0x65,0x66,0x69,0x6E,0x65,0,	// define
	0x34,0x00,0x6F,0x73,0x73,0x74,0x72,0x69,0x6E,0x67,0,	// dosstring
	0xFF,0xFF,	// end char 'd'
	0x36,0x00,0x6C,0x73,0x65,0,	// else
	0x1A,0x00,0x6E,0x64,0x69,0x66,0,	// endif
	0xFF,0xFF,	// end char 'e'
	0x10,0x00,0x61,0x73,0x74,0x63,0x61,0x6C,0x6C,0x61,0x70,0x69,0,	// fastcallapi
	0x33,0x00,0x69,0x78,0x75,0x70,0x74,0x61,0x62,0x6C,0x65,0,	// fixuptable
	0xFF,0xFF,	// end char 'f'
	0x1B,0x00,0x66,0x64,0x65,0x66,0,	// ifdef
	0x1C,0x00,0x66,0x6E,0x64,0x65,0x66,0,	// ifndef
	0x13,0x00,0x6D,0x61,0x67,0x65,0x62,0x61,0x73,0x65,0,	// imagebase
	0x1D,0x00,0x6E,0x63,0x6C,0x75,0x64,0x65,0,	// include
	0x2E,0x00,0x6E,0x63,0x6C,0x75,0x64,0x65,0x70,0x61,0x74,0x68,0,	// includepath
	0x2F,0x00,0x6E,0x69,0x74,0x61,0x6C,0x6C,0x76,0x61,0x72,0,	// initallvar
	0x39,0x00,0x6E,0x6C,0x69,0x6E,0x65,0,	// inline
	0xFF,0xFF,	// end char 'i'
	0x01,0x00,0x75,0x6D,0x70,0x74,0x6F,0x6D,0x61,0x69,0x6E,0,	// jumptomain
	0xFF,0xFF,	// end char 'j'
	0x1E,0x00,0x61,0x78,0x65,0x72,0x72,0x6F,0x72,0x73,0,	// maxerrors
	0x0E,0x00,0x6F,0x76,0x65,0x64,0x61,0x74,0x61,0x72,0x6F,0x6D,0,	// movedatarom
	0xFF,0xFF,	// end char 'm'
	0x02,0x00,0x61,0x72,0x73,0x65,0x63,0x6F,0x6D,0x6D,0x61,0x6E,0x64,0x6C,0x69,0x6E,0x65,0,	// parsecommandline
	0x38,0x00,0x72,0x61,0x67,0x6D,0x61,0,	// pragma
	0x1F,0x00,0x72,0x69,0x6E,0x74,0,	// print
	0x20,0x00,0x72,0x69,0x6E,0x74,0x68,0x65,0x78,0,	// printhex
	0xFF,0xFF,	// end char 'p'
	0x21,0x00,0x61,0x6E,0x64,0x6F,0x6D,0x62,0x79,0x74,0x65,0,	// randombyte
	0x04,0x00,0x65,0x73,0x69,0x7A,0x65,0,	// resize
	0x05,0x00,0x65,0x73,0x69,0x7A,0x65,0x6D,0x65,0x73,0x73,0x61,0x67,0x65,0,	// resizemessage
	0xFF,0xFF,	// end char 'r'
	0x2C,0x00,0x65,0x74,0x64,0x69,0x6E,0x70,0x72,0x6F,0x63,0,	// setdinproc
	0x0D,0x00,0x69,0x7A,0x65,0x72,0x6F,0x6D,0,	// sizerom
	0x22,0x00,0x70,0x65,0x65,0x64,0,	// speed
	0x06,0x00,0x74,0x61,0x63,0x6B,0,	// stack
	0x07,0x00,0x74,0x61,0x72,0x74,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0,	// startaddress
	0x0F,0x00,0x74,0x61,0x72,0x74,0x75,0x70,0x74,0x6F,0x6D,0x61,0x69,0x6E,0,	// startuptomain
	0x11,0x00,0x74,0x61,0x72,0x74,0x75,0x73,0x65,0x76,0x61,0x72,0,	// startusevar
	0x08,0x00,0x79,0x73,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0,	// sysattribute
	0x0A,0x00,0x79,0x73,0x63,0x6F,0x6D,0x6D,0x61,0x6E,0x64,0,	// syscommand
	0x09,0x00,0x79,0x73,0x6E,0x61,0x6D,0x65,0,	// sysname
	0xFF,0xFF,	// end char 's'
	0x31,0x00,0x6E,0x64,0x65,0x66,0,	// undef
	0x25,0x00,0x73,0x65,0x38,0x30,0x31,0x38,0x36,0,	// use80186
	0x26,0x00,0x73,0x65,0x38,0x30,0x32,0x38,0x36,0,	// use80286
	0x27,0x00,0x73,0x65,0x38,0x30,0x33,0x38,0x36,0,	// use80386
	0x28,0x00,0x73,0x65,0x38,0x30,0x34,0x38,0x36,0,	// use80486
	0x2B,0x00,0x73,0x65,0x38,0x30,0x37,0x38,0x36,0,	// use80786
	0x23,0x00,0x73,0x65,0x38,0x30,0x38,0x36,0,	// use8086
	0x24,0x00,0x73,0x65,0x38,0x30,0x38,0x38,0,	// use8088
	0x2A,0x00,0x73,0x65,0x4D,0x4D,0x58,0,	// useMMX
	0x29,0x00,0x73,0x65,0x50,0x65,0x6E,0x74,0x69,0x75,0x6D,0,	// usePentium
	0x12,0x00,0x73,0x65,0x73,0x74,0x61,0x72,0x74,0x75,0x70,0,	// usestartup
	0xFF,0xFF,	// end char 'u'
	0x2D,0x00,0x61,0x72,0x6E,0x69,0x6E,0x67,0,	// warning
	0x37,0x00,0x69,0x6E,0x6D,0x6F,0x6E,0x6F,0x62,0x6C,0x6F,0x63,0x6B,0,	// winmonoblock
	0xFF,0xFF	// end char 'w'
};
