#include "PreCompile.h"
#include "ContentsCore.h"
#include <EngineCore/Level.h>
#include <EngineCore/EngineTexture.h>
#include <EngineCore/EngineSprite.h>
#include <EngineCore/EngineShader.h>
#include <EngineCore/EngineMaterial.h>
#include "TitleGameMode.h"
#include "TileMapGameMode.h"
#include "TestLevel.h"
#include <EngineCore/HUD.h>
#include <EngineCore/EngineGUI.h>
#include <EngineCore/EngineGUIWindow.h>
#include "TitleHUD.h"
#include "Player.h"
#include "ContentsEditorGUI.h"

// #define�� �׳� ������ ����
CreateContentsCoreDefine(UContentsCore);

UContentsCore::UContentsCore()
{
}

UContentsCore::~UContentsCore()
{
}


void UContentsCore::EngineStart(UEngineInitData& _Data)
{
	// mainwindow�� �ƹ��� �ǵ�� �ȵȴ�.
	// �� �������ݾ� ������ �����ϴ� �������°� �����ϴ����� ������Ѵ�.

	_Data.WindowPos = { 100, 100 };
	_Data.WindowSize = { 1280, 720 };

	MyGSetting();



	// ���ΰ� APawn ��� ��������.

	UEngineCore::CreateLevel<ATestLevel, Player, AHUD>("TestLevel");
	UEngineCore::OpenLevel("TestLevel");


}

void UContentsCore::EngineTick(float _DeltaTime)
{

}

void UContentsCore::EngineEnd()
{

}