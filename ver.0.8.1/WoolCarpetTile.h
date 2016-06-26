#pragma once
class WoolCarpetTile{
	public:
		WoolCarpetTile(int);
		void canSurvive(Level *,int,int,int);
		void checkCanSurvive(Level *,int,int,int);
		void getAABB(Level *,int,int,int);
		void getItemAuxValueForTileData(int);
		void getSpawnResourcesAuxValue(int);
		void getTexture(int,int);
		void getThickness(void);
		void getTileDataForItemAuxValue(int);
		void isCubeShaped(void);
		void isSolidRender(void);
		void mayPlace(Level *,int,int,int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void shouldRenderFace(LevelSource *,int,int,int,int);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void updateShape(int);
		void ~WoolCarpetTile();
		void ~WoolCarpetTile();
};
