#pragma once
class ResourcePacksScreenController{
	public:
		ResourcePacksScreenController(std::shared_ptr<ResourcePacksScreenModel>,bool);
		ResourcePacksScreenController(std::shared_ptr<ResourcePacksScreenModel>,bool);
		void _handleAvailablePackClicked(PropertyBag *);
		void _handleAvailablePackClicked(PropertyBag *);
		void _handleDeselectPack(void);
		void _handleSelectedPackClicked(PropertyBag *);
		void _handleSelectedPackClicked(PropertyBag *);
		void _handleSelectedPackMoveClicked(PropertyBag *);
		void _handleSelectedPackMoveClicked(PropertyBag *);
		void _handleSortPackClicked(PropertyBag *,int);
		void _handleSortPackClicked(PropertyBag *,int);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void ~ResourcePacksScreenController();
		void ~ResourcePacksScreenController();
		void ~ResourcePacksScreenController();
		void ~ResourcePacksScreenController();
};
