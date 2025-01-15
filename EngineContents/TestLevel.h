#pragma once
#include <EngineCore/GameMode.h>

// 설명 :
class ATestLevel : public AGameMode
{
public:
	// constrcuter destructer
	ATestLevel();
	~ATestLevel();

	// delete Function
	ATestLevel(const ATestLevel& _Other) = delete;
	ATestLevel(ATestLevel&& _Other) noexcept = delete;
	ATestLevel& operator=(const ATestLevel& _Other) = delete;
	ATestLevel& operator=(ATestLevel&& _Other) noexcept = delete;

	void Tick(float _DeltaTime);


protected:
	void LevelChangeStart() override;

private:
	// 이렇게 들고 있으면 나는 죽였다고 생각하는데. 살아있을수 있다.
	// ATitleLogo* Logo; => 뎅글링 포인터 부활.
	std::shared_ptr<class MyCustomRenderer> Renderer;
};

//
//// 삼각형 하나
//struct FNaviData
//{
//	int Index;
//
//	FVector Arr[3];
//
//	int ArrIndex[3];
//
//	// std::vector<FNaviData*> LinkArr;
//	// std::vector<int> Arr;
//
//	void Intersect(AActor* Player, float& Dis)
//	{
//		// DirectX::TriangleTests::Intersects()
//	}
//};
//
//class ANaviMeshManager : AActor
//{
//	std::vector<FNaviData> Data;
//
//	void LoadModel(std::string_view _Path)
//	{
//		std::vector<FVector> AllVector;
//	}
//
//	// 연결을 만들어주면 됩니다.
//	void LinkProgress();
//};
//
//class Player
//{
//	FNaviData* CurNaviMesh;
//};