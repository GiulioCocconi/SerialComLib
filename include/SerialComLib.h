#ifndef SerialComLib_h
#define SerialComLib_h

#include "Arduino.h"

class SerialCom
{
	public:
		SerialCom(Stream &port, char term, int delay);
		void begin(int rate);
		String send(String msg);
		String receive();
	private:
		Stream& _port;
		char _term;
		int _delay;
};

#endif
