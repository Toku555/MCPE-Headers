#pragma once
namespace j{
	class LocalPlayer{
		public:
		void closeScreen(void);
		void getLoadingState(void);
		void hurtTo(int);
		void localPlayerRenderFrequencyMove(float);
		void pickBlockCreative(HitResult const&);
		void requestChunkRadius(int);
		void startPaddling(Side);
		void stopPaddling(Side);
	}
};
