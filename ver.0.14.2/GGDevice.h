#pragma once
class GGDevice{
	public:
		GGDevice(void);
		void addGGEvent(GGInput::Event,uint,float,float,float);
		void clearEvents(void);
		void getNextGGEvent(void);
		void ~GGDevice();
};
