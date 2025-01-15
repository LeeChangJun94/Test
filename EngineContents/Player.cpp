#include "PreCompile.h"
#include "Player.h"
#include <EngineCore/DefaultSceneComponent.h>
#include "MyCustomRenderer.h"

Player::Player()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Renderer = CreateDefaultSubObject<MyCustomRenderer>();
	Renderer->SetupAttachment(RootComponent);
	Renderer->SetScale3D({ 100.0f, 150.0f, 100.0f });
}

Player::~Player()
{
}

void Player::BeginPlay()
{
	AActor::BeginPlay();
}

void Player::Tick(float _DeltaTime)
{
	AActor::Tick(_DeltaTime);

	AddActorRotation({ 0.0f, 0.0f, 1.0f });
	//if (UEngineInput::IsPress('W'))
	//{
	//	AddRelativeLocation(FVector{ 0.0f, 100.0f * _DeltaTime, 0.0f });
	//}
	//
	//if (UEngineInput::IsPress('S'))
	//{
	//	AddRelativeLocation(FVector{ 0.0f, -100.0f * _DeltaTime, 0.0f });
	//}
	//
	//if (UEngineInput::IsPress('Q'))
	//{
	//	AddActorRotation(FVector{ 0.0f, 0.0f , 360.0f * _DeltaTime });
	//}
	//
	//if (UEngineInput::IsDown('F'))
	//{
	//	GetWorld()->GetCamera(EEngineCameraType::UICamera)->SetActiveSwitch();
	//}
	//
	//if (UEngineInput::IsPress('E'))
	//{
	//}
	//
	//if (UEngineInput::IsPress('R'))
	//{
	//}
}