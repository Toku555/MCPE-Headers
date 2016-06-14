#pragma once
class SoundComponent{
	public:
		SoundComponent(std::shared_ptr<UIControl> &);
		SoundComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getPitch(void);
		void getSoundName(void);
		void getVolume(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setPitch(float);
		void setPitch(float);
		void setSoundName(std::string const&);
		void setSoundName(std::string const&);
		void setSoundPlayer(UISoundPlayer const&);
		void setSoundPlayer(UISoundPlayer const&);
		void setVolume(float);
		void setVolume(float);
		void ~SoundComponent();
		void ~SoundComponent();
		void ~SoundComponent();
		void ~SoundComponent();
};
