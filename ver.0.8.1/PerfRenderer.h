#pragma once
class PerfRenderer{
	public:
		PerfRenderer(Minecraft *,Font *);
		void debugFpsMeterKeyPress(int);
		void renderFpsMeter(float);
		void toPercentString(float);
};
