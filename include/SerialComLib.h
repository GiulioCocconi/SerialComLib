#ifndef SerialComLib_h
#define SerialComLib_h

#include "Arduino.h"

class SerialCom
{
	public:
		SerialCom(HardwareSerial &port, int rate, char term, int delay);
		String send(String msg);
		String receive();
	private:
		HardwareSerial& _port;
		char _term;
		int _delay;
};

#endif
