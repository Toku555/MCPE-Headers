#pragma once
class RealmsPendingInvitationsScreenController{
	public:
		RealmsPendingInvitationsScreenController(std::shared_ptr<MinecraftScreenModel>,bool);
		RealmsPendingInvitationsScreenController(std::shared_ptr<MinecraftScreenModel>,bool);
		void _fetchPendingInvites(void);
		void _handleHideInvitation(ToggleChangeEventData &);
		void _handleInvitationAccept(UIPropertyBag *);
		void _handleInvitationAccept(UIPropertyBag *);
		void _handleInvitationDecline(UIPropertyBag *);
		void _handleInvitationDecline(UIPropertyBag *);
		void _initialize(void);
		void _initialize(void);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void tick(void);
		void tick(void);
		void ~RealmsPendingInvitationsScreenController();
		void ~RealmsPendingInvitationsScreenController();
		void ~RealmsPendingInvitationsScreenController();
		void ~RealmsPendingInvitationsScreenController();
};
