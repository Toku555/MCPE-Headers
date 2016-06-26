#pragma once
class EntityTile{
	public:
		EntityTile(int,Material const*);
		EntityTile(int,std::string const&,Material const*);
		void newTileEntity(void);
		void onPlace(Level *,int,int,int);
		void onRemove(Level *,int,int,int);
		void triggerEvent(Level *,int,int,int,int,int);
		void ~EntityTile();
		void ~EntityTile();
};
