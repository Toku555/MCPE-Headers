#pragma once
namespace j{
	class ScreenComponent{
		public:
		void getAbsorbsInput(void);
		void getForceRenderBelow(void);
		void getIsModal(void);
		void getIsShowingMenu(void);
		void getLowFreqRendering(void);
		void getRenderGameBehind(void);
		void getScreenDrawsLast(void);
		void getScreenIsNotFlushable(void);
		void getSendTelemetry(void);
		void getShouldStealMouse(void);
	}
};
