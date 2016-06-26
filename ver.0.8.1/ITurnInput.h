#pragma once
class ITurnInput{
	public:
		void getDeltaTime(void);
		void linearTransform(float,float,float,bool);
		void onConfigChanged(Config const&);
		void ~ITurnInput();
		void ~ITurnInput();
};
