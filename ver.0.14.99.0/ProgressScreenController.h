#pragma once
class ProgressScreenController{
	public:
		ProgressScreenController(std::shared_ptr<MinecraftScreenModel>,std::string const&,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool);
		ProgressScreenController(std::shared_ptr<MinecraftScreenModel>,std::string const&,std::string const&,std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,bool);
		void _getButtonADescription(void);
		void _getButtonADescription(void);
		void _getGamepadHelperVisible(void);
		void _getGamepadHelperVisible(void);
		void _getLoadingState(void);
		void _getProgressMessage(void);
		void _isInCancellableState(void);
		void _pendingTasksFinished(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _registerProgressBindings(void);
		void _registerProgressBindings(void);
		void _setupProgressScreen(bool);
		void _setupProgressScreen(bool);
		void getAdditionalScreenInfo(void);
		void getAdditionalScreenInfo(void);
		void tick(void);
		void tick(void);
		void ~ProgressScreenController();
		void ~ProgressScreenController();
		void ~ProgressScreenController();
		void ~ProgressScreenController();
};
