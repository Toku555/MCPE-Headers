#pragma once
class MobEffectsLayout{
	public:
		MobEffectsLayout(MinecraftClient &);
		void _updateAnimations(void);
		void _updatePositions(void);
		void getEffectsDisplayInfo(void);
		void getHeight(void);
		void getOffsetToStartingPositionX(void);
		void getOffsetToStartingPositionY(void);
		void getTouchArea(void);
		void getWidth(void);
		void onConfigChanged(Config const&);
		void setHeight(int);
		void setOffsetToStartingPositionX(int);
		void setOffsetToStartingPositionY(int);
		void setWidth(int);
		void tick(void);
};