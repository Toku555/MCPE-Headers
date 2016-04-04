#pragma once
class MobEffectsOverlay{
	public:
		MobEffectsOverlay(MinecraftClient &);
		void onMobEffectsChanged(MobEffectsLayout const&);
		void render(float);
		void ~MobEffectsOverlay();
		void ~MobEffectsOverlay();
};
