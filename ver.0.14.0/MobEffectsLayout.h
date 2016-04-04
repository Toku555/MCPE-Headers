#pragma once
class MobEffectsLayout{
	public:
		MobEffectsLayout(MinecraftClient &);
		void _updateAnimations(void);
		void _updatePositions(void);
		void getEffectsDisplayInfo(void);
		void getTouchArea(void);
		void onConfigChanged(Config const&);
		void tick(void);
};
