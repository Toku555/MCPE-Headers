#pragma once
namespace j{
	class InGamePlayScreen{
		public:
		void handleDirection(DirectionId,float,float);
		void onFocusGained(void);
		void tick(int,int);
		void ~InGamePlayScreen();
	}
};
