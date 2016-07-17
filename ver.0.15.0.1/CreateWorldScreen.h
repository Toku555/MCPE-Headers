//本来はScreenを継承しています
#pragma once

#include "Button.h"
#include "TextBox.h"
#include "Label.h"
#include "FlatLevelSource.h"
#include "ImageButton.h"
#include "ToggleComponent.h"
#include "MinecraftClient.h"

#include <string>
#include <vector>

class CreateWorldScreen{
public:
	char filler1[0x14];
	MinecraftClient& minecraftClient;//20
	char filler2[0x88];
	int gameType;//160
	int generatorType;//164
	std::vector<std::shared_ptr<ImageButton>,std::allocator<std::shared_ptr<ImageButton>>> gameTypeButtons;//168
	std::vector<std::shared_ptr<ImageButton>,std::allocator<std::shared_ptr<ImageButton>>> generatorButtons;//180
	Button& selectedGameTypeButton;//192
	char filler3[20];
	Button& closeButton;//216
	char filler4[44];
	Button& toggleButton;//264
	char filler5[4];//268
	TextBox& nameBox;//272
	char filler6[4];//276
	TextBox& seedBox;//280
	char filler7[4];//284
	Label& nameLabel;//288
	Label& seedLabel;//292
public:
	void _createWorldClicked(void);
	void _buttonClicked(Button &);
	void _createToggle(bool);
	void _editGameMode(GameType);
	LevelData& _getWorldData(void)const;
	void _setWorldData(LevelData const&);
	bool _isFlat(void);
	bool _isAdvanced(void);
	bool _isOneOf(Button &,std::vector<std::shared_ptr<ImageButton>,std::allocator<std::shared_ptr<ImageButton>>> &,int &)const;
	void _renameLevel(void);
	void closeScreen(void);
	void init(void);
	bool isEditMode(void)const;
};
