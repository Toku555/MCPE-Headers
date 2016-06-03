#pragma once
class RegionFile{
	public:
		RegionFile(std::string const&);
		RegionFile(std::string const&);
		void _close(void);
		void _write(int,RakNet::BitStream &);
		void open(void);
		void open(void);
		void readChunk(int,int,RakNet::BitStream **);
		void readChunk(int,int,RakNet::BitStream **);
		void writeChunk(int,int,RakNet::BitStream &);
		void ~RegionFile();
		void ~RegionFile();
		void ~RegionFile();
		void ~RegionFile();
};
