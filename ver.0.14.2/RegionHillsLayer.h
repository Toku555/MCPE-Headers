#pragma once
class RegionHillsLayer{
	public:
		RegionHillsLayer(uint,std::shared_ptr<Layer> &,std::shared_ptr<Layer> &);
		void fillArea(LayerData &,int,int,int,int);
		void ~RegionHillsLayer();
		void ~RegionHillsLayer();
};
