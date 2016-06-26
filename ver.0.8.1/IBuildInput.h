#pragma once
class IBuildInput{
	public:
		void onConfigChanged(Config const&);
		void tickBuild(Player *,BuildActionIntention *);
		void ~IBuildInput();
		void ~IBuildInput();
};
