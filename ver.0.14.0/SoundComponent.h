#pragma once
class SoundComponent{
	public:
		SoundComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getPitch(void);
		void getSoundName(void);
		void getVolume(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void setPitch(float);
		void setSoundName(std::string const&);
		void setSoundPlayer(UISoundPlayer const&);
		void setVolume(float);
		void ~SoundComponent();
		void ~SoundComponent();
};
