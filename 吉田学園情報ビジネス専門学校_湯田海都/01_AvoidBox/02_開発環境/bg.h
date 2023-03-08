//=============================================================================
//
// BGオブジェクト
// Author : 浜田琉雅
//
//=============================================================================
#ifndef _BG_H_			// このマクロ定義がされてなかったら
#define _BG_H_			// 二重インクルード防止のマクロ定義

//-----------------------------------------------------------------------------
// include
//-----------------------------------------------------------------------------
#include "renderer.h"
#include "object_polygon3d.h"
#include "texture.h"

//=============================================================================
// 背景のクラス
//=============================================================================
class CBg : public CObjectPolygon3D
{
public:
	static CBg *CBg::Create();

	CBg(CTaskGroup::EPriority list = CTaskGroup::LEVEL_2D_BG);
	~CBg() override;

	HRESULT Init() override;
	void Uninit() override;
	void NormalUpdate() override;
	void Draw() override;

private:
	D3DXVECTOR3 m_Speed;
	D3DXVECTOR3 m_MoveSpeed;
	D3DXVECTOR3 m_AddSpeed;
};

#endif
