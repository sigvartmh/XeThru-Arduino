#ifndef XETHRU_H
#define XETHRU_H

class XTI{
	public:
	void begin();
	private:
	uint8_t crc8();

}

#define XT_START 0x7D
#define XT_STOP 0x7E
#define XT_ESCAPE 0x7F

#define XTS_SPC_APPCOMMAND 0x10
#define XTS_SPC_MOD_SETMODE 0x20
#define XTS_SPC_MOD_RESET 0x22
#define XTS_SPC_MOD_SETLEDCONTROL 0x24

#define XTS_SPR_APPDATA 0x50
#define XTS_ID_APP_RESP 0xD6A22314 //Rearranged to send LSB 1st 0x1423a2d6
#define XTS_ID_APP_PRESENCE 0x12892800 //0x00288912

#define XTS_ID_RESP_STATUS 0x2375FE26
#define XTS_ID_PRESENCE_STATUS 0x991A52BE

enum StateCode {
	XTS_VAL_RESP_STATE_BREATHING,
	XTS_VAL_RESP_STATE_MOVEMENT,
	XTS_VAL_RESP_STATE_MOVEMENT_TRACKING,
	XTS_VAL_RESP_STATE_NO_MOVEMENT,
	XTS_VAL_RESP_STATE_INITIALIZING,
	Reserved,
	XTS_VAL_RESP_STATE_UNKNOWN
};