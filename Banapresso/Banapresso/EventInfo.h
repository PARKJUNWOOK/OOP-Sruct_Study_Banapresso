#pragma once
#ifndef EVENTINFO_H
#define EVENTINFO_H

class EventInfo
{
private:
	int eventSn;
	string eventNm;

public:
	
	/*
		* setter, getter
	*/
	int getEventSn() { return eventSn; }
	string getEventNm() { return eventNm; }
	
	void setEventSn(int eventSn) { this->eventSn = eventSn; }
	void setEventNm(string eventNm) { this->eventNm = eventNm; }
	
};
#endif // !EVENTINFO_H
