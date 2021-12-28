#include "SerialComLib.h"

//TODO: Rendere libreria compatibile anche con softwareSerial:
//	Usare oggetti di tipo Stream&
//	Vedere https://stackoverflow.com/questions/48353981/arduino-calling-serial-begin-on-a-stream-object

 SerialCom::SerialCom(HardwareSerial &port, int rate, char term, int delay) : _port(port) {
	port.begin(rate);
	_port = port;
	_term = term;
	_delay = delay;
}

String SerialCom::send(String msg) {
	delay(_delay);
	_port.print(msg + _term);
	String debug = "Messaggio inviato: " + msg;
	return debug;
}

String SerialCom::receive() {
	String msg = "";
	if (_port.available() > 0) {
		msg = _port.readStringUntil(_term);
	}
	return msg;
}


