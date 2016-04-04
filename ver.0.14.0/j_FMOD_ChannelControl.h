#pragma once
namespace j{
	class FMOD{
		public:
		void setMute(bool);
		void setVolume(float);
		void mixerResume(void);
		void mixerSuspend(void);
		void update(void);
	}
};
