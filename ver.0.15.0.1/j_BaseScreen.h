#pragma once
namespace j{
	class BaseScreen{
		public:
		void cleanupForRendering(ScreenContext &);
		void ~BaseScreen();
	}
};
