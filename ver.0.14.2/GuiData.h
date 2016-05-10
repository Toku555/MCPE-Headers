#pragma once
class GuiData{
	public:
		GuiData(MinecraftClient &);
		void _insertGuiMessage(GuiMessage &);
		void _tickItemDrop(void);
		void _tickMessages(void);
		void _touchEnabledOrHolographic(void);
		void addMessage(std::string const&,std::string const&,int,bool);
		void calcNewAlpha(float,float);
		void clearMessages(void);
		void cubeSmoothStep(float,float,float);
		void displayChatMessage(std::string const&,std::string const&);
		void displayClientMessage(std::string const&);
		void displayLocalizableMessage(std::string const&,std::vector<std::string,std::allocator<std::string>> const&);
		void displaySystemMessage(std::string const&);
		void flashSlot(int);
		void floorAlignToScreenPixel(float);
		void forceMuteChat(void);
		void getAtlasTex(void);
		void getCrosshairMat(void);
		void getCurrentDropSlot(void);
		void getCurrentDropTicks(void);
		void getCursorMat(void);
		void getFlashSlotId(void);
		void getFlashSlotStartTime(void);
		void getGuiScale(void);
		void getGuiTex(void);
		void getIconTex(void);
		void getInvFillMat(void);
		void getInvGuiScale(void);
		void getItemNameOverlayTime(void);
		void getLastPopupSubtitleText(void);
		void getLastPopupText(void);
		void getMessageList(void);
		void getNewChatMessages(void);
		void getNewPopupNotice(std::string &,std::string &);
		void getNumSlots(void);
		void getPointerX(void);
		void getPointerY(void);
		void getRcFeedbackInner(void);
		void getRcFeedbackOuter(void);
		void getScreenHeight(void);
		void getScreenWidth(void);
		void getShowProgress(void);
		void getSlotIdAt(int,int);
		void getSlotPos(int,int &,int &);
		void getToolbarWasRendered(void);
		void getVignette(void);
		void handleClick(void);
		void isMuteChat(void);
		void isTouchEnabledOrHolographic(void);
		void itemCountItoa(char *,int);
		void onAppSuspended(void);
		void onConfigChanged(Config const&);
		void onLevelGenerated(void);
		void postError(int);
		void renderSlotText(ItemInstance const*,float,float,bool,bool,bool,bool);
		void setGuiScale(float);
		void setIsChatting(bool);
		void setNowPlaying(std::string const&);
		void setShowProgress(bool);
		void setToolbarWasRendered(bool);
		void setTouchToolbarArea(RectangleArea const&);
		void showPopupNotice(std::string const&,std::string const&);
		void showTipMessage(std::string const&);
		void tick(void);
		void toggleMuteChat(void);
		void updatePointerLocation(short,short);
		void wasToolbarClicked(void);
		void ~GuiData();
		void ~GuiData();
};
