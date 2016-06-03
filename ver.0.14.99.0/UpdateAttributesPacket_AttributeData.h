#pragma once
namespace UpdateAttributesPacket{
	class AttributeData{
		public:
		void AttributeData(AttributeInstance const&);
		void AttributeData(AttributeInstance const&);
		void AttributeData(void);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		UpdateAttributesPacket(Mob const&,std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>> const&);
		UpdateAttributesPacket(Mob const&,std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>> const&);
		UpdateAttributesPacket(void);
		UpdateAttributesPacket(void);
		void getAttributeData(void);
		void getAttributeData(void);
		void getEntityId(void);
		void getEntityId(void);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~UpdateAttributesPacket();
		void ~UpdateAttributesPacket();
		void ~UpdateAttributesPacket();
		void ~UpdateAttributesPacket();
	}
};
