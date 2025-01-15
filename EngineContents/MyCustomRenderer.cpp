#include "PreCompile.h"
#include "MyCustomRenderer.h"

MyCustomRenderer::MyCustomRenderer()
{

	for (int i = 0; i < 8; i++)
	{
		CreateRenderUnit();
		SetMesh("Tri_" + std::to_string(i + 1), i);
		SetMaterial("MyMaterial", i);
	}

	MyColor.Albedo = float4(1.0f, 1.0f, 1.0f, 1.0f);
	GetRenderUnit().ConstantBufferLinkData("FMyColor", MyColor);
}

MyCustomRenderer::~MyCustomRenderer()
{
}