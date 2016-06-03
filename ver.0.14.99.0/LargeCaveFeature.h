#pragma once
class LargeCaveFeature{
	public:
		void _thinSand(uchar *,int);
		void addFeature(LevelChunk &,Dimension &,Random &,int,int);
		void addFeature(LevelChunk &,Dimension &,Random &,int,int);
		void addRoom(Random &,LevelChunk &,Vec3 const&);
		void addTunnel(Random &,LevelChunk &,Vec3 const&,float,float,float,int,int,float);
		void addTunnel(Random &,LevelChunk &,Vec3 const&,float,float,float,int,int,float);
		void isDiggable(int,int);
		void ~LargeCaveFeature();
		void ~LargeCaveFeature();
};
