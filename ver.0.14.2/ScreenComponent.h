#pragma once
class ScreenComponent{
	public:
		ScreenComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getForceRenderBelow(void);
		void getIsModal(void);
		void getIsShowingMenu(void);
		void getIsVRMode(void);
		void getRenderGameBehind(void);
		void getScreenDrawsLast(void);
		void getScreenIsNotFlushable(void);
		void getSendTelemetry(void);
		void getShouldStealMouse(void);
		void setForceRenderBelow(bool);
		void setIsModal(bool);
		void setIsShowingMenu(bool);
		void setIsVRMode(bool);
		void setRenderGameBehind(bool);
		void setScreenDrawsLast(bool);
		void setScreenIsNotFlushable(bool);
		void setSendTelemetry(bool);
		void setShouldStealMouse(bool);
		void ~ScreenComponent();
		void ~ScreenComponent();
};
