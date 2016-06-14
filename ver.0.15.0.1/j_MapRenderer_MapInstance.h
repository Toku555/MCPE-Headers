#pragma once
namespace j{
	class MapRenderer{
		public:
		void draw(Player *,bool);
		void onAppSuspended(void);
		void resetData(void);
		void ~MapRenderer();
	}
};
