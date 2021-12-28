#ifndef SerialComLib_h
#define SerialComLib_h

#include "Arduino.h"

class SerialCom
{
	public:
		SerialCom(Stream &port, int rate, char term, int delay) : _port(port);
		String send(String msg);
		String receive();
	private:
		Stream& _port;
		char _term;
		int _delay;
};

#endif
